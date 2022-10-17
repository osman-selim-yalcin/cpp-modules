#include "Cat.hpp"
#include "Dog.hpp"
int main()
{
	const Animal* meta =newAnimal();
	const Animal* j =newDog();
	const Animal* i =newCat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();//will output the cat sound!
	j->makeSound();
	meta->makeSound();
	return 0;
}