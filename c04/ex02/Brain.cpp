#include "Brain.hpp"

Brain::Brain() {
	std::cout << "Brain: Default constructor" << std::endl;
}

Brain::Brain(const Brain& other) {
	*this = other;

	std::cout << "Brain: Copy constructor" << std::endl;
}

Brain::~Brain() {
	std::cout << "Brain: Destructor" << std::endl;
}

Brain& Brain::operator=(const Brain& other) {
	for (int i = 0; i < 100; i++) {
		this->ideas[i] = other.ideas[i];
	}

	std::cout << "Brain: Assignment operator" << std::endl;

	return *this;
}