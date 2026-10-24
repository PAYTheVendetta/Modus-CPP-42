/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aialonso <aialonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 14:45:13 by aialonso          #+#    #+#             */
/*   Updated: 2026/10/24 10:35:28 by aialonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

// NOLINTBEGIN(readability-magic-numbers)
int main(void) {
	std::cout << std::endl << "=== FRAGTRAP ===" << std::endl;
	std::cout << "--- Orden de construccion ---" << std::endl;
	FragTrap f("Frag");
	FragTrap g;
	
	std::cout << "-- Ataque 30 (attack de ClapTrap), funciones heredadas --\n";
	f.attack("Bob");
	f.takeDamage(40);
	f.beRepaired(5);
	f.highFivesGuys();
	
	std::cout << "--- Copia y asignacion ---" << std::endl;
	FragTrap h(f);
	h.takeDamage(0);
	g = f;
	g.takeDamage(0);

	std::cout << "--- Muerte ---" << std::endl;
	f.takeDamage(200);
	f.attack("Bob");
	f.highFivesGuys();
	std::cout << "--- Orden de destruccion ---" << std::endl;
	return 0;
}
// NOLINTEND(readability-magic-numbers)
