#include "Fixed.h"

Fixed::Fixed(int a) {
    this->fixedPoint = a;
    this->pFixed = new int;
    *pFixed = a;
}

Fixed::Fixed(const Fixed& fixedObjs) {
    std::cout << "copy constructor\n";  
    this->fixedPoint = fixedObjs.fixedPoint;
    this->pFixed = new int;
    *(this->pFixed) = *(fixedObjs.pFixed);
}

Fixed::~Fixed() {
    std::cout << "deconstructor\n";  
    delete this->pFixed;
}

int Fixed::getRawBits() {
    std::cout << this->fixedPoint << std::endl;  
    return (0);
}

int Fixed::setRawBits(int const raw) {
    (void)raw;
    return (0);
}
