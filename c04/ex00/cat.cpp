#include "Cat.hpp"

Cat::Cat() : type("Cat")
{
	cout <<"Cat constructor" << endl;
}

Cat::Cat(const Cat&copy)
{
	cout <<"Cat Copy" << endl;
	*this = copy;
}

Cat &Cat::operator=(const Cat &copy)
{
	type = copy.type;
	cout <<"Cat assignment" << endl;
	return *this; 
}

Cat::~Cat()
{
	cout <<"Cat Destructor" << endl;
}

void Cat::makeSound()
{
	cout <<"Cat Sound" << endl;
}