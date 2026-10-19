/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aialonso <aialonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 12:42:27 by aialonso          #+#    #+#             */
/*   Updated: 2026/10/19 13:35:18 by aialonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point
{
	private:
		Fixed const x;	// NOLINT(readability-identifier-naming)
		Fixed const y;	// NOLINT(readability-identifier-naming)

	public:
		Point();
		Point(Point const& other);
		Point(float const x, float const y);
		Point& operator=(Point const& other);
		~Point();

		Fixed const& getX(void) const;
		Fixed const& getY(void) const;
};

bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif
