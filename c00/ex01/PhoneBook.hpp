#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
	private:
		Contact contacts[8];
		int id;
		int id2;
	public:
		PhoneBook();
		~PhoneBook();
		void add();
		void search();
		bool isnumber(string);
		bool showid(string);
};

#endif