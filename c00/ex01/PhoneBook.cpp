#include "PhoneBook.hpp"

void PhoneBook::add()
{
	string UserInput;
	cout << "Enter first name: ";
	while (1)
	{
		getline(cin, UserInput);
		if (UserInput != "\0")
			break;
		cout << "WRONG INPUT" << endl;
	}
	PhoneBook::contacts[PhoneBook::id].setfirstname(UserInput);
	cout << "Enter last name: ";
	while (1)
	{
		getline(cin, UserInput);
		if (UserInput != "\0")
			break;
		cout << "WRONG INPUT" << endl;
	}
	PhoneBook::contacts[PhoneBook::id].setlastname(UserInput);
	cout << "Enter nickname: ";
	while (1)
	{
		getline(cin, UserInput);
		if (UserInput != "\0")
			break;
		cout << "WRONG INPUT" << endl;
	}
	PhoneBook::contacts[PhoneBook::id].setnickname(UserInput);
	cout << "Enter phone number: ";
	while (1)
	{
		getline(cin, UserInput);
		if (UserInput != "\0")
			break;
		cout << "WRONG INPUT" << endl;
	}
	PhoneBook::contacts[PhoneBook::id].setphonenumber(UserInput);
	cout << "Enter darkest secret: ";
	while (1)
	{
		getline(cin, UserInput);
		if (UserInput != "\0")
			break;
		cout << "WRONG INPUT" << endl;
	}
	PhoneBook::contacts[PhoneBook::id].setdarkestsecret(UserInput);
	cout << "Contact added" << endl;
	id++;
	if (id == 9)
	{
		id = 0;	
	}
	if (id2 != 9)
		id2++;
}

void PhoneBook::search()
{
	cout << "     index|first name| last name|  nickname|" << endl;
	for (int i = 1; i < id2; i++)
	{
		cout << "         " << i << "|";
		PhoneBook::contacts[i].printContact();
		cout << endl;
	}
}

bool PhoneBook::showid(string command)
{
	int a = atoi(command.c_str());
	cout << "a" << a << endl;
	cout << "id" << id2 << endl;
	if (a >= id2 || a < 0)
	{
		return false;
	}
	cout << "         " << a << "|";
	contacts[a].printContact();
	cout << endl;
	return true;
}

bool PhoneBook::isnumber(string command)
{
	for (size_t i = 0; i < command.length(); i++)
	{
		if (!(command[i] < '9' && command[i] > '0'))
			return false;
	}
	return true;
}

PhoneBook::PhoneBook()
{
	PhoneBook::id = 1;
	id2 = 1;
}

PhoneBook::~PhoneBook()
{
}