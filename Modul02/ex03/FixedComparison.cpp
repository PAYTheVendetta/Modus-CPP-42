/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FixedComparison.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aialonso <aialonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 12:41:58 by aialonso          #+#    #+#             */
/*   Updated: 2026/10/19 12:42:00 by aialonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

bool Fixed::operator>(Fixed const& other) const {
	return _value > other._value;
}

bool Fixed::operator<(Fixed const& other) const {
	return _value < other._value;
}

bool Fixed::operator>=(Fixed const& other) const {
	return _value >= other._value;
}

bool Fixed::operator<=(Fixed const& other) const {
	return _value <= other._value;
}

bool Fixed::operator==(Fixed const& other) const {
	return _value == other._value;
}

bool Fixed::operator!=(Fixed const& other) const {
	return _value != other._value;
}
