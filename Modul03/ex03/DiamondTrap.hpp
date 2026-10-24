/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aialonso <aialonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/24 18:28:29 by aialonso          #+#    #+#             */
/*   Updated: 2026/10/24 18:37:42 by aialonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	private:
		std::string _name;

	public:
		DiamondTrap();
		DiamondTrap(DiamondTrap const& other);
		DiamondTrap& operator=(DiamondTrap const& other);
		explicit DiamondTrap(std::string const& name);

		void attack(std::string const& target);
		void whoAmI();
		
		~DiamondTrap();
};

#endif
