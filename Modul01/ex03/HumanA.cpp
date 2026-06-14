/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aialonso <aialonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/13 16:45:05 by aialonso          #+#    #+#             */
/*   Updated: 2026/06/13 18:11:44 by aialonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& x) : name(name), weap(x) {}

void HumanA::attack() 
{
	std::cout << name << " attacks with their " << weap.getType() << std::endl;
}
