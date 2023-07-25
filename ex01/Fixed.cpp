#include "Fixed.h"

Fixed::Fixed(): fixedPoint(0) {
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int intValue): fixedPoint(0) {
    this->fixedPoint = intValue << this->fractionalBits;
}

Fixed::Fixed(const float floatValue): fixedPoint(0) {
    this->fixedPoint = (int)roundf(floatValue  * (1 << this->fractionalBits));
}

Fixed::Fixed(const Fixed& other) {
    (void) other;
    
    std::cout << "Copy constructor called" << std::endl;
    this->fixedPoint =  this->getRawBits();
}

float Fixed::toFloat( void ) const {
    std::cout << "Float constructor called" << std::endl;
    return (int)(this->fixedPoint  / (1 << this->fractionalBits));
}

int Fixed::toInt( void ) const {
    std::cout << "Int constructor called" << std::endl;
    return ((int)this->fixedPoint << this->fractionalBits);
}

Fixed& Fixed::operator=(const Fixed& other) {
    std::cout << "Copy assignment operator called" << std::endl;
    this->getRawBits();
    this->fixedPoint = other.fixedPoint;
    return (*this);
}

std::ostream& operator<<(std::ostream& out,const Fixed& fixedObj)
{
    out << fixedObj.toFloat();
    return (out);
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

