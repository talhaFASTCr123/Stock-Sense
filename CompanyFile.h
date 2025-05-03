#pragma once
#include "Products.h"
#include "Reviews.h"
#include "Users.h"
#include <fstream>
#include <sstream>

class CompanyFile 
{
	Inventory *inventory;
	UserManager *directory;
	const string name;
public:
	CompanyFile(string n) :name(n)
	{
		inventory = new Inventory();
		directory = new UserManager();
	}

	// ALL INVENTORY RELATED METHODS
	void addProduct(int id, const char* name, const char* category, double price, int quantity)
	{
		inventory->addProduct(id,  name,  category,  price,  quantity);
	}
	void deleteProduct(int productId)
	{
		inventory->deleteProduct(productId);
	}
	Inventory* filterByCategory(const char* category)
	{
		return inventory->filterByCategory(category);
	}
	void freeFilteredInventory(Inventory* filtered)
	{
		inventory->freeFilteredInventory(filtered);
	}
	//ALL REVIEW RELATED METHODS
	void addReview(const Review& review,int productId)
	{
		Product* reviewedProduct = inventory->findProductById(productId);
		reviewedProduct->addReview(review);
	}
	Review* getAllReviews(int productId)
	{
		Product* reviewedProduct = inventory->findProductById(productId);
		Review* allReviews = reviewedProduct->getAllReviews();
		return allReviews;
	}
	double getAverageRating(int productId)
	{
		Product* reviewedProduct = inventory->findProductById(productId);
		return reviewedProduct->getAverageRating();
	}

	//ALL USER RELATED METHODS
	bool login(string username, string password)
	{
		directory->login(username, password);
	}
	void logout()
	{
		directory->logout();
	}
	bool registerUser(Users* newUsers)
	{
		directory->registerUser(newUsers);
	}
	Users* getCurrentUser()
	{
		directory->getCurrentUser();
	}
	Users* getUserByName(string uemail)
	{
		directory->getUserByEmail(uemail);
	}
	void displayAllUsers()
	{
		directory->displayAllUsers();
	}


	//FILE HANDLING
	const string userFile = name + "UserDirectory.csv";
	const string productFile = name + "Inventory.csv";
	
	void saveUsersToFile()
	{
		Users**userList = directory->users;
		ofstream file(userFile);

		if (!file.is_open()) {
			cerr << "Failed to open file: " << userFile << endl;
			return;
		}

		// Write CSV header
		file << directory->userCount << endl;
		file << "Username,Password,Role,Email\n";

		// Write each user's data
		for (int i = 0; i < directory->userCount; ++i) {
			file <<userList[i]->getUsername() << ","
				<< userList[i]->getPassword() << ","
				<< userList[i]->getRole() << ","
				<< userList[i]->getemail() << "\n";
		}

		file.close();
		cout << "Data written to " << userFile << " successfully." << endl;
	}
	void loadUsersFromFile()
	{
		ifstream file(userFile);
		string line;

		if (!file.is_open()) {
			cerr << "Failed to open file: " << userFile << endl;
			return;
		}

		//get count
		getline(file, line);
		directory->userCount = stoi(line);
		
		directory->users = new Users * [directory->userCount];
		Users** userList = directory->users;
		//skip header
		getline(file, line);
		int count = 0;
		while (getline(file, line) && count < directory->userCount) {
			stringstream ss(line);
			string username, password, role, email;

			// Parse CSV fields
			getline(ss, username, ',');
			getline(ss, password, ',');
			getline(ss, role, ',');
			getline(ss, email, ',');

			userList[count]->username = username;
			userList[count]->password = password;
			userList[count]->role = role;
			userList[count]->email = email;
			count++;
		}

		file.close();
	}

	void saveProductsToFile()
	{
		Product** products = inventory->getProducts();
		
		ofstream file(productFile);

		if (!file.is_open()) {
			cerr << "Failed to open file: " << productFile << endl;
			return;
		}

		// Write CSV header
		file << inventory->getProductCount() << endl;
		file << "ID,Name,Category,Price,Quantity,Total Sales,Reviews\n";

		// Write each user's data
		for (int i = 0; i < inventory->getProductCount(); ++i) {
			file << products[i]->getId() << ","
				<< products[i]->getName() << ","
				<< products[i]->getCategory() << ","
				<< products[i]->getPrice() << ","
				<< products[i]->getQuantity() << ","
				<< products[i]->getTotalSales() << ",";
			Review* reviews = products[i]->getAllReviews();
			

			for (int j = 0; j < products[i]->getReviewCount(); j++)
			{
				file << reviews[j].getComment() << "|" 
					<< reviews[j].getRating() << "|" 
					<< reviews[j].getUsername() << "|"
					<< reviews[j].getDate();
			}
			if (i< inventory->getProductCount()-1)
			{
				file << ",";
			}
			file << "\n";
			delete[]reviews;
		}

		file.close();
		cout << "Data written to " << productFile << " successfully." << endl;
	}

		void loadProductsFromFile()
	{
		ifstream file(productFile);
		string line;

		if (!file.is_open()) {
			cerr << "Failed to open file: " << productFile << endl;
			return;
		}

		// Read and ignore product count
		getline(file, line);

		// Skip CSV header
		getline(file, line);

		while (getline(file, line)) {
			stringstream ss(line);
			string idStr, nameStr, categoryStr, priceStr, quantityStr, salesStr;

			// Read core product fields
			getline(ss, idStr, ',');
			getline(ss, nameStr, ',');
			getline(ss, categoryStr, ',');
			getline(ss, priceStr, ',');
			getline(ss, quantityStr, ',');
			getline(ss, salesStr, ',');

			int id = atoi(idStr.c_str());
			double price = atof(priceStr.c_str());
			int quantity = atoi(quantityStr.c_str());
			int totalSales = atoi(salesStr.c_str());

			// Add product to inventory
			inventory->addProduct(id, nameStr.c_str(), categoryStr.c_str(), price, quantity);

			// Access the product just added
			Product** products = inventory->getProducts();
			Product* product = products[inventory->getProductCount() - 1];
			product->setTotalSales(totalSales);

			// Parse and add reviews
			string reviewField;
			while (getline(ss, reviewField, ',')) {
				stringstream reviewStream(reviewField);
				string comment, ratingStr, username, dateStr;

				getline(reviewStream, comment, '|');
				getline(reviewStream, ratingStr, '|');
				getline(reviewStream, username, '|');
				getline(reviewStream, dateStr, '|');

				time_t date = atol(dateStr.c_str());

				Review review;
				review.setComment(comment);
				review.setRating(atoi(ratingStr.c_str()));
				review.setUsername(username);
				review.setDate(date);

				product->addReview(review);
			}
		}

		file.close();
		cout << "Products loaded from " << productFile << " successfully." << endl;
	}
};
