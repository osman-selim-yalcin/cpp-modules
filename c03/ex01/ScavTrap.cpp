
#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	std::cout << "ScavTrap from ClapTrap " << this->_name << " created with default constructor." << std::endl;
	this->set_name("Default");
	this->set_damage(20);
	this->set_energy_points(50);
	this->set_hp(100);
}

ScavTrap::ScavTrap(std::string const &name)
{
	this->set_name(name);
	this->set_damage(20);
	this->set_energy_points(50);
	this->set_hp(100);
	std::cout << "ScavTrap from ClapTrap " << this->_name << " created." << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap from ClapTrap " << this->_name << " destroyed." << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &copy): ClapTrap(copy)
{
	std::cout << "ScavTrap from ClapTrap " << this->_name << " copied." << std::endl;
}

ScavTrap	&ScavTrap::operator=(ScavTrap const &copy)
{
	std::cout << "Assignment operator for ScavTrap called." << std::endl;
	ClapTrap::operator=(copy);
	return (*this);
}

void	ScavTrap::guardGate(void)
{
	if (this->_hp <= 0)
		std::cout << "Cannot switch to gate-keeper mode because: ClapTrap " << this->_name << " is dead." << std::endl;
	else
		std::cout << "ScavTrap from ClapTrap " << this->_name << " switched to mode: \"Guard Gate\"." << std::endl;
}

void	ScavTrap::attack(std::string const &target)
{
		if (this->_energy_points && this->_hp > 0)
	{
		std::cout << "ScavTrap " << this->_name << " attacked " << target << ", causing " << this->_damage << " point(s) of damage!" << std::endl;
		this->_energy_points--;
	}
	if (this->_hp <= 0)
		std::cout << "ScavTrap " << this->_name << " is dead!" << std::endl;
	else if (!this->_energy_points)
		std::cout << "ScavTrap " << this->_name << " is out of energy points!" << std::endl;
}
