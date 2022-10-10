#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>

using std::endl;
using std::cout;
using std::string;
using std::cin;
using std::getline;

class Zombie
{
private:
	string name;
public:
	Zombie(string name);
	Zombie();
	~Zombie();
	void announce(void);
	string getname();
	void setname(string name);
};

Zombie*    zombieHorde( int N, string name );

#endif