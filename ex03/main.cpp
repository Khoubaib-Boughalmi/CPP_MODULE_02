#include "Point.h"

int main( void ) {
    Point const  a(-0.4,0);
    Point const  b(5.2,1.2);
    Point const  c(2.2,4.4);
    Point const  point(-0.3,0.5);
    if(bsp(a, b, c, point))
        std::cout << "Point is inside the triangle" << std::endl;
    else
        std::cout << "Point is NOT inside the triangle" << std::endl;
}

