#include "Span.hpp"

int main() {
	
  Span sp = Span(5);
  sp.addNumber(6);
  sp.addNumber(3);
  sp.addNumber(17);
  sp.addNumber(9);
  sp.addNumber(11);
  std::cout << sp.shortestSpan() << std::endl;
  std::cout << sp.longestSpan() << std::endl;


  	Span sp2 = Span(5);
	try
	{
  	sp2.addNumber(3);
  	sp2.addNumber(4);
	sp2.addNumber(5);
  	sp2.addNumber(6);
	sp2.addNumber(7);
  	sp2.addNumber(8);

		std::cout << sp2.shortestSpan() << std::endl;
		std::cout << sp2.longestSpan() << std::endl;
		
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	Span sp3 = Span(10000);
	sp3.addMultiple(0, 10000);
	std::cout << sp3.shortestSpan() << std::endl;
	std::cout << sp3.longestSpan() << std::endl;
	try
	{
		sp2.addNumber(1000012);
		
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	

	return 0;

 }