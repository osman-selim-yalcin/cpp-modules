#include "HumanA.hpp"

void HumanA::attack()
{
	cout << name << " attacks with their " << weapon->getType() << endl;
}

void HumanA::setWeapon(Weapon *weapon)
{
	this->weapon = weapon;
}

const string HumanA::getWeapon()
{
	return (weapon->getType());
}

void HumanA::setName(string name)
{
	this->name = name;
}

const string HumanA::getName()
{
	return (name);
}

HumanA::HumanA(string name, Weapon &weapon)
{
	this->name = name;
	this->weapon = &weapon;
}

HumanA::~HumanA()
{
}
