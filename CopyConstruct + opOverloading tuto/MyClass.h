#ifndef MYCLASS_H
#define MYCLASS_H

#include <iostream>

class MyClass {
    private:
        int value;
        int *pVar;
    public:
        MyClass();
        MyClass(int a);
        MyClass(const MyClass& MyClassObjs);
        ~MyClass();
        MyClass& operator=(const MyClass& rightHandsideObject);
        int getRawBits( void );
        int setRawBits( int const raw );
};

#endif