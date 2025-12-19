#include "Fixed.hpp"

Fixed::Fixed()
{
	fixed_point = 0;
	std::cout << "Default constructor called" << std::endl;
}
Fixed::Fixed(const int number)
{
	std::cout << "Int constructor called" << std::endl;
	fixed_point = number * 256;
}
Fixed::Fixed(const float number)
{
	std::cout << "Float constructor called" << std::endl;
	fixed_point = roundf(number * 256);
}

Fixed::Fixed(const Fixed& other) {
	std::cout << "Copy constructor called" << std::endl;
	fixed_point = other.fixed_point;
}

Fixed& Fixed::operator=(const Fixed& other) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other) {
		fixed_point = other.fixed_point;
	}
	return *this;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits() const {
	std::cout << "getRawBits member function called" << std::endl;
	return fixed_point;
}

void Fixed::setRawBits(int const raw) {
	std::cout << "setRawBits member function called" << std::endl;
	fixed_point = raw;
}

float Fixed::toFloat( void ) const {
	return (float)fixed_point / 256;
}

int Fixed::toInt( void ) const {
	return fixed_point >> fractional_bits;
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed) {
	out << fixed.toFloat();
	return out;
}
