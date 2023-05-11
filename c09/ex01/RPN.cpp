#include "RPN.hpp"

void RPN(char **av)
{
	std::string index;
	std::istringstream str_stream(av[1]);
	std::stack<int> stack;
	int operand1, operand2, result;

	while (str_stream >> index)
	{
		if (index == "+" || index == "-" || index == "*" || index == "/")
		{
			if (stack.size() < 2)
				quit();
			operand2 = stack.top();
			stack.pop();
			operand1 = stack.top();
			stack.pop();
			if (index == "+")
				result = operand1 + operand2;
			else if (index == "-")
				result = operand1 - operand2;
			else if (index == "*")
				result = operand1 * operand2;
			else
			{
				if (operand2 != 0)
					result = operand1 / operand2;
				else
					quit();
			}
			stack.push(result);
		}
		else
		{
			for (int i = 0; index[i]; ++i)
			{
				if (index[i] < '0' || index[i] > '9')
					quit();
			}
			stack.push(stoi(index));
		}
	}
	if (stack.size() == 1)
		std::cout << stack.top() << std::endl;
	else
		quit();
}

void quit()
{
	std::cerr << "Error" << std::endl;
	exit(1);
}