#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>
#include <iostream>

using std::endl;
using std::cout;
using std::string;
using std::cin;
using std::getline;

class Animal
{
	protected:
		string type;
	public:
		Animal();
		Animal(const Animal&copy);
		Animal &operator=(const Animal &other);
		virtual ~Animal();
		virtual void makeSound();
};

#endif
