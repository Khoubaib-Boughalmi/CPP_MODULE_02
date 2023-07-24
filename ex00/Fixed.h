#ifndef FIXED_H
#define FIXED_H

#include <iostream>

class Fixed {
    private:
        int fixedPoint;
        static const int fracBits;
        int *pFixed;
    public:
        Fixed(int a);
        Fixed(const Fixed& fixedObjs);
        ~Fixed();
        int getRawBits( void );
        int setRawBits( int const raw );
};

#endif