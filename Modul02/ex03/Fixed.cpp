/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aialonso <aialonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 12:41:23 by aialonso          #+#    #+#             */
/*   Updated: 2026/10/19 15:21:07 by aialonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int const Fixed::_fractionalBits = 8;

Fixed::Fixed()
	: _value(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int const n)
	: _value(n * (1 << _fractionalBits)) {
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(float const f)
	: _value(static_cast<int>(
		  roundf(f * static_cast<float>(1 << _fractionalBits)))) {
	std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(Fixed const& other)
	: _value(other._value) {
	std::cout << "Copy constructor called" << std::endl;
}

int Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return _value;
}

void Fixed::setRawBits(int const raw) {
	_value = raw;
}

int Fixed::toInt() const {
	return _value / (1 << _fractionalBits);
}

float Fixed::toFloat() const {
	return static_cast<float>(_value) /
		   static_cast<float>(1 << _fractionalBits);
}

Fixed& Fixed::operator=(Fixed const& other) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
		_value = other._value;
	return *this;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

std::ostream& operator<<(std::ostream& os, Fixed const& fixed) {
	return os << fixed.toFloat();
}
