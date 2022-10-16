#include "Fixed.hpp"

Fixed &Fixed::operator=(const Fixed &copy)
{
	cout <<"Copy assignment constructor called" << endl;
	if (this != &copy)
	{
		rawBit = copy.getRawBits();
	}
	return *this;
}

Fixed::Fixed(const Fixed &copy)
{
	cout <<"Copy constructor called" << endl;
	*this = copy;
}

Fixed::Fixed()
{
	cout <<"Default constructor called" << endl;
	rawBit = 0;
}

Fixed::~Fixed()
{
}

int Fixed::getRawBits() const
{
	cout <<"getRawBits member function called" << endl;
	return (rawBit);
}

void Fixed::setRawBits( int const raw )
{
	cout <<"setRawBits member function called" << endl;
	rawBit = raw;
}
