#ifndef FIXED_H
#define FIXED_H

#include <iostream>

class Fixed
{
    private:
        int fixedPoint;
        const static int fractionalVar = 8;
    public:
        Fixed();
        Fixed(const Fixed& other);
        Fixed& operator=(const Fixed& other);
        ~Fixed();
        int getRawBits( void );
        void setRawBits( int const raw );
};

#endif