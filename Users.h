#include<iostream>
#include<cstring>
#include<string>
#pragma once

using namespace std;

class Users {

protected:
	string username;
	string password;
	string role;
	string email;

public:
	Users()
	{
		username = " ";
		password = " ";
		role = " ";
		email = " ";
	}

	Users(string uname, string pass, string r, string e)
	{
		username = uname;
		password = pass;
		role = r;
		email = e;
	}

	string getUsername()
	{
		return username;
	}

	string getPassword()
	{
		return password;
	}

	string getRole()
	{
		return role;
	}

	string getemail()
	{
		return email;
	}

	void setPassword(string newPass)
	{
		password = newPass;
		cout << " Password changed Succesfully! " << endl;
	}
	virtual void displayInfo()
	{
		cout << endl;
		cout << "User Details: " << endl;
		cout << "Username: " << username << endl;
		cout << "Role: " << role << endl;
		cout << endl;
	}

	virtual ~Users()
	{
		cout << "User deleted Succesfully!" << endl;
	}
};

class Employee : public Users
{
public:
	Employee() : Users(" ", " ", "Employee", " ") {}
	Employee(string uname, string pass, string umail)
	{
		username = uname;
		password = pass;
		email = umail;
	}
	// void process_sales();
};

class Admin : public Employee
{
public:
	Admin() : Employee()
	{
		role = "Admin";
	}
	Admin(string uname, string pass, string umail) : Employee(uname, pass, umail)
	{
		role = "Admin";
	}

	// manage_company();
};

class Owner : public Users
{
public:
	Owner() : Users(" ", " ", "Owner", " ") {}
	Owner(string uname, string pass) : Users(uname, pass, "Owner", uname + "@gmail.com") {}

	void promoteUser(Users*& users)
	{
		if (users->getRole() == "Employee")
		{
			users = new Admin(users->getUsername(), users->getPassword(), users->getemail());
			cout << " User named " << users->getUsername() << " has been promoted to Admin position!" << endl;
			cout << endl;

		}
	}

	void demoteUser(Users*& user)
	{
		if (user->getRole() == "Admin")
		{
			user = new Employee(user->getUsername(), user->getPassword(), user->getemail());
			cout << "User named " << user->getUsername() << " has been demoted to Employee position!" << endl;
			cout << endl;
		}
	}


	void deleteUser(Users**& users, int& count, string uname)
	{
		for (int i = 0; i < count; i++)
		{
			if (users[i]->getUsername() == uname)
			{
				delete users[i];
				for (int j = i; j < count - 1; j++)
				{
					users[j] = users[j + 1];
					count--;
					cout << "User " << uname << " has been removed successfully!" << endl;
					return;
				}
			}
		}

		cout << "User not found!" << endl;
	}
};
class UserManager {
private:
	Users** users;
	int userCount;
	int userCapacity;
	Users* currentUser;

public:

	UserManager()
	{
		userCount = 0;
		userCapacity = 150;
		currentUser = nullptr;
		users = new Users * [userCapacity];
	}

	~UserManager()
	{
		cout << endl;
		for (int i = 0; i < userCount; i++)
		{
			delete users[i];
			users[i] = nullptr;
		}
		delete users;
		users = nullptr;
	}



	bool login(string username, string password)
	{
		for (int i = 0; i < userCount; i++)
		{
			if (users[i]->getUsername() == username && users[i]->getPassword() == password)
			{
				currentUser = users[i];
				cout << endl;
				cout << "User logged in sucessfully!" << endl;
				return true;

			}
		}
		cout << "Login Process failed! Check your Username and Password!" << endl;
		return false;
	}

	void logout()
	{
		currentUser = nullptr;
		cout << "Logged out successfully!" << endl;
	}

	bool registerUser(Users* newUsers)
	{
		// already existing User
		for (int i = 0; i < userCount; i++)
		{
			if (users[i]->getUsername() == newUsers->getUsername())
			{
				cout << "Error! User Already Exists!" << endl;
				return false;
			}
		}

		if (userCount >= userCapacity)
		{
			resizeUsers();
		}
		users[userCount++] = newUsers;
		cout << "New user added successfully! " << endl;
		return true;

	}

	Users* getCurrentUser()
	{
		return currentUser;
	}

	void resizeUsers()
	{
		int newCap = userCapacity * 2;
		Users** NewUsers = new Users * [newCap];
		for (int i = 0; i < userCount; i++)
		{
			NewUsers[i] = users[i];
		}

		delete[]users;
		users = NewUsers;
		userCapacity = newCap;
	}

	Users* getUserByName(string uname)
	{
		for (int i = 0; i < userCount; i++)
		{
			if (users[i]->getUsername() == uname)
			{
				cout << " User has been found successfully!" << endl;
				return users[i];
			}
		}

		return nullptr;
	}
	void displayAllUsers()
	{
		cout << endl;
		cout << "All users displayed: " << endl;
		for (int i = 0; i < userCount; i++)
		{
			users[i]->displayInfo();
		}
		cout << endl;
	}
};
