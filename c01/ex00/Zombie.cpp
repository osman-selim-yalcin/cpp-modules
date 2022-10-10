#include "Zombie.hpp"

void Zombie::announce(void)
{
	cout << name << ": BraiiiiiiinnnzzzZ..." << endl;
}

string Zombie::getname()
{
	return name;
}

Zombie::Zombie(string name)
{
	this->name = name;
}

Zombie::~Zombie()
{
	cout << name << ": no brain (dedge)" << endl;
}