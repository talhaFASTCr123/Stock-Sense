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

    string getUsername();
    string getPassword();
    string getRole();
    string getemail();
    void setPassword(string newPass);
    virtual void displayInfo();

private:
    Users();
    Users(string uname, string pass, string r, string e);

public:
    virtual ~Users();

    friend class UserManager;
    friend class Admin;
    friend class Employee;
    friend class Owner;
    friend class CompanyFile;
};

class Employee : virtual public Users {
private:
    Employee();
    Employee(string uname, string pass, string umail);
protected:
    void displayInfo() override;
public:
    ~Employee();

    friend class UserManager;
    friend class Admin;
    friend class Owner;
};

class Admin : public Employee {
private:
    Admin();
    Admin(string uname, string pass, string umail);
protected:
    void displayInfo() override;
public:
    ~Admin();

    friend class UserManager;
    friend class Owner;
};

class Owner : public Users {
private:
    Owner();
    Owner(string uname, string pass, string email);
    void promoteUser(Users*& users);
    void demoteUser(Users*& users);
    void deleteUser(Users**& users, int& count, string uname);
protected:
    void displayInfo() override;
public:
    ~Owner();

    friend class UserManager;
};

class UserManager {
private:
    Users** users;
    int userCount;
    int userCapacity;
    Users* currentUser;

    UserManager();
    void resizeUsers();
public:
    ~UserManager();
    bool login(string username, string password);
    void logout();
    bool registerUser(Users* newUser);
    Users* getCurrentUser();
    Users* getUserByEmail(string uemail);
    void displayAllUsers();

    friend class CompanyFile;
};
