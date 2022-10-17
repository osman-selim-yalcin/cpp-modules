#include "Point.hpp"
int main(void)
{
		// No triangle
	std::cout << "NO TRIANGLE:" << std::endl;
	{
		Point	a(0.0f, 0.0f);
		Point	b(0.0f, 0.0f);
		Point	c(0.0f, 0.0f);
		Point	p(0.0f, 0.0f);
		std::cout << "1. " << (bsp(a, b, c, p) ? "true" : "false") << std::endl; // 1. false
	}

	// Test inside
	std::cout << "\nTEST INSIDE:" << std::endl;
	{
		Point a(Fixed(1), Fixed());
		Point b(Fixed(-1), Fixed());
		Point c(Fixed(), Fixed(1));
		Point p(Fixed(0.4f), Fixed(0.4f));
		std::cout << "1. " << (bsp(a, b, c, p) ? "true" : "false") << std::endl; // 1. true
	}

	// Test edges
	std::cout << "\nTEST EDGES:" << std::endl;
	{
		Point a(Fixed(1), Fixed());
		Point b(Fixed(-1), Fixed());
		Point c(Fixed(), Fixed(1));
		Point p(Fixed(0.5f), Fixed(0.5f));
		std::cout << "1. " << (bsp(a, b, c, p) ? "true" : "false") << std::endl; // 1. false
	}

	// Test vertex
	std::cout << "\nTEST VERTEX:" << std::endl;
	{
		Point a(Fixed(1), Fixed());
		Point b(Fixed(-1), Fixed());
		Point c(Fixed(), Fixed(1));
		Point p(Fixed(), Fixed(0.5f));
		std::cout << "1. " << (bsp(a, b, c, p) ? "true" : "false") << std::endl; // 1. true
	}
	std::cout << "\nTEST BASIC:" << std::endl;
	{	
		Point a (1,1);
		Point b (2,5);
		Point c (5,4);
		Point p (4,2);
		Point p2 (2,3);
		std::cout << "1. " << (bsp(a, b, c, p) ? "true" : "false") << std::endl; // 1. false
		std::cout << "2. " << (bsp(a, b, c, p2) ? "true" : "false") << std::endl; // 2. true
	}
	return (0);
}
