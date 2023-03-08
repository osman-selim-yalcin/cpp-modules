#include "Dog.hpp"

Dog::Dog() {
	this->type = "Dog";
	this->brain = new Brain();

	std::cout << "Dog: Default constructor" << std::endl;
}

Dog::Dog(const Dog& other) {
	*this = other;

	std::cout << "Dog: Copy constructor" << std::endl;
}

Dog& Dog::operator=(const Dog& other) {
	this->type = other.type;

	std::cout << "Dog: Assignment operator" << std::endl;

	return *this;
}

Dog::~Dog() {
	std::cout << "Dog: Destructor" << std::endl;
	delete this->brain;
}

void Dog::makeSound() const {
	std::cout << "Meow! Meow! Meow!" << std::endl;
}
