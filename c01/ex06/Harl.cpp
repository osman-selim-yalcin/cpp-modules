
#include "Harl.hpp"

Harl::Harl(void)
{
}

Harl::~Harl(void)
{
}

void	Harl::debug(void)
{
	std::cout <<"[DEBUG]   "<< std::endl;
	std::cout << "I love to get extra bacon for my ";
	std::cout << "7XL-double-cheese-triple-pickle-special-ketchup burger."<< std::endl;
	std::cout << "I really do!" << std::endl;
	std::cout << std::endl;
}

void	Harl::info(void)
{
	std::cout << "[INFO]    "<< std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money." << std::endl;
	std::cout << "You didn’t putenough bacon in my burger!"<< std::endl;
	std::cout << "If you did, I wouldn’t be asking for more!" << std::endl;
	std::cout << std::endl;
}

void	Harl::warning(void)
{
	std::cout <<"[WARNING] "<< std::endl;
	std::cout << "I think I deserve to have some extra bacon for free."<< std::endl;
	std::cout << "I’ve been coming here for years and you just started ";
	std::cout << "working here last month." << std::endl;
	std::cout << std::endl;
}

void	Harl::error(void)
{
	std::cout <<"[ERROR]   "<< std::endl;
	std::cout << "This is unacceptable, I want to speak to the manager now."<< std::endl;
	std::cout << std::endl;
}

void	Harl::complain(std::string level)
{
	void		(Harl::*ptr_complain[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int a = 6;
	for (int i = 0; i < 4; i++)
	{
		if (levels[i] == level)
		{
			a = i;
			break ;
		}
	}
	switch (a)
	{
	case 0:
		(this->*ptr_complain[0])();
	case 1:
		(this->*ptr_complain[1])();
	case 2:
		(this->*ptr_complain[2])();
	case 3:
	{
		(this->*ptr_complain[3])();
		break;
	}
	default:
	{
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		break;
	}
	}
}
