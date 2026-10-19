/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aialonso <aialonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/11 16:45:52 by aialonso          #+#    #+#             */
/*   Updated: 2026/10/11 18:16:08 by aialonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <string>
#include <iostream>

class Fixed
{
	private:
		static int const _fractionalBits;
		int _value;

	public:
		Fixed();
		Fixed(Fixed const& other);
		Fixed& operator=(Fixed const& other);
		~Fixed();
		int getRawBits(void) const;
		void setRawBits(int const raw);
};

#endif
