#include "Cat.hpp"

Cat::Cat() {
	this->type = "Cat";
	this->brain = new Brain();

	std::cout << "Cat: Default constructor" << std::endl;
}

Cat::Cat(const Cat& other) {
	*this = other;

	std::cout << "Cat: Copy constructor" << std::endl;
}

Cat& Cat::operator=(const Cat& other) {
	this->type = other.type;
  	this->brain = new Brain( *other.brain );

	std::cout << "Cat: Assignment operator" << std::endl;

	return *this;
}

Cat::~Cat() {
	std::cout << "Cat: Destructor" << std::endl;
	delete this->brain;
}

void Cat::makeSound() const {
	std::cout << "Meow! Meow! Meow!" << std::endl;
}
