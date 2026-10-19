/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aialonso <aialonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 13:35:53 by aialonso          #+#    #+#             */
/*   Updated: 2026/10/19 14:18:39 by aialonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

static Fixed crossProduct(Point const& a, Point const& b, Point const& p) {
	Fixed s;
	s = (b.getX() - a.getX()) * (p.getY() - a.getY()) -
		(b.getY() - a.getY()) * (p.getX() - a.getX());
	return s;
}

// NOLINTBEGIN(performance-unnecessary-value-param)
bool bsp(Point const a, Point const b, Point const c, Point const point) {
	Fixed ab;
	Fixed ca;
	Fixed bc;

	ab = crossProduct(a, b, point);
	ca = crossProduct(c, a, point);
	bc = crossProduct(b, c, point);
	if (ab == Fixed(0) || ca == Fixed(0) || bc == Fixed(0))
		return false;
	if ((ab < Fixed(0) && ca < Fixed(0) && bc < Fixed(0)) ||
		(ab > Fixed(0) && ca > Fixed(0) && bc > Fixed(0)))
		return true;
	return false;
}
// NOLINTEND(performance-unnecessary-value-param)
