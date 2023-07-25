#include "Point.h"

int main( void ) {
    Point const  a(0,0);
    Point const  b(5,0);
    Point const  c(7,1);
    Point const  point(-40,10);
    std::cout << bsp(a, b, c, point) << std::endl;
}

