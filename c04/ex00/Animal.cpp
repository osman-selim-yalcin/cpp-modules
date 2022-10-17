#include "Animal.hpp"

Animal::Animal() : type("Animal")
{
	cout <<"Animal constructor" << endl;
}

Animal::Animal(const Animal&copy)
{
	cout <<"Animal Copy" << endl;
	*this = copy;
}

Animal &Animal::operator=(const Animal &copy)
{
	type = copy.type;
	cout <<"Animal assignment" << endl;
	return *this; 
}

Animal::~Animal()
{
	cout <<"Animal Destructor" << endl;
}

void Animal::makeSound()
{
	cout <<"Animal Sound" << endl;
}