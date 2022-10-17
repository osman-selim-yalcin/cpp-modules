#include "HumanA.hpp"

void HumanA::attack()
{
	cout << name << " attacks with their " << weapon.getType() << endl;
}

void HumanA::setWeapon(Weapon &weapon2)
{
	this->weapon = weapon2;
}

const string HumanA::getWeapon()
{
	return (weapon.getType());
}

void HumanA::setName(string name)
{
	this->name = name;
}

const string HumanA::getName()
{
	return (name);
}

HumanA::HumanA(string name, Weapon &weapon) : weapon(weapon)
{
	this->name = name;
}

HumanA::~HumanA()
{
}
