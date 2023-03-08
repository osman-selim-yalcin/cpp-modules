#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal {
	public:
		Animal();
		Animal(const Animal& other);
		virtual ~Animal();

		Animal& operator=(const Animal& other);

		virtual void makeSound() const = 0;
		const std::string& getType() const;
	protected:
		std::string type;
};

#endif
