// (1/2) (x1(y2 - y3) + x2(y3 - y1) + x3(y1 - y2))
#include "Point.h"

float calculate_area(Point const a, Point const b, Point const c)
{
    // (1/2) (x1(y2 - y3) + x2(y3 - y1) + x3(y1 - y2))
    // float area1 = std::abs((1/2) * (a.getX().toFloat() * (b.getY().toFloat() - c.getY().toFloat()) + b.getX().toFloat() * (c.getY().toFloat() - a.getY().toFloat()) + c.getX().toFloat() * (a.getY().toFloat() - b.getY().toFloat()))); // abc
    float area1 = std::abs((1/2) * (a.getX().toFloat() * (b.getY().toFloat() - c.getY().toFloat())) ); // abc
    std::cout << a.getX().toFloat() << std::endl;
    std::cout << b.getY().toFloat() << std::endl;
    std::cout << c.getY().toFloat() << std::endl;
    std::cout << "AREA1 " << area1 << std::endl;
    return area1;

}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
    float area1 = calculate_area(a, b, c);//abc
    float area2 = calculate_area(a, b, point);//abp
    float area3 = calculate_area(a, c, point);//acp
    float area4 = calculate_area(b, c, point);//bcp
    if(area2 + area3 + area4 == area1)
    {
        std::cout << area3 << std::endl;
        std::cout << area4 << std::endl;
        return (1);
    }
    return (0);
}