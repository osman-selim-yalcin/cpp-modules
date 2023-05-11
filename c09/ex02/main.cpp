#include "PmergeMe.hpp"

template <typename T>
static bool duplicate_check(const T &cont);

int main(int argc, char **argv)
{
	if (argc < 2)
	{
		std::cerr << "Error: No input sequence provided." << std::endl;
		return 1;
	}

	std::vector<int> vec;
	std::deque<int> que;

	for (int i = 1; i < argc; i++)
	{
		try {
			for(int j = 0; argv[i][j]; j++)
			{
				if(argv[i][j] < 48 || argv[i][j] > 57)
				{
					std::cout << "Error: bad input." << std::endl;
					return 1;
				}
			}
			int num = std::atoi(argv[i]);
			if (num <= 0)
				throw std::invalid_argument("Error: Input sequence must only contain positive integers.");
			vec.push_back(num);
			que.push_back(num);
		} catch (const std::invalid_argument& e) {
			std::cout << e.what() << std::endl;
			return 1;
		}
	}

	if (duplicate_check(vec))
	{
		std::cerr << "Error: Duplicate numbers in input." << std::endl;
		return 1;
	}

	std::cout << "vector Before: ";
	for (std::vector< int >::const_iterator it = vec.begin(); it != vec.end(); ++it)
		std::cout << *it << " ";
	std::cout << std::endl;

	std::cout << "deque Before: ";
	for (std::deque< int >::const_iterator it = que.begin(); it != que.end(); ++it)
		std::cout << *it << " ";
	std::cout << std::endl;

	int vec_size = vec.size();
	int que_size = que.size();

	std::clock_t start_vec = std::clock();
	merge_insert_vector(vec, 0, vec_size - 1);
	std::clock_t end_vec = std::clock();
	double elapsed_vec = static_cast<double>(end_vec - start_vec);

	std::clock_t start_lst = std::clock();
	merge_insert_deque(que, 0 , que_size - 1);
	std::clock_t end_lst = std::clock();
	double elapsed_lst = static_cast<double>(end_lst - start_lst);

	std::cout << "vector After: ";
	for (std::vector< int >::const_iterator it = vec.begin(); it != vec.end(); ++it)
		std::cout << *it << " ";
	std::cout << std::endl;

	std::cout << "deque After: ";
	for (std::deque< int >::const_iterator it = que.begin(); it != que.end(); ++it)
		std::cout << *it << " ";
	std::cout << std::endl;

	std::cout << "Time to process a range of " << vec.size() << " elements with vector sort: " << elapsed_vec << " us" << std::endl;

	std::cout << "Time to process a range of " << que.size() << " elements with deque sort: " << elapsed_lst << " us" << std::endl;

	return 0;
}

template <typename T>
static bool duplicate_check(const T &cont)
{
	for (unsigned int i = 0; i < cont.size(); ++i)
	{
		for (unsigned int j = i + 1; j < cont.size(); ++j)
		{
			if (cont[i] == cont[j])
				return true;
		}
	}
	return false;
}