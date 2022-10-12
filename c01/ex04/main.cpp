#include "main.hpp"

int main(int ac, char **av)
{
	if (ac != 4)
	{
		cout << "Wrong number of arguments" << endl;
		return (1);
	}
	string filename = av[1];
	string s1 = av[2];
	string s2 = av[3];
	string line;
	size_t a = 0;

	std::ifstream infile (filename);
	std::fstream newfile;

	newfile.open(filename + ".replace");
	if (!infile.is_open())
	{
		cout << "Error opening file" << endl;
		return (1);
	}
	else
	{
		while (getline(infile, line))
		{
			for (size_t i = 0; i < line.length(); i++)
			{
				a = line.find(s1, i);
				if (a != string::npos)
				{
					line.erase(a, s1.length());
					line.insert(a, s2);
				}
			}
			cout << line << endl;
			newfile << line;
			if (infile.tellg() >= 0)
				newfile << endl;
		}
	}
	infile.close();
	newfile.close();
	return(0);
}
