#include "Contact.hpp"

void Contact::setfirstname(string firstname)
{
	this->firstname = firstname;
}

void Contact::setlastname(string lastname)
{
	this->lastname = lastname;
}

void Contact::setnickname(string nickname)
{
	this->nickname = nickname;
}

void Contact::setphonenumber(string phonenumber)
{
	Contact::phonenumber = phonenumber;
}

void Contact::setdarkestsecret(string darkestsecret)
{
	Contact::darkestsecret = darkestsecret;
}

string Contact::getfirstname()
{
	return Contact::firstname;
}

string Contact::getlastname()
{
	return Contact::lastname;
}

string Contact::getnickname()
{
	return Contact::nickname;
}

string Contact::getphonenumber()
{
	return Contact::phonenumber;
}

string Contact::getdarkestsecret()
{
	return Contact::darkestsecret;
}

void Contact::printContact()
{
	if (Contact::firstname.length() > 10)
		cout << Contact::firstname.substr(0, 9) << ".|";
	else
	{
		for (int a = 10 - firstname.length(); a > 0; a--)
			cout << ' ';
		cout << getfirstname() << "|";
	}
	if (Contact::lastname.length() > 10)
		cout << Contact::lastname.substr(0, 9) << ".|";
	else
	{
		for (int a = 10 - lastname.length(); a > 0; a--)
			cout << ' ';
		cout << getlastname() << "|";
	}
	if (Contact::nickname.length() > 10)
		cout << Contact::nickname.substr(0, 9) << ".|";
	else
	{
		for (int a = 10 - nickname.length(); a > 0; a--)
			cout << ' ';
		cout << getnickname() << "|";
	}
}

Contact::Contact(void)
{
}

Contact::~Contact(void)
{
}