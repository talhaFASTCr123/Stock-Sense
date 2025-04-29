#include <iostream>
#include "Reviews.h"

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

// ------------------------ ReviewManager Definitions ------------------------

ReviewManager::ReviewManager() : reviews(nullptr), reviewCount(0), reviewCapacity(0) {
    cout << "Review manager initialized\n";
}

ReviewManager::~ReviewManager() {
    delete[] reviews;
    cout << "Review manager destroyed\n";
}

void ReviewManager::resizeReviewArray()
{
    int newCapacity = reviewCapacity == 0 ? 2 : reviewCapacity * 2;
    Review* newArray = new Review[newCapacity];

    for (int i = 0; i < reviewCount; i++) {
        newArray[i] = reviews[i];
    }

    delete[] reviews;
    reviews = newArray;
    reviewCapacity = newCapacity;
    cout << "Resized to " << newCapacity << " elements\n";
}

void ReviewManager::addReview(string u, int r, string c, time_t d)
{
    if (reviewCount >= reviewCapacity)
        resizeReviewArray();

    reviews[reviewCount] = Review(u, r, c, d);
    reviewCount++;

    cout << "✅ Review added for user: " << u << "\n";
}

double ReviewManager::getAverageRating() {
    if (reviewCount == 0) {
        cout << "No reviews found\n";
        return 0.0;
    }

    double total = 0.0;
    for (int i = 0; i < reviewCount; i++) {
        total += reviews[i].getRating();
    }
    return total / reviewCount;
}

int ReviewManager::getTotalReviewCount() {
    cout << "Total reviews: " << reviewCount << "\n";
    return reviewCount;
}

Review* ReviewManager::getAllReviews() const {
    return reviews;
}
