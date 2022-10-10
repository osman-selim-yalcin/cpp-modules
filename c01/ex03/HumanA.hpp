#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
private:
	Weapon &weapon;
	string name;
public:
	HumanA(string name, Weapon &weapon);
	void setWeapon(Weapon weapon);
	const string getWeapon();
	void setName(string name);
	const string getName();
	~HumanA();
	void attack();
};

#endif