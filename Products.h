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

    void resizeReviewArray() {
        int newCapacity = reviewCapacity == 0 ? 2 : reviewCapacity * 2;
        Review* newReviews = new Review[newCapacity];

        for (int i = 0; i < reviewCount; i++) {
            newReviews[i] = reviews[i];
        }

        delete[] reviews;
        reviews = newReviews;
        reviewCapacity = newCapacity;
    }

public:
    Product() : id(0), name(nullptr), category(nullptr), price(0.0), quantity(0), totalSales(0) {}
    ~Product() {
        delete[] name;
        delete[] category;
        delete[] reviews;
    }

    // Getters
    int getId() const { return id; }
    char* getName() const { return name; }
    char* getCategory() const { return category; }
    double getPrice() const { return price; }
    int getQuantity() const { return quantity; }
    int getTotalSales() const { return totalSales; }
    Review* getAllReviews() const { return reviews; }
    int getReviewCount() const { return reviewCount; }

    // Setters
    void setId(int newId) { id = newId; }
    void setName(char* newName) { name = newName; }
    void setCategory(char* newCategory) { category = newCategory; }
    void setPrice(double newPrice) { price = newPrice; }
    void setQuantity(int newQuantity) { quantity = newQuantity; }
    void setTotalSales(int newSales) { totalSales = newSales; }

    // Track sales (positive delta for sales)
    void updateStock(int quantityChange) {
        quantity += quantityChange;
        if (quantityChange < 0) {
            // Track units sold (negative change means items were sold)
            totalSales += -quantityChange;
        }
    }


    // Add review to product
    void addReview(const Review& review) {
        if (reviewCount >= reviewCapacity) {
            resizeReviewArray();
        }
        reviews[reviewCount++] = review;
    }

    // Get average rating
    double getAverageRating() const {
        if (reviewCount == 0) return 0.0;

        double total = 0.0;
        for (int i = 0; i < reviewCount; i++) {
            total += reviews[i].getRating();
        }
        return total / reviewCount;
    }

};

class Inventory {
private:
    Product** products;
    int productCount;
    int capacity;

    // Helper function to allocate memory for a string
    char* allocateString(const char* source) {
        if (!source) return nullptr;
        int length = 0;
        while (source[length]) length++;
        char* result = new char[length + 1];
        for (int i = 0; i <= length; i++) {
            result[i] = source[i];
        }
        return result;
    }

    // Helper function to free product memory
    void freeProduct(Product* product) {
        if (product) {
            delete[] product->getName();
            delete[] product->getCategory();
            delete product;
        }
    }

    // Helper function to resize inventory
    void resizeInventory(bool increase) {
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

public:
    Inventory() {
        productCount = 0;
        capacity = 10;
        products = new Product * [capacity];
    }

    ~Inventory() {
        for (int i = 0; i < productCount; i++) {
            freeProduct(products[i]);
        }
        delete[] products;
    }

    // Getters
    Product** getProducts() const { return products; }
    int getProductCount() const { return productCount; }
    int getCapacity() const { return capacity; }

    // Setters
    void setProducts(Product** newProducts) { products = newProducts; }
    void setProductCount(int count) { productCount = count; }
    void setCapacity(int newCapacity) { capacity = newCapacity; }

    // Add a new product
    void addProduct(int id, const char* name, const char* category, double price, int quantity) {
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

        products[productCount] = newProduct;
        productCount++;
    }

    // Delete the product by ID
    void deleteProduct(int productId) {
        for (int i = 0; i < productCount; i++) {
            if (products[i]->getId() == productId) {
                freeProduct(products[i]);
                // Shift remaining products
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

    // Fixed filterByCategory: Correctly copy matching products
    Inventory* filterByCategory(const char* category) {
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

    // Clean up filtered inventory
    void freeFilteredInventory(Inventory* filtered) {
        if (filtered) {
            delete[] filtered->getProducts();
            delete filtered;
        }
    }
};

#endif