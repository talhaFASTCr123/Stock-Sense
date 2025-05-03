#pragma once
#include "Products.h"
#include "Reviews.h"
#include "Users.h"
#include <fstream>
#include <sstream>

class CompanyFile 
{
private:
	Inventory *inventory; // products array
	UserManager *directory; // users array
	const string name;


public:
	CompanyFile(string n) :name(n)
	{
		inventory = new Inventory();
		directory = new UserManager();
	}

	UserManager* getDirectory() { return directory; }
	Inventory* getInventory() { return inventory; }

	// Checking if the company already exists or not
	bool companyExists(const string& companyName) {
		ifstream file(companyName + "UserDirectory.csv");
		return file.is_open(); // returns true if f can open
	}


	CompanyFile* loadCompany(const string& companyName) {
		CompanyFile* company = new CompanyFile(companyName);
		company->loadUsersFromFile();
		company->loadProductsFromFile();
		return company;
	}


	void setPasswordForEmail(string email, string newPassword) {
		Users* user = directory->getUserByEmail(email);
		if (user) {
			user->setPassword(encryptPassword(newPassword));
			saveUsersToFile(); // persist change
		}
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
		return directory->login(username, password);
	}
	void logout()
	{
		directory->logout();
	}
	bool registerUser(Users* newUsers)
	{
		return directory->registerUser(newUsers);
	}
	bool registerNewOwner(string fullName, string email) {
		string username = email.substr(0, email.find('@'));

		// Create a Users object manually
		Users* owner = new Users();
		owner->username = username;
		owner->password = "";  // initially no password
		owner->email = email;
		owner->role = "Owner";

		bool success = directory->registerUser(owner); // insert into in-memory directory
		if (success) {
			saveUsersToFile();  // persist to file
			return true;
		}
		else {
			delete owner;
			return false;
		}
	}
	Users* getCurrentUser()
	{
		return directory->getCurrentUser();
	}
	Users* getUserByMail(string uemail)
	{
		return directory->getUserByEmail(uemail);
	}
	void displayAllUsers()
	{
		directory->displayAllUsers();
	}


	// ============================ FILE HANDLING ============================
	const string userFile = name + "UserDirectory.csv";
	const string productFile = name + "Inventory.csv";
	
	void saveUsersToFile()
	{
		Users** userList = directory->users;
		ofstream file(userFile);

		if (!file.is_open()) {
			cerr << "Failed to open file: " << userFile << endl;
			return;
		}

		// Write user count without trailing commas
		file << directory->userCount << "\n";
		file << "Username,Password,Role,Email\n";

		// Write each user's data
		for (int i = 0; i < directory->userCount; ++i) {
			file << userList[i]->getUsername() << ","
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

		// Step 1: Get user count line safely
		if (!getline(file, line)) {
			cerr << "User count line missing in file.\n";
			return;
		}

		// Step 2: Extract only the first CSV token for user count
		stringstream countStream(line);
		string countToken;
		getline(countStream, countToken, ',');

		// Step 3: Validate that it's all digits
		if (countToken.empty()) {
			cerr << "Invalid user count in file: " << userFile << endl;
			return;
		}
		for (char c : countToken) {
			if (!isdigit(c)) {
				cerr << "Invalid user count in file: " << userFile << endl;
				return;
			}
		}

		int count = stoi(countToken);

		// Bounds check
		if (count <= 0 || count > 150) {
			cerr << "User count out of safe range: " << count << endl;
			return;
		}

		directory->userCount = count;

		// Step 4: Clean up old memory safely
		if (directory->users != nullptr) {
			for (int i = 0; i < 150; ++i) {
				if (directory->users[i] != nullptr) {
					delete directory->users[i];
					directory->users[i] = nullptr;
				}
			}
			delete[] directory->users;
			directory->users = nullptr;
		}

		// Step 5: Allocate new user array
		directory->users = new Users * [directory->userCount];
		for (int i = 0; i < directory->userCount; ++i) {
			directory->users[i] = new Users();
		}

		Users** userList = directory->users;

		// Step 6: Skip the CSV header
		if (!getline(file, line)) {
			cerr << "CSV header missing.\n";
			return;
		}

		// Step 7: Parse user entries
		int loaded = 0;
		while (getline(file, line) && loaded < directory->userCount) {
			stringstream ss(line);
			string username, password, role, email;

			getline(ss, username, ',');
			getline(ss, password, ',');
			getline(ss, role, ',');
			getline(ss, email, ',');

			userList[loaded]->username = username;
			userList[loaded]->password = password;
			userList[loaded]->role = role;
			userList[loaded]->email = email;
			loaded++;
		}

		cout << "Loaded " << loaded << " user(s) from file: " << userFile << endl;
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
			delete [] reviews;
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
