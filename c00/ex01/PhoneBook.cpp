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
	if (id == 8)
	{
		id = 0;
	}
	if (id2 != 8)
		id2++;
}

void PhoneBook::search()
{
	cout << "     index|first name| last name|  nickname|" << endl;
	for (int i = 0; i < id2; i++)
	{
		cout << "         " << i + 1 << "|";
		PhoneBook::contacts[i].printContact();
		cout << endl;
	}
}

bool PhoneBook::showid(string command)
{
	int a = atoi(command.c_str());
	if (a > id2 || a <= 0)
	{
		return false;
	}
	cout << "----- information of contact #" << a << " -----"<< endl;
	a--;
	cout << "Name:           " << contacts[a].getfirstname() <<endl;
	cout << "Last Name:      " << contacts[a].getlastname() << endl;
	cout << "Nickname:       " << contacts[a].getnickname() << endl;
	cout << "Phone Number:   " << contacts[a].getphonenumber() <<endl;
	cout << "Darkest Secret: " << contacts[a].getdarkestsecret() <<endl;
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

int PhoneBook::getid2()
{
	return (id2);
}

PhoneBook::PhoneBook()
{
	PhoneBook::id = 0;
	id2 = 0;
}

PhoneBook::~PhoneBook()
{
}