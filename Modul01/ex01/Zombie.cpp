/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aialonso <aialonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/11 17:36:18 by aialonso          #+#    #+#             */
/*   Updated: 2026/06/11 18:46:16 by aialonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
	Zombie::name = "Horde";
}

Zombie::~Zombie()
{
	std::cout << name << std::endl;
}

void Zombie::announce(void)
{
	std::cout << name <<": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::rename(std::string name)
{
	Zombie::name = name;
}