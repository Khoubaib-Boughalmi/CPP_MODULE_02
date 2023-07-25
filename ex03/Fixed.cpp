#include "Fixed.h"

Fixed::Fixed(): fixedPoint(0) {
    // std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int intValue): fixedPoint(0) {
    // std::cout << "Int constructor called" << std::endl;
    this->fixedPoint = intValue << this->fractionalBits;
}

Fixed::Fixed(const float floatValue): fixedPoint(0) {
    // std::cout << "Float constructor called" << std::endl;
    this->fixedPoint = (int)roundf(floatValue  * (1 << this->fractionalBits));
}

Fixed::Fixed(const Fixed& other) {    
    // std::cout << "Copy constructor called" << std::endl;
    this->fixedPoint =  other.fixedPoint;
}

float Fixed::toFloat( void ) const {
    return ((float)this->fixedPoint  / (1 << this->fractionalBits));
}

int Fixed::toInt( void ) const {
    return ((int)this->fixedPoint >> this->fractionalBits);
}

Fixed& Fixed::operator=(const Fixed& other) {
    // std::cout << "Copy assignment operator called" << std::endl;
    this->fixedPoint = other.fixedPoint;
    return (*this);
}

bool Fixed::operator>(const Fixed& other) const {
    return (this->toFloat() > other.toFloat());
}

bool Fixed::operator<(const Fixed& other) const{
    return (this->toFloat() < other.toFloat());
}

bool Fixed::operator>=(const Fixed& other) const{
    return (this->toFloat() >= other.toFloat());
}

bool Fixed::operator<=(const Fixed& other) const{
    return (this->toFloat() <= other.toFloat());
}

bool Fixed::operator==(const Fixed& other) const{
    return (this->toFloat() == other.toFloat());
}

bool Fixed::operator!=(const Fixed& other) const{
    return (this->toFloat() != other.toFloat());
}

Fixed Fixed::operator+(const Fixed& other) {
    return (Fixed(this->toFloat() + other.toFloat()));
}

Fixed Fixed::operator-(const Fixed& other) {
    return (Fixed(this->toFloat() - other.toFloat()));
}

Fixed Fixed::operator*(const Fixed& other) {
    return (Fixed(this->toFloat() * other.toFloat()));
}

Fixed Fixed::operator/(const Fixed& other) {
   return (Fixed(this->toFloat() / other.toFloat()));
}

Fixed Fixed::operator++() {     //PREFIX
    // std::cout << "operator++(prefix)\n";
	this->fixedPoint = this->fixedPoint + 1;
	return (*this);
}

Fixed Fixed::operator--() {     //PREFIX
	this->fixedPoint = this->fixedPoint - 1;
	return (*this);
}
Fixed Fixed::operator++(int) {  //POSTFIX
    // std::cout << "operator++(postfix)\n";
	Fixed tmp = *this;
	this->fixedPoint = this->fixedPoint + 1;
	return (tmp);
}

Fixed Fixed::operator--(int) {  //POSTFIX
	Fixed tmp = *this;
	this->fixedPoint = this->fixedPoint - 1;
	return (tmp);
}

std::ostream& operator<<(std::ostream& out,const Fixed& fixedObj)
{
    out << fixedObj.toFloat();
    return (out);
}

Fixed::~Fixed() {
    // std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits( void ) {
    // std::cout << "getRawBits member function called" << std::endl;
    return (this->fixedPoint);
}

void Fixed::setRawBits( int const raw ) {
    this->fixedPoint = raw;
    // std::cout << "setRawBits member function called" << std::endl;
}

Fixed Fixed::min(Fixed& f1, Fixed& f2) {
	if(f1 > f2)
		return (Fixed(f2));
	return (Fixed(f1));
}

Fixed Fixed::max(Fixed& f1, Fixed& f2) {
	if(f1 >= f2)
		return (Fixed(f1));
	return (Fixed(f2));
}

Fixed Fixed::min(const Fixed& f1, const Fixed& f2) {
	if(f1 > f2)
		return (Fixed(f2));
	return (Fixed(f1));
}

Fixed Fixed::max(const Fixed& f1, const Fixed& f2) {
	if(f1 >= f2)
		return (Fixed(f1));
	return (Fixed(f2));
}