#include "Point.h"

int main( void ) {
    Point const  a(2,2);
    Point const  b(6,3);
    Point const  c(4,7);
    Point const  point(0.2,3.9);
    std::cout << bsp(a, b, c, point) << std::endl;
}

