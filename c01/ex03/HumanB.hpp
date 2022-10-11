#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
private:
	Weapon *weapon;
	string name;
public:
	void setWeapon(Weapon &weapon);
	const string getWeapon();
	void setName(string name);
	const string getName();
	void attack();
	HumanB(string name);
	HumanB(string name, Weapon *weapon);
	~HumanB();
};

#endif