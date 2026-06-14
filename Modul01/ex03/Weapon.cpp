/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aialonso <aialonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/13 15:21:49 by aialonso          #+#    #+#             */
/*   Updated: 2026/06/13 17:16:09 by aialonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

const std::string	&Weapon::getType()
{
	return (weap);
}

void	Weapon::setType(std::string x)
{
	weap = x;
}

Weapon::Weapon(std::string x)
{
	weap = x;
}
