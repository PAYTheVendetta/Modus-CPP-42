/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FixedComparison.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aialonso <aialonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 22:57:39 by aialonso          #+#    #+#             */
/*   Updated: 2026/10/18 23:21:56 by aialonso         ###   ########.fr       */
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
