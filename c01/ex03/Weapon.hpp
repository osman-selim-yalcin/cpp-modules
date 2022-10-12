#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>
#include <iostream>

using std::endl;
using std::cout;
using std::string;
using std::cin;
using std::getline;

class Weapon
{
private:
	string type;
public:
	Weapon(string weapon);
	Weapon(void);
	~Weapon();
	const string &getType();
	void setType(string type);
};


#endif