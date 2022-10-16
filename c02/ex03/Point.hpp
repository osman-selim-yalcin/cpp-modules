#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point
{
private:
	const Fixed x;
	const Fixed y;
public:
	Point();
	Point(const float a, const float b);
	Point(const Fixed a, const Fixed b);
	~Point();
	Point(const Point &copy);
	Point &operator=(const Point &copy);
	float getx() const;
	float gety() const;
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif
