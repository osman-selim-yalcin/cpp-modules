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
	~Zombie();
	void announce(void);
	string getname();
};

void randomChump( string name );
Zombie* newZombie(string name);
#endif