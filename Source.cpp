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

// ------------------ Users Class ------------------

Users::Users() : username(" "), password(" "), role(" "), email(" "), company(" ") {}

Users::Users(string uname, string pass, string r, string e, string c)
    : username(uname), password(pass), role(r), email(e), company(c) {
}

string Users::getUsername() { return username; }
string Users::getPassword() { return password; }
string Users::getRole() { return role; }
string Users::getemail() { return email; }
string Users::getCompany() { return company; }

void Users::setPassword(string newPass) {
    password = newPass;
    cout << "Password changed successfully!\n";
}

void Users::setCompany(string newCompany) {
    company = newCompany;
    cout << "Company name changed successfully!\n";
}

void Users::displayInfo() {
    cout << "\nUser Details:\n";
    cout << "Username: " << username << endl;
    cout << "Role: " << role << endl;
    cout << "Company: " << company << endl << endl;
}

Users::~Users() {
    cout << "User deleted successfully!\n";
}

// ------------------ Employee Class ------------------

Employee::Employee() : Users(" ", " ", "Employee", " ", " ") {}

Employee::Employee(string uname, string pass, string umail, string cmpny) {
    username = uname;
    password = pass;
    email = umail;
    company = cmpny;
    role = "Employee";
}

// ------------------ Admin Class ------------------

Admin::Admin() : Employee() {
    role = "Admin";
}

Admin::Admin(string uname, string pass, string umail, string c)
    : Employee(uname, pass, umail, c) {
    role = "Admin";
}

// ------------------ Owner Class ------------------

Owner::Owner() : Users(" ", " ", "Owner", " ", " ") {}

Owner::Owner(string uname, string pass, string email, string c)
    : Users(uname, pass, "Owner", uname + "@gmail.com", c) {
}

void Owner::promoteUser(Users*& user) {
    if (user->getRole() == "Employee") {
        user = new Admin(user->getUsername(), user->getPassword(), user->getemail(), user->getCompany());
        cout << "User " << user->getUsername() << " promoted to Admin!\n\n";
    }
}

void Owner::demoteUser(Users*& user) {
    if (user->getRole() == "Admin") {
        user = new Employee(user->getUsername(), user->getPassword(), user->getemail(), user->getCompany());
        cout << "User " << user->getUsername() << " demoted to Employee!\n\n";
    }
}

void Owner::deleteUser(Users**& users, int& count, string uname) {
    for (int i = 0; i < count; i++) {
        if (users[i]->getUsername() == uname) {
            delete users[i];
            for (int j = i; j < count - 1; j++) {
                users[j] = users[j + 1];
            }
            count--;
            cout << "User " << uname << " removed successfully!\n";
            return;
        }
    }
    cout << "User not found!\n";
}

// ------------------ UserManager Class ------------------

UserManager::UserManager() {
    userCount = 0;
    userCapacity = 150;
    currentUser = nullptr;
    users = new Users * [userCapacity];
}

UserManager::~UserManager() {
    for (int i = 0; i < userCount; i++) {
        delete users[i];
    }
    delete[] users;
    users = nullptr;
}

bool UserManager::login(string username, string password) {
    for (int i = 0; i < userCount; i++) {
        if (users[i]->getUsername() == username && users[i]->getPassword() == password) {
            currentUser = users[i];
            cout << "User logged in successfully!\n";
            return true;
        }
    }
    cout << "Login failed! Check credentials.\n";
    return false;
}

void UserManager::logout() {
    currentUser = nullptr;
    cout << "Logged out successfully!\n";
}

bool UserManager::registerUser(Users* newUser) {
    // Check duplicate email
    for (int i = 0; i < userCount; i++) {
        if (users[i]->getemail() == newUser->getemail()) {
            cout << "Email already registered!\n";
            return false;
        }
    }

    // Validate email format
    if (!validateEmailFormat(newUser->getemail())) {
        cout << "Invalid email format!\n";
        return false;
    }

    // Encrypt password
    string encrypted = encryptPassword(newUser->getPassword());
    newUser->setPassword(encrypted);

    if (userCount >= userCapacity) resizeUsers();
    users[userCount++] = newUser;

    cout << "✅ User registered successfully.\n";
    return true;
}

void UserManager::resizeUsers() {
    int newCap = userCapacity * 2;
    Users** NewUsers = new Users * [newCap];
    for (int i = 0; i < userCount; i++) {
        NewUsers[i] = users[i];
    }
    delete[] users;
    users = NewUsers;
    userCapacity = newCap;
}

Users* UserManager::getCurrentUser() {
    return currentUser;
}

Users* UserManager::getUserByEmail(string uemail) {
    for (int i = 0; i < userCount; i++) {
        if (users[i]->getemail() == uemail) {
            cout << "User with email found: " << uemail << endl;
            return users[i];
        }
    }
    return nullptr;
}

void UserManager::displayAllUsers() {
    cout << "\nAll users:\n";
    for (int i = 0; i < userCount; i++) {
        users[i]->displayInfo();
    }
}

