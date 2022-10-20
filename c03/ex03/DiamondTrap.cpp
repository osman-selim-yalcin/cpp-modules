#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void)
{
	ClapTrap::_name = "default_clap_name";
	this->_name = "default";
	this->_hp = FragTrap::_hp;
	this->_energy_points = ScavTrap::_energy_points;
	this->_damage = FragTrap::_damage;
	std::cout << "DiamondTrap " << this->_name << " created with default constructor." << std::endl;
}

DiamondTrap::DiamondTrap(std::string const &name)
{
	ClapTrap::_name = name + "_clap_name";
	this->_name = name;
	this->_hp = FragTrap::_hp;
	this->_energy_points = ScavTrap::_energy_points;
	this->_damage = FragTrap::_damage;
	std::cout << "DiamondTrap " << this->_name << " created." << std::endl;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap " << this->_name << " destroyed." << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const &copy)
{
	std::cout << "DiamondTrap " << this->_name << " copied." << std::endl;
	*this = copy;
}

DiamondTrap	&DiamondTrap::operator=(DiamondTrap const &copy)
{
	std::cout << "Assignment operator for DiamondTrap called." << std::endl;
	ClapTrap::_name = copy._name + "_clap_name";
	_name = copy._name;
	_hp = copy._hp;
	_energy_points = copy._energy_points;
	_damage = copy._damage;
	return (*this);
}

void	DiamondTrap::whoAmI(void)
{
	if (this->_hp <= 0)
		std::cout << "Cannot run whoAmI because: DiamondTrap " << this->_name << " is dead." << std::endl;
	else
	{
		std::cout << "DiamondTrap name: " << this->_name << "." << std::endl;
		std::cout << "ClapTrap name: " << ClapTrap::_name << "." << std::endl;
	}
}