#include "Fixed.h"

int main()
{   
    Fixed a(10);
    Fixed b(a);
    a.getRawBits();
    b.getRawBits();
    return 0;
}   