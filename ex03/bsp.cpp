// (1/2) (x1(y2 - y3) + x2(y3 - y1) + x3(y1 - y2))
#include "Point.h"

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
    std::cout << a.getX().toFloat() << std::endl;
    std::cout << a.getY().toFloat() << std::endl;
    std::cout << b.getX().toFloat() << std::endl;
    std::cout << b.getY().toFloat() << std::endl;
    std::cout << c.getX().toFloat() << std::endl;
    std::cout << c.getY().toFloat() << std::endl;
    std::cout << point.getX().toFloat() << std::endl;
    std::cout << point.getY().toFloat() << std::endl;
    return (0);
}