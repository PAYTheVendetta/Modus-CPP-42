/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aialonso <aialonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/13 18:00:35 by aialonso          #+#    #+#             */
/*   Updated: 2026/06/13 18:28:38 by aialonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void HumanB::setWeapon(Weapon &club)
{
	weap = &club;
}

void HumanB::attack()
{
	std::cout << name << " attacks with their " << weap->getType() << std::endl;
}

HumanB::HumanB(std::string name) : name(name)
{
}
