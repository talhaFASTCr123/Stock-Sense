#include <iostream>
#include "Reviews.h"
#include "Products.h"
#include "Users.h"

// ------------------------ Review Definitions ------------------------

Review::Review() : username(""), rating(0), comment(""), date(time(0)) {
    cout << "New review created with default values\n";
}

Review::Review(string u, int r, string c, time_t d) :
    username(u), rating(r), comment(c), date(d) {
    cout << "New review created for user: " << u << "\n";
}

string Review::getUsername() const {
    cout << "Username: " << username << "\n";
    return username;
}

int Review::getRating() const {
    cout << "Rating: " << rating << "\n";
    return rating;
}

string Review::getComment() const {
    cout << "Comment: " << comment << "\n";
    return comment;
}

time_t Review::getDate() const {
    cout << "Date: " << date << "\n";
    return date;
}

void Review::setUsername(string u) {
    cout << "Enter username: ";
    cin >> username;
}

void Review::setRating(int r) {
    cout << "Enter rating (1-5): ";
    cin >> rating;
    while (rating < 1 || rating > 5) {
        cout << "Invalid! Enter again (1-5): ";
        cin >> rating;
    }
}

void Review::setComment(string c) {
    cout << "Enter comment: ";
    cin.ignore();
    getline(cin, comment);
}

void Review::setDate(time_t d) {
    cout << "Enter date (timestamp): ";
    cin >> date;
}

Review::~Review() {
    cout << "Review from " << username << " destroyed\n";
}

// ------------------------ Product ------------------------

Product::Product()
    : id(0), name(nullptr), category(nullptr), price(0.0), quantity(0), totalSales(0),
    reviews(nullptr), reviewCount(0), reviewCapacity(0) {
}

Product::~Product() {
    delete[] name;
    delete[] category;
    delete[] reviews;
}

void Product::resizeReviewArray() {
    int newCapacity = reviewCapacity == 0 ? 2 : reviewCapacity * 2;
    Review* newReviews = new Review[newCapacity];
    for (int i = 0; i < reviewCount; i++) {
        newReviews[i] = reviews[i];
    }
    delete[] reviews;
    reviews = newReviews;
    reviewCapacity = newCapacity;
}

// Getters
int Product::getId() const { return id; }
char* Product::getName() const { return name; }
char* Product::getCategory() const { return category; }
double Product::getPrice() const { return price; }
int Product::getQuantity() const { return quantity; }
int Product::getTotalSales() const { return totalSales; }
Review* Product::getAllReviews() const { return reviews; }
int Product::getReviewCount() const { return reviewCount; }

// Setters
void Product::setId(int newId) { id = newId; }
void Product::setName(char* newName) { name = newName; }
void Product::setCategory(char* newCategory) { category = newCategory; }
void Product::setPrice(double newPrice) { price = newPrice; }
void Product::setQuantity(int newQuantity) { quantity = newQuantity; }
void Product::setTotalSales(int newSales) { totalSales = newSales; }

void Product::updateStock(int quantityChange) {
    quantity += quantityChange;
    if (quantityChange < 0) {
        totalSales += -quantityChange;
    }
}

void Product::addReview(const Review& review) {
    if (reviewCount >= reviewCapacity) {
        resizeReviewArray();
    }
    reviews[reviewCount++] = review;
}

double Product::getAverageRating() const {
    if (reviewCount == 0) return 0.0;
    double total = 0.0;
    for (int i = 0; i < reviewCount; i++) {
        total += reviews[i].getRating();
    }
    return total / reviewCount;
}

// ------------------------ Inventory ------------------------

Inventory::Inventory() {
    productCount = 0;
    capacity = 10;
    products = new Product * [capacity];
}

Inventory::~Inventory() {
    for (int i = 0; i < productCount; i++) {
        freeProduct(products[i]);
    }
    delete[] products;
}

char* Inventory::allocateString(const char* source) {
    if (!source) return nullptr;
    int length = 0;
    while (source[length]) length++;
    char* result = new char[length + 1];
    for (int i = 0; i <= length; i++) {
        result[i] = source[i];
    }
    return result;
}

void Inventory::freeProduct(Product* product) {
    if (product) {
        delete[] product->getName();
        delete[] product->getCategory();
        delete product;
    }
}

void Inventory::resizeInventory(bool increase) {
    int newCapacity = increase ? capacity * 2 : capacity / 2;
    if (newCapacity < 1) newCapacity = 1;

    Product** newProducts = new Product * [newCapacity];
    for (int i = 0; i < productCount; i++) {
        newProducts[i] = products[i];
    }

    delete[] products;
    products = newProducts;
    capacity = newCapacity;
}

Product** Inventory::getProducts() const { return products; }
int Inventory::getProductCount() const { return productCount; }
int Inventory::getCapacity() const { return capacity; }

void Inventory::setProducts(Product** newProducts) { products = newProducts; }
void Inventory::setProductCount(int count) { productCount = count; }
void Inventory::setCapacity(int newCapacity) { capacity = newCapacity; }

void Inventory::addProduct(int id, const char* name, const char* category, double price, int quantity) {
    if (productCount >= capacity) {
        resizeInventory(true);
    }

    Product* newProduct = new Product;
    newProduct->setId(id);
    newProduct->setName(allocateString(name));
    newProduct->setCategory(allocateString(category));
    newProduct->setPrice(price);
    newProduct->setQuantity(quantity);
    newProduct->setTotalSales(0);

    products[productCount++] = newProduct;
}

void Inventory::deleteProduct(int productId) {
    for (int i = 0; i < productCount; i++) {
        if (products[i]->getId() == productId) {
            freeProduct(products[i]);
            for (int j = i; j < productCount - 1; j++) {
                products[j] = products[j + 1];
            }
            productCount--;
            if (productCount < capacity / 4 && capacity > 10) {
                resizeInventory(false);
            }
            return;
        }
    }
}

Inventory* Inventory::filterByCategory(const char* category) {
    Inventory* filteredInventory = new Inventory;
    filteredInventory->setProductCount(0);
    filteredInventory->setCapacity(10);
    filteredInventory->setProducts(new Product * [filteredInventory->getCapacity()]);

    for (int i = 0; i < productCount; i++) {
        bool match = true;
        for (int k = 0; category[k] && products[i]->getCategory()[k]; k++) {
            if (category[k] != products[i]->getCategory()[k]) {
                match = false;
                break;
            }
        }

        if (match) {
            if (filteredInventory->getProductCount() >= filteredInventory->getCapacity()) {
                int newCapacity = filteredInventory->getCapacity() * 2;
                Product** newProducts = new Product * [newCapacity];
                for (int j = 0; j < filteredInventory->getProductCount(); j++) {
                    newProducts[j] = filteredInventory->getProducts()[j];
                }
                delete[] filteredInventory->getProducts();
                filteredInventory->setProducts(newProducts);
                filteredInventory->setCapacity(newCapacity);
            }

            filteredInventory->getProducts()[filteredInventory->getProductCount()] = products[i];
            filteredInventory->setProductCount(filteredInventory->getProductCount() + 1);
        }
    }
    return filteredInventory;
}

void Inventory::freeFilteredInventory(Inventory* filtered) {
    if (filtered) {
        delete[] filtered->getProducts();
        delete filtered;
    }
}
Product* Inventory::findProductById(int id)
{
    for (int i = 0; i < productCount; i++)
    {
        if (products[i]->getId()==id)
        {
            return products[i];
        }
        else 
        {
            
            return nullptr;
        }

    }
}
// ------------------ Utility Functions ------------------

bool validateEmailFormat(const string& email) {
    int atIndex = -1, dotIndex = -1;
    int len = email.length();

    if (len < 5) return false;

    for (int i = 0; i < len; i++) {
        if (email[i] == ' ') return false;

        if (email[i] == '@') {
            if (atIndex != -1) return false; // multiple @
            atIndex = i;
        }
        if (email[i] == '.' && atIndex != -1 && i > atIndex + 1)
            dotIndex = i;
    }

    return atIndex != -1 && dotIndex != -1 && dotIndex > atIndex + 1 && dotIndex < len - 1;
}

string encryptPassword(const string& password) {
    // Just returning plain password for now
    return password;
}

#include "Users.h"
#include <iostream>
using namespace std;

#pragma once
#include <string>
using namespace std;

bool validateEmailFormat(const string& email);
string encryptPassword(const string& password);

class Users {
protected:
    string username;
    string password;
    string role;
    string email;

    string getUsername();
    string getPassword();
    string getRole();
    string getemail();
    void setPassword(string newPass);
    virtual void displayInfo();

private:
    Users();
    Users(string uname, string pass, string r, string e);

public:
    virtual ~Users();

    friend class UserManager;
};

class Employee : virtual public Users {
private:
    Employee();
    Employee(string uname, string pass, string umail);
protected:
    void displayInfo() override;
public:
    ~Employee();

    friend class UserManager;
};

class Admin : public Employee {
private:
    Admin();
    Admin(string uname, string pass, string umail);
protected:
    void displayInfo() override;
public:
    ~Admin();

    friend class UserManager;
};

class Owner : public Users {
private:
    Owner();
    Owner(string uname, string pass, string email);
    void promoteUser(Users*& users);
    void demoteUser(Users*& users);
    void deleteUser(Users**& users, int& count, string uname);
protected:
    void displayInfo() override;
public:
    ~Owner();

    friend class UserManager;
};

class UserManager {
private:
    Users** users;
    int userCount;
    int userCapacity;
    Users* currentUser;

    UserManager();
    void resizeUsers();
public:
    ~UserManager();
    bool login(string username, string password);
    void logout();
    bool registerUser(Users* newUser);
    Users* getCurrentUser();
    Users* getUserByEmail(string uemail);
    void displayAllUsers();

    friend class CompanyFile;
};
