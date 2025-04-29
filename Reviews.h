#pragma once
#include <iostream>
#include <string>
#include <ctime>
using namespace std;

class Review {
private:
    string username;
    int rating;
    string comment;
    time_t date;

public:
    Review();
    Review(string u, int r, string c, time_t d);

    string getUsername() const;
    int getRating() const;
    string getComment() const;
    time_t getDate() const;

    void setUsername(string u);
    void setRating(int r);
    void setComment(string c);
    void setDate(time_t d);

    ~Review();
};

class ReviewManager {
private:
    Review* reviews;
    int reviewCount;
    int reviewCapacity;

public:
    ReviewManager();
    ~ReviewManager();

    void addReview(string u, int r, string c, time_t d);
    double getAverageRating();
    int getTotalReviewCount();
    Review* getAllReviews() const;
    void resizeReviewArray();
};
