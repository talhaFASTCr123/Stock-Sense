#pragma once
#include "Products.h"
#include "Reviews.h"
#include <algorithm>
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
	string getCompanyName() { return name; };

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

		bool success = directory->registerUser(owner);
		if (success) {
			saveUsersToFile();  // persist to file
			saveProductsToFile();
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


	void loadUsersFromFile() {
		ifstream file(userFile);
		if (!file.is_open()) {
			cout << ("Failed to open file: " + userFile);
		}
		string line;
		if (!getline(file, line)) {
			throw runtime_error("User count line missing in file.");
		}
		stringstream countStream(line);
		string countToken;
		getline(countStream, countToken, ',');
		if (countToken.empty() || !all_of(countToken.begin(), countToken.end(), ::isdigit)) {
			throw runtime_error("Invalid user count in file: " + userFile);
		}
		int count = stoi(countToken);
		if (count <= 0 || count > 150) {
			throw runtime_error("User count out of safe range: " + to_string(count));
		}
		directory->userCount = count;

		string currentEmail = "";
		if (directory->currentUser != nullptr) {
			currentEmail = directory->currentUser->getemail();
		}

		// Clean up old memory properly
		if (directory->users != nullptr) {
			for (int i = 0; i < directory->userCount; ++i) {
				delete directory->users[i];
				directory->users[i] = nullptr;
			}
			delete[] directory->users;
			directory->users = nullptr;
		}

		directory->users = new Users * [count];
		for (int i = 0; i < count; ++i) {
			directory->users[i] = new Users();
		}

		Users** userList = directory->users;
		if (!getline(file, line)) {
			throw runtime_error("CSV header missing.");
		}
		int loaded = 0;
		while (getline(file, line) && loaded < count) {
			stringstream ss(line);
			string username, password, role, email;
			if (!getline(ss, username, ',') || !getline(ss, password, ',') ||
				!getline(ss, role, ',') || !getline(ss, email, ',')) {
				throw runtime_error("Malformed user data at line " + to_string(loaded + 3));
			}
			userList[loaded]->username = username;
			userList[loaded]->password = password;
			userList[loaded]->role = role;
			userList[loaded]->email = email;

			// Remove trailing spaces
			userList[loaded]->username.erase(remove_if(userList[loaded]->username.begin(), userList[loaded]->username.end(), ::isspace), userList[loaded]->username.end());
			userList[loaded]->role.erase(remove_if(userList[loaded]->role.begin(), userList[loaded]->role.end(), ::isspace), userList[loaded]->role.end());
			userList[loaded]->email.erase(remove_if(userList[loaded]->email.begin(), userList[loaded]->email.end(), ::isspace), userList[loaded]->email.end());

			if (currentEmail != "" && email == currentEmail) {
				directory->currentUser = userList[loaded];
			}
			loaded++;
		}
		if (currentEmail != "" && directory->currentUser == nullptr) {
			directory->currentUser = nullptr;
		}
		file.close();
	}


	void saveProductsToFile() {
		Product** products = inventory->getProducts();
		ofstream file(productFile);

		if (!file.is_open()) {
			cerr << "Failed to open file: " << productFile << endl;
			return;
		}

		file << inventory->getProductCount() << endl;
		file << "ID,Name,Category,Price,Quantity,Total Sales";

		int maxReviews = 0;
		// First pass to determine max number of review columns
		for (int i = 0; i < inventory->getProductCount(); ++i) {
			if (products[i]->getReviewCount() > maxReviews)
				maxReviews = products[i]->getReviewCount();
		}

		for (int i = 0; i < maxReviews; ++i) {
			file << ",Review" << (i + 1) << "_User,Review" << (i + 1) << "_Rating,Review" << (i + 1) << "_Comment";
		}
		file << "\n";

		for (int i = 0; i < inventory->getProductCount(); ++i) {
			Product* p = products[i];
			file << p->getId() << ","
				<< p->getName() << ","
				<< p->getCategory() << ","
				<< p->getPrice() << ","
				<< p->getQuantity() << ","
				<< p->getTotalSales();

			Review* reviews = p->getAllReviews();
			for (int j = 0; j < p->getReviewCount(); ++j) {
				file << "," << reviews[j].getUsername()
					<< "," << reviews[j].getRating()
					<< "," << reviews[j].getComment();
			}
			delete[] reviews;

			// Fill remaining review columns if fewer than max
			for (int j = p->getReviewCount(); j < maxReviews; ++j) {
				file << ",,,";
			}

			file << "\n";
		}

		file.close();
		cout << "Data written to " << productFile << " successfully." << endl;
	}

	void loadProductsFromFile() {
		ifstream file(productFile);
		if (!file.is_open()) {
			cout << ("Failed to open file: " + productFile);
		}

		string line;

		// Skip product count line
		getline(file, line);

		// Read and split the header line to determine total columns
		getline(file, line);
		vector<string> headers;
		stringstream headerStream(line);
		string headerItem;
		while (getline(headerStream, headerItem, ',')) {
			headers.push_back(headerItem);
		}

		// Core product fields: ID, Name, Category, Price, Quantity, Total Sales
		const int baseFields = 6;

		while (getline(file, line)) {
			vector<string> tokens;
			stringstream ss(line);
			string token;

			// Split entire line by commas
			while (getline(ss, token, ',')) {
				tokens.push_back(token);
			}

			// Ignore lines with insufficient core fields
			if (tokens.size() < baseFields) continue;

			// Parse basic product data
			int id = stoi(tokens[0]);
			const char* name = tokens[1].c_str();
			const char* category = tokens[2].c_str();
			double price = stod(tokens[3]);
			int quantity = stoi(tokens[4]);
			int totalSales = stoi(tokens[5]);

			// Add product to inventory
			inventory->addProduct(id, name, category, price, quantity);
			Product* product = inventory->getProducts()[inventory->getProductCount() - 1];
			product->setTotalSales(totalSales);

			// Parse reviews from remaining columns (each review = 3 fields)
			for (int i = baseFields; i + 2 < tokens.size(); i += 3) {
				string username = tokens[i];
				string ratingStr = tokens[i + 1];
				string comment = tokens[i + 2];

				if (username.empty() || ratingStr.empty() || comment.empty()) {
					continue; // Skip incomplete reviews
				}

				int rating = stoi(ratingStr);

				// Create and add review
				Review r(username, rating, comment, time(0)); // date not used
				product->addReview(r);
			}
		}

		file.close();
	}
};
