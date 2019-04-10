/**
 * File              : Fixed.class.cpp
 * Author            : pdeguing <pdeguing@student.42.us.org>
 * Date              : 09.04.2019
 * Last Modified Date: 09.04.2019
 * Last Modified By  : pdeguing <pdeguing@student.42.us.org>
 */

#include "Fixed.class.hpp"

const int	Fixed::_fractional_bits = 8;

Fixed::Fixed(void) : _value(0) {
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed(Fixed const & src) {
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return ;
}

Fixed::Fixed(const int n) : _value(n << _fractional_bits) {
	std::cout << "Int constructor called" << std::endl;
	return ;
}

Fixed::Fixed(const float n) : _value(roundf(n * (1 << _fractional_bits))) {
	std::cout << "Float constructor called" << std::endl;
	return ;
}

Fixed::~Fixed(void) {
	std::cout << "Destructor called" << std::endl;
}

Fixed &	Fixed::operator=(Fixed const & rhs) {
	std::cout << "Assignation operator called" << std::endl;
	if (this != &rhs)
		this->_value = rhs.getRawBits();
	return *this;
}

int	Fixed::getRawBits(void) const {
	//std::cout << "getRawBits member function called" << std::endl;
	return this->_value;
}

void	Fixed::setRawBits(int const raw) {
	this->_value = raw;
	return ;
}

float	Fixed::toFloat(void) const {
	//std::cout << "toFloat member function called" << std::endl;
	return (float)this->_value / (1 << _fractional_bits);
}

int	Fixed::toInt(void) const {
	//std::cout << "toInt member function called" << std::endl;
	return this->_value >> _fractional_bits;
}

std::ostream &		operator<<(std::ostream & o, Fixed const & f) {
	o << f.toFloat();
	return o;
}
