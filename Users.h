#pragma once
#include <string>
using namespace std;

bool validateEmailFormat(const string& email);
string encryptPassword(const string& password);

class Users {
public:
    string username;
    string password;
    string role;
    string email;

    string getUsername();
    string getPassword();
    string getRole();
    string getemail();
    void setRole(string newRole);
    void setPassword(string newPass);
    virtual void displayInfo();
    Users();
    Users(string uname, string pass, string r, string e);
    virtual ~Users();

    friend class UserManager;
    friend class Admin;
    friend class Employee;
    friend class Owner;
    friend class CompanyFile;
};

class Employee : virtual public Users {
public:
    Employee();
    Employee(string uname, string pass, string umail);
    void displayInfo() override;
    ~Employee();

    friend class UserManager;
    friend class Admin;
};

class Admin : public Employee {
public:
    Admin();
    Admin(string uname, string pass, string umail);
    void displayInfo() override;
public:
    ~Admin();

    friend class UserManager;
    friend class Owner;
};

class Owner : public Users {
public:
    Owner();
    Owner(string uname, string pass, string email);
    void promoteUser(Users*& users);
    void demoteUser(Users*& users);
    void deleteUser(Users**& users, int& count, string uname);
    void displayInfo() override;
    ~Owner();

    friend class UserManager;
};

class UserManager {
public:
    Users** users;
    int userCount;
    int userCapacity;
    Users* currentUser;

    UserManager();
    void resizeUsers();
    ~UserManager();
    bool login(string username, string password);
    void logout();
    bool registerUser(Users* newUser);
    Users* getCurrentUser();
    void setCurrentUser(Users* currUser);
    Users* getUserByEmail(string uemail);
    void displayAllUsers();
    friend class CompanyFile;
};
