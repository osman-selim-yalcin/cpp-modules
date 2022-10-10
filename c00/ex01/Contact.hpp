#ifndef CONTACT_Hpp
#define CONTACT_Hpp

#include <string>
#include <iostream>

using std::endl;
using std::cout;
using std::string;
using std::cin;
using std::getline;
class Contact
{
	private:
		string firstname;
		string lastname;
		string nickname;
		string phonenumber;
		string darkestsecret;
	public:
		void setfirstname(string firstname);
		void setlastname(string lastname);
		void setnickname(string nickname);
		void setphonenumber(string phonenumber);
		void setdarkestsecret(string darkestsecret);
		string getfirstname();
		string getlastname();
		string getnickname();
		string getphonenumber();
		string getdarkestsecret();
		void printContact();
		Contact(void);
		~Contact(void);
};

#endif