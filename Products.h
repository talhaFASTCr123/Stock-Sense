#ifndef PRODUCTS_H
#define PRODUCTS_H

#pragma once
#include "Reviews.h"

class Product {
private:
    int id;
    char* name;
    char* category;
    double price;
    int quantity;
    int totalSales;
    Review* reviews;
    int reviewCount;
    int reviewCapacity;

    void resizeReviewArray();

public:
    Product();
    ~Product();

    // Getters
    int getId() const;
    char* getName() const;
    char* getCategory() const;
    double getPrice() const;
    int getQuantity() const;
    int getTotalSales() const;
    Review* getAllReviews() const;
    int getReviewCount() const;

    // Setters
    void setId(int newId);
    void setName(char* newName);
    void setCategory(char* newCategory);
    void setPrice(double newPrice);
    void setQuantity(int newQuantity);
    void setTotalSales(int newSales);

    void updateStock(int quantityChange);
    void addReview(const Review& review);
    double getAverageRating() const;
};

class Inventory {
private:
    Product** products;
    int productCount;
    int capacity;

    char* allocateString(const char* source);
    void freeProduct(Product* product);
    void resizeInventory(bool increase);

public:
    Inventory();
    ~Inventory();

    Product** getProducts() const;
    int getProductCount() const;
    int getCapacity() const;

    void setProducts(Product** newProducts);
    void setProductCount(int count);
    void setCapacity(int newCapacity);

    void addProduct(int id, const char* name, const char* category, double price, int quantity);
    void deleteProduct(int productId);
    Inventory* filterByCategory(const char* category);
    void freeFilteredInventory(Inventory* filtered);
};

#endif
