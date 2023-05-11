#include "RPN.hpp"

int main(int ac, char **av)
{
	if (ac != 2)
		quit();
	
	RPN(av);

	return 0;
}
