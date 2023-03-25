#include "Span.hpp"

Span::Span(unsigned int n): _n(n)
{
	return ;
}

Span::Span(): _n(10)
{
	return ;
}

Span::~Span()
{
	return ;
}

Span::Span(const Span &copy)
{
	*this = copy;
	return ;
}

Span &Span::operator=(const Span &copy)
{
	if (this != &copy)
	{
		this->_n = copy._n;
		this->list = copy.list;
	}
	return *this;
}

void Span::addNumber(int n)
{
	if (std::find( list.begin(), list.end(), n ) != list.end())
		throw std::out_of_range("n is already exist");
	else if (list.size() < _n)
		list.push_back(n);
	else
		throw std::out_of_range("list is full");
	return ;
}

unsigned int Span::shortestSpan()
{
	if (list.size() < 2)
		throw std::out_of_range("list size must be greater than 2");
	unsigned int  min = Span::longestSpan();
    for ( std::list<int>::const_iterator it = list.begin(); it != list.end(); ++it ) {
        for ( std::list<int>::const_iterator it2 = list.begin(); it2 != list.end(); ++it2 ) {
            if ( it == it2 ) continue;
            if ( std::abs( *it2 - *it ) <  static_cast< int >( min ) )
                min = std::abs( *it2 - *it );
        }
    }
    return min;
}

unsigned int Span::longestSpan()
{
	if (list.size() < 2)
	{
		throw std::out_of_range("list size must be greater than 2");
	} else {
		return *std::max_element(list.begin(), list.end()) - *std::min_element(list.begin(), list.end());
	}	
}

void Span::addMultiple(int start, int end)
{
	for (int i = start; i < end; i++)
	{
		if (list.size() >= _n)
		{
			throw std::out_of_range("list is full");
		}
		list.push_back(i);
	}
	return ;
}