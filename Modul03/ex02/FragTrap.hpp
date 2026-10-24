/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aialonso <aialonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 19:45:18 by aialonso          #+#    #+#             */
/*   Updated: 2026/10/23 19:52:50 by aialonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

#define FRAG_HIT_POINTS 100
#define FRAG_ENERGY_POINTS 100
#define FRAG_ATTACK_DAMAGE 30

class FragTrap : public ClapTrap
{
	public:
		FragTrap();
		FragTrap(FragTrap const& other);
		FragTrap& operator=(FragTrap const& other);
		explicit FragTrap(std::string const& name);

		void highFivesGuys();

		~FragTrap();
};

#endif
