#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <algorithm>
#include <list>

class Span
{
private:
	unsigned int _n;
	std::list<int> list;

public:
	Span(unsigned int N);
	Span();
	~Span();
	Span(const Span &copy);
	Span &operator=(const Span &copy);

	void addNumber(int n);
	void addMultiple(int start, int end);
	unsigned int shortestSpan();
	unsigned int longestSpan();
};

#endif