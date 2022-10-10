#include "Zombie.hpp"

Zombie*    zombieHorde( int N, string name )
{
	Zombie *zombie = new Zombie[N];
	for (int i = 0; i < N; i++)
	{
		zombie[i].setname(name);
	}
	return zombie;
}