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
    *this = other;
}


Fixed& Fixed::operator=(const Fixed& other) {
    std::cout << "Copy assignment operator called" << std::endl;
    this->fixedPoint = other.getRawBits();
    return (*this);
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

float Fixed::toFloat( void ) const {
    return ((float)this->fixedPoint  / (1 << this->fractionalBits));
}

int Fixed::toInt( void ) const {
    return ((int)this->fixedPoint >> this->fractionalBits);
}

std::ostream& operator<<(std::ostream& out,const Fixed& fixedObj)
{
    out << fixedObj.toFloat();
    return (out);
}

int Fixed::getRawBits( void ) const{
    // std::cout << "getRawBits member function called" << std::endl;
    return (this->fixedPoint);
}

void Fixed::setRawBits( int const raw ) {
    this->fixedPoint = raw;
    std::cout << "setRawBits member function called" << std::endl;
}

