
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

void	alice_rundown(void)
{
	FragTrap alice("Alice");

	alice.attack("Bob");
	alice.highFivesGuys();
}

void	bob_rundown(void)
{
	FragTrap	bob("Bob");

	while (bob.get_hp())
	{
		bob.takeDamage(20);
		bob.beRepaired(10);
	}
	bob.takeDamage(1);
	bob.highFivesGuys();
}

void	osman_rundown(void)
{
	ClapTrap	osman("osman");
	ScavTrap	burak("burak");

	osman.attack("burak");
	osman.takeDamage(20);
	osman.beRepaired(10);
	osman.takeDamage(1);
	burak.attack("osman");
}

int	main(void)
{
	std::cout << std::endl << std::endl << "Performing Alice's rundown..." << std::endl << std::endl;
	alice_rundown();
	std::cout << std::endl << std::endl << "Performing Bob's rundown..." << std::endl << std::endl;
	bob_rundown();
	std::cout << std::endl << std::endl << "Performing osman's rundown..." << std::endl << std::endl;
	osman_rundown();
}
