#ifndef FIXED_HPP
#define FIXED_HPP

#include <string>
#include <iostream>

using std::endl;
using std::cout;
using std::string;
using std::cin;
using std::getline;


class Fixed
{
private:
	int rawBit;
	static const int frac = 8;
public:
	Fixed(const int);
	Fixed(const float);
	Fixed();
	Fixed(const Fixed &copy);
	Fixed &operator=(const Fixed &copy);
	~Fixed();
	int getRawBits( void ) const;
	void setRawBits( int const raw );
	float toFloat( void ) const;
	int toInt( void ) const;
};

std::ostream &operator<<(std::ostream &ostream, const Fixed& myClass);

#endif
