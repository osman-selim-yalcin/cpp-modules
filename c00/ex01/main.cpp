
#include "main.hpp"

void menu()
{
	cout << "1. ADD" << endl;
	cout << "2. SEARCH" << endl;
	cout << "3. EXIT" << endl;
}

int main()
{
	string command;
	PhoneBook PhoneBook;
	while (1)
	{
		menu();
		getline(cin, command);
		cout << endl;
		if (command == "EXIT")
			break;
		else if (command == "ADD")
		{
			PhoneBook.add();
		}
		else if (command == "SEARCH")
		{
			PhoneBook.search();
			getline(cin, command);
			if (command == "\0" || PhoneBook.isnumber(command) == false || PhoneBook.showid(command) == false)
				cout << "WRONG INPUT" << endl;
		}
		else
		{
			cout << "Pls enter correct command" << endl;
		}
	}
	return (0);
}