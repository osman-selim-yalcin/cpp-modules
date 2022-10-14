#include "Zombie.hpp"

int main()
{
	Zombie zombie("osman");
	zombie.announce();
	randomChump("MEHMET");
	Zombie *zombie2 = newZombie("ali");
	zombie2->announce();
	delete zombie2;
	return (0);
}