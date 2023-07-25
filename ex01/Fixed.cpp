#include "Fixed.h"

Fixed::Fixed(): fixedPoint(0) {
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int intValue): fixedPoint(0) {
    std::cout << "Int constructor called" << std::endl;
    this->fixedPoint = intValue << this->fractionalBits;
}

Fixed::Fixed(const float floatValue): fixedPoint(0) {
    std::cout << "Float constructor called" << std::endl;
    this->fixedPoint = (int)roundf(floatValue  * (1 << this->fractionalBits));
}

Fixed::Fixed(const Fixed& other) {    
    std::cout << "Copy constructor called" << std::endl;
    this->fixedPoint =  other.fixedPoint;
}

float Fixed::toFloat( void ) const {
    return ((float)this->fixedPoint  / (1 << this->fractionalBits));
}

int Fixed::toInt( void ) const {
    return ((int)this->fixedPoint >> this->fractionalBits);
}

Fixed& Fixed::operator=(const Fixed& other) {
    std::cout << "Copy assignment operator called" << std::endl;
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

