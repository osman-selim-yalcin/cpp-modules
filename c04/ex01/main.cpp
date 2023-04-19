
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

#define N_ANIMALS 10


int main( void )
{
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    delete j;
    delete i;
	
	std::cout << "------------------------" << std::endl;

    Cat basic;
    {
        Cat tmp = basic;
    }

    // const Animal* animals[4] = { new Dog(), new Dog(), new Cat(), new Cat() };
    // for ( int i = 0; i < 4; i++ ) {
    //     delete animals[i];
    // }

    return 0;
}