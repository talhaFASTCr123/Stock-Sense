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
	string company;

public:
	Users();
	Users(string uname, string pass, string r, string e, string c);

	string getUsername();
	string getPassword();
	string getRole();
	string getemail();
	string getCompany();

	void setPassword(string newPass);
	void setCompany(string newCompany);

	virtual void displayInfo();
	virtual ~Users();
};

class Employee : public Users {
public:
	Employee();
	Employee(string uname, string pass, string umail, string cmpny);
};

class Admin : public Employee {
public:
	Admin();
	Admin(string uname, string pass, string umail, string c);
};

class Owner : public Users {
public:
	Owner();
	Owner(string uname, string pass, string email, string c);

	void promoteUser(Users*& users);
	void demoteUser(Users*& users);
	void deleteUser(Users**& users, int& count, string uname);
};

class UserManager {
private:
	Users** users;
	int userCount;
	int userCapacity;
	Users* currentUser;

public:
	UserManager();
	~UserManager();

	bool login(string username, string password);
	void logout();
	bool registerUser(Users* newUser);
	void resizeUsers();
	Users* getCurrentUser();
	Users* getUserByEmail(string uemail);
	void displayAllUsers();
};
