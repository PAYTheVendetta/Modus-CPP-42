/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FixedArithmetic.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aialonso <aialonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 12:41:51 by aialonso          #+#    #+#             */
/*   Updated: 2026/10/19 12:41:54 by aialonso         ###   ########.fr       */
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
