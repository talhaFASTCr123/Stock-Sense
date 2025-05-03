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

	}
};
