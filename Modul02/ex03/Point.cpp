/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aialonso <aialonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 12:42:33 by aialonso          #+#    #+#             */
/*   Updated: 2026/10/19 13:35:23 by aialonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point()
	: x(0),
	  y(0) {
}

Point::Point(Point const& other)
	: x(other.x),
	  y(other.y) {
}

Point::Point(float const x, float const y)
	: x(x),
	  y(y) {
}

Point& Point::operator=(Point const& other) {
	(void)other;
	return *this;
}

Fixed const& Point::getX() const {
	return x;
}

Fixed const& Point::getY() const {
	return y;
}

Point::~Point() {
}
