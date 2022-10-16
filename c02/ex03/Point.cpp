#include "Point.hpp"

Point::Point(): x(Fixed()), y(Fixed()) {}
Point::~Point(){}
Point::Point(const float x, const float y)
	: x(Fixed(x))
	, y(Fixed(y)) {}

Point::Point(const Fixed x, const Fixed y)
	: x(x)
	, y(y) {}
Point::Point(const Point &copy) : x(copy.getx()), y(copy.gety())
{
	*this = copy;
}
Point &Point::operator=(const Point &copy)
{
	(void)copy;
	return (*this);
}

float Point::getx() const
{
	return (x.toFloat());
}

float Point::gety() const
{
	return(y.toFloat());
}


