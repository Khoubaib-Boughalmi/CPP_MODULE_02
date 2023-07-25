#ifndef POINT_H
#define POINT_H
#include "Fixed.h"

class Point {
    private:
        const Fixed x;
        const Fixed y;
    public:
        Point();
        Point(const float a, const float b);
        Point(const Point& other);
        Point&  operator=(const Point& other);
        ~Point();
        Fixed getX(void) const;
        Fixed getY(void) const;
};

bool bsp( Point const a, Point const b, Point const c, Point const point) ;

#endif