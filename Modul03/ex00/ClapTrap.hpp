/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aialonso <aialonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 14:45:17 by aialonso          #+#    #+#             */
/*   Updated: 2026/10/19 15:18:50 by aialonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>
#include <iostream>

#define DEFAULT_NAME "default"
#define HIT_POINTS 10
#define ENERGY_POINTS 10
#define ATTACK_DAMAGE 0


class ClapTrap
{
	private:
		std::string _name;
		unsigned int _hitPoints;
		unsigned int _energyPoints;
		unsigned int _attackDamage;

	public:
		ClapTrap();
		explicit ClapTrap(std::string const& name);
		ClapTrap(ClapTrap const& other);
		ClapTrap& operator=(ClapTrap const& other);
		~ClapTrap();

		void attack(std::string const& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

#endif
