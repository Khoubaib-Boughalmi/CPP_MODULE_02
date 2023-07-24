#include "MyClass.h"

int main()
{   
    MyClass a(10);
    MyClass b(a);
    MyClass c;
    c = a;
    a.getRawBits();
    b.getRawBits();
    c.getRawBits();
    a.setRawBits(20);
    b = c = a;
    a.getRawBits();
    b.getRawBits();
    c.getRawBits();
    return 0;
}