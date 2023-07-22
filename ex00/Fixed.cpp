#include "Fixed.h"

Fixed::Fixed() {

}
Fixed::Fixed(const Fixed& fixedObjs) {
    (void)fixedObjs;
    std::cout << "copy Constructor" << std::endl;
}

Fixed::~Fixed() {

}