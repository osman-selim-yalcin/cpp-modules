#include "BitcoinExchange.hpp"

int main (int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Error: could not open file." << std::endl;
		exit(1);
	}
	std::map< std::string, double > data = read_data();
	check_input(argv[1], data);
	return 0;
}