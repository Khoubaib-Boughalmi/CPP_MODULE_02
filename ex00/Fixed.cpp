#include "Fixed.h"

Fixed::Fixed(): fixedPoint(0) {
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& other) {
    (void) other;
    
    std::cout << "Copy constructor called" << std::endl;
    this->fixedPoint =  this->getRawBits();
}


Fixed& Fixed::operator=(const Fixed& other) {
    std::cout << "Copy assignment operator called" << std::endl;
    this->getRawBits();
    this->fixedPoint = other.fixedPoint;
    return (*this);
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits( void ) {
    std::cout << "getRawBits member function called" << std::endl;
    return (0);
}

void Fixed::setRawBits( int const raw ) {
    this->fixedPoint = raw;
    std::cout << "setRawBits member function called" << std::endl;
}

