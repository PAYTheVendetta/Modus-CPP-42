/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aialonso <aialonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 19:37:21 by aialonso          #+#    #+#             */
/*   Updated: 2026/10/24 18:27:52 by aialonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

#define SCAV_HIT_POINTS 100
#define SCAV_ENERGY_POINTS 50
#define SCAV_ATTACK_DAMAGE 20

class ScavTrap : virtual public ClapTrap
{
	public:
		ScavTrap();
		explicit ScavTrap(std::string const& name);
		ScavTrap(ScavTrap const& other);
		ScavTrap& operator=(ScavTrap const& other);

		virtual void attack(std::string const& target);
		void guardGate();
		
		~ScavTrap();
};

#endif
