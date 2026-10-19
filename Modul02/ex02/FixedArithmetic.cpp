/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FixedArithmetic.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aialonso <aialonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 22:57:24 by aialonso          #+#    #+#             */
/*   Updated: 2026/10/18 23:39:58 by aialonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed Fixed::operator+(Fixed const& other) const {
	Fixed a;
	a.setRawBits(_value + other._value);
	return a;
}

Fixed Fixed::operator-(Fixed const& other) const {
	Fixed a;
	a.setRawBits(_value - other._value);
	return a;
}

Fixed Fixed::operator*(Fixed const& other) const {
	Fixed a(toFloat() * other.toFloat());
	return a;
}

Fixed Fixed::operator/(Fixed const& other) const {
	Fixed a(toFloat() / other.toFloat());
	return a;
}
