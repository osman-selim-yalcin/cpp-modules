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
	return rawBit;
}

void Fixed::setRawBits( int const raw )
{
	rawBit = raw * 256;
}

Fixed& Fixed::min(Fixed& lhs, Fixed& rhs) {
	if (lhs < rhs) return lhs;
	return rhs;
}

Fixed& Fixed::max(Fixed& lhs, Fixed& rhs) {
	if (lhs > rhs) return lhs;
	return rhs;
}

const Fixed& Fixed::min(const Fixed& lhs, const Fixed& rhs) {
	if (lhs < rhs) return lhs;
	return rhs;
}

const Fixed& Fixed::max(const Fixed& lhs, const Fixed& rhs) {
	if (lhs > rhs) return lhs;
	return rhs;
}

std::ostream &operator<<(std::ostream &os, const Fixed& obj) {
	os << obj.toFloat();
	return os;
}

bool	Fixed::operator==(const Fixed &copy) const
{
	return (this->toFloat() == copy.toFloat());
}

bool	Fixed::operator!=(const Fixed &copy) const
{
	return (this->toFloat() != copy.toFloat());
}

bool	Fixed::operator<=(const Fixed &copy) const
{
	return (this->toFloat() <= copy.toFloat());
}

bool	Fixed::operator>=(const Fixed &copy) const
{
	return (this->toFloat() >= copy.toFloat());
}

bool	Fixed::operator<(const Fixed &copy) const
{
	return (this->toFloat() < copy.toFloat());
}

bool	Fixed::operator>(const Fixed &copy) const
{
	return (this->toFloat() > copy.toFloat());
}

Fixed &Fixed::operator=(const Fixed &copy)
{
	if (this != &copy)
	{
		rawBit = copy.getRawBits();
	}
	return *this;
}

Fixed	Fixed::operator+(Fixed const &copy) const
{
	Fixed	result(this->toFloat() + copy.toFloat());
	return (result);
}

Fixed	Fixed::operator-(Fixed const &copy) const
{
	Fixed	result(this->toFloat() - copy.toFloat());
	return (result);
}

Fixed	Fixed::operator*(Fixed const &copy) const
{
	Fixed	result(this->toFloat() * copy.toFloat());
	return (result);
}

Fixed	Fixed::operator/(Fixed const &copy) const
{
	Fixed	result(this->toFloat() / copy.toFloat());
	return (result);
}

Fixed& Fixed::operator++() {
	++(this->rawBit);
	return (*this);
}

Fixed& Fixed::operator--() {
	--(this->rawBit);
	return (*this);
}

Fixed Fixed::operator++(int) {
	Fixed prev(*this);

	++(this->rawBit);
	return prev;
}

Fixed Fixed::operator--(int) {
	Fixed prev(*this);

	--(this->rawBit);
	return prev;
}

Fixed::Fixed(const Fixed &copy)
{
	*this = copy;
}

Fixed::Fixed(int num)
{
	num *= 256;
	rawBit = num;
}

Fixed::Fixed(float num)
{
	rawBit = (int)(num * 256);
}

Fixed::Fixed()
{
	rawBit = 0;
}

Fixed::~Fixed()
{
}

