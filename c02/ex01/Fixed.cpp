#include "Fixed.hpp"

int Fixed::toInt() const
{
	return(rawBit / 256);
}

float Fixed::toFloat() const
{
	return((float)rawBit / 256);
}

int Fixed::getRawBits() const
{
	cout <<"getRawBits member function called" << endl;
	return rawBit;
}

void Fixed::setRawBits( int const raw )
{
	cout <<"setRawBits member function called" << endl;
	rawBit = raw * 256;
}

std::ostream &operator<<(std::ostream &os, const Fixed& obj) {
	os << obj.toFloat();
	return os;
}

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

Fixed::Fixed(int num)
{
	cout <<"int constructor called" << endl;
	num *= 256;
	rawBit = num;
}

Fixed::Fixed(float num)
{
	cout <<"float constructor called" << endl;
	rawBit = (int)(num * 256);
}

Fixed::Fixed()
{
	cout <<"Default constructor called" << endl;
	rawBit = 0;
}

Fixed::~Fixed()
{
	cout << "Destructor called" << endl;
}

