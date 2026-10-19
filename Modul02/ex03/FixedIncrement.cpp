/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FixedIncrement.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aialonso <aialonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 12:42:03 by aialonso          #+#    #+#             */
/*   Updated: 2026/10/19 12:42:06 by aialonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed& Fixed::operator++(void) {
	_value++;
	return *this;
}

Fixed Fixed::operator++(int) {
	Fixed a;
	a.setRawBits(_value++);
	return a;
}

Fixed& Fixed::operator--(void) {
	_value--;
	return *this;
}

Fixed Fixed::operator--(int) {
	Fixed a;
	a.setRawBits(_value--);
	return a;
}

Fixed& Fixed::min(Fixed& a, Fixed& b) {
	if (a < b)
		return a;
	return b;
}

Fixed const& Fixed::min(Fixed const& a, Fixed const& b) {
	if (a < b)
		return a;
	return b;
}

Fixed& Fixed::max(Fixed& a, Fixed& b) {
	if (a > b)
		return a;
	return b;
}

Fixed const& Fixed::max(Fixed const& a, Fixed const& b) {
	if (a > b)
		return a;
	return b;
}
