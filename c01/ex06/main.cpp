#include "Harl.hpp"

int	main(int ac, char **av)
{
	if (ac < 2)
	{
		std::cout << "Wrong argument" << std::endl;	
		return (1);
	}
	Harl Harl;
	Harl.complain(av[1]);
	return (0);
}
