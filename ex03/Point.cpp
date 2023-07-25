#include "Point.h"

Point::Point(): x(0), y(0) {
}

Point::Point(const float a, const float b): x(a), y(b) {
}

Point::Point(const Point& other): x(other.x), y(other.y) {
}

Point&  Point::operator=(const Point& other)
{
    if(this != &other)
    {
        *this = other;
    }
    return (*this);
}

Point::~Point()
{}

Fixed Point::getX(void) const {
    return (this->x);
}

Fixed Point::getY(void) const {
    return (this->y);
}
