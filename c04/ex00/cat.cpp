#include "Cat.hpp"

#include <iostream>

Cat::Cat() {
	this->type = "Cat";

	std::cout << "Cat: Default constructor" << std::endl;
}

Cat::Cat(const Cat& other) {
	*this = other;

	std::cout << "Cat: Copy constructor" << std::endl;
}

Cat& Cat::operator=(const Cat& other) {
	this->type = other.type;

	std::cout << "Cat: Assignation operator" << std::endl;

	return *this;
}

Cat::~Cat() {
	std::cout << "Cat: Destructor" << std::endl;
}

void Cat::makeSound() const {
	std::cout << "Meow! Meow! Meow!" << std::endl;
}
