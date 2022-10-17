#include "HumanB.hpp"

void HumanB::attack()
{
	cout << name << " attacks with their " << weapon->getType() << endl;
}
void HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}

const string HumanB::getWeapon()
{
	return (weapon->getType());
}

void HumanB::setName(string name)
{
	this->name = name;
}

const string HumanB::getName()
{
	return (name);
}

HumanB::HumanB(string name)
{
	this->name = name;
}

HumanB::~HumanB()
{
}
