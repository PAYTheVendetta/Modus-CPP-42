/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aialonso <aialonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 14:45:13 by aialonso          #+#    #+#             */
/*   Updated: 2026/10/23 19:43:06 by aialonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

// NOLINTBEGIN(readability-magic-numbers)
int main(void) {
	std::cout << std::endl << "=== SCAVTRAP ===" << std::endl;
	std::cout << "--- Orden de construccion ---" << std::endl;
	ScavTrap s("Scav");
	ScavTrap d;

	std::cout << "--- Ataque 20, funciones heredadas ---" << std::endl;
	s.attack("Bob");
	s.takeDamage(30);
	s.beRepaired(10);
	s.guardGate();

	std::cout << "--- Copia y asignacion ---" << std::endl;
	ScavTrap t(s);
	t.takeDamage(0);
	d = s;
	d.takeDamage(0);
	
	std::cout << "--- virtual: ClapTrap* a un ScavTrap ---" << std::endl;
	ClapTrap* p = &s;
	p->attack("Bob");

	std::cout << "--- Muerte ---" << std::endl;
	s.takeDamage(200);
	s.attack("Bob");
	s.guardGate();

	std::cout << "--- Orden de destruccion ---" << std::endl;
	return 0;
}
// NOLINTEND(readability-magic-numbers)
