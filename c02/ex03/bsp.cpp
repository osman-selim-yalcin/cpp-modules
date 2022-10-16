#include "Point.hpp"

Fixed side (const Point p, const Point p1, const Point p2) {
	return (p2.gety() - p1.gety()) * (p.getx() - p1.getx())
		+ ((p2.getx() * -1) + p1.getx()) * (p.gety() - p1.gety());
}

bool bsp(const Point a, const Point b, const Point c, const Point point) {
	bool side1, side2, side3;
  
	side1 = side(point, a, b) > 0;
	side2 = side(point, b, c) > 0;
	side3 = side(point, c, a) > 0;

	return side1 && side2 && side3;
}

// bool bsp( Point const a, Point const b, Point const c, Point const point)
// {
// 	// float bx = b.getx() - a.getx();
// 	// float by = b.gety() - a.gety();
// 	// float cx = c.getx() - a.getx();
// 	// float cy = c.getx() - a.gety();
// 	// float x = point.getx() - a.getx();
// 	// float y = point.gety() - a.gety();
// 	// cout <<" bx " <<bx <<" cy " << cy <<" cx " << cx <<" by "<< by;
// 	// float d = bx * cy - cx * by;
// 	// cout << "d : " << d << endl;
// 	// float wa = (x * (by - cy) + y * (cx - bx) + bx * cy - cx * by) / d;
// 	// float wb = (x * cy - y * cx) / d;
// 	// float wc = (y * bx - x * by) / d;
// 	// cout << wa << endl;
// 	// cout << wb << endl;
// 	// cout << wc << endl;
// 	// if ((wa < 0 && wa > 1) || (wb < 0 && wb > 1) ||( wc < 0 && wc > 1))
// 	// 	return(true);
// 	// return(false);
// }
