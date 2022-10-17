#ifndef CAT_HPP
#define CAT_HPP

#include <string>
#include <iostream>

using std::endl;
using std::cout;
using std::string;
using std::cin;
using std::getline;

class Cat
{
	protected:
		string type;
	public:
		Cat();
		Cat(const Cat&copy);
		Cat &operator=(const Cat &other);
		virtual ~Cat();
		virtual void makeSound();
};

#endif
