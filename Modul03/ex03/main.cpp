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

#include "DiamondTrap.hpp"

// NOLINTBEGIN(readability-magic-numbers)
int main(void) {
	std::cout << "=== DIAMONDTRAP ===" << std::endl;
	std::cout << "--- Construccion: un solo ClapTrap ---" << std::endl;
	DiamondTrap d("Diamond");
	DiamondTrap e;

	std::cout << "--- whoAmI: dos nombres ---" << std::endl;
	d.whoAmI();
	e.whoAmI();

	std::cout << "--- Valores: HP 100 (Frag), dano 30 (Frag), attack de Scav ---" << std::endl;
	d.attack("Bob");
	d.takeDamage(0);

	std::cout << "--- Funciones especiales de los dos padres ---" << std::endl;
	d.guardGate();
	d.highFivesGuys();

	std::cout << "--- attack de cada clase ---" << std::endl;
	d.ScavTrap::attack("Bob");
	d.ClapTrap::attack("Bob");

	std::cout << "--- Copia y asignacion ---" << std::endl;
	d.takeDamage(20);
	DiamondTrap c(d);
	c.whoAmI();
	c.takeDamage(0);
	e = d;
	e.whoAmI();
	e.takeDamage(0);

	std::cout << "--- Energia 50 (Scav): ya gasto 3, 47 mas y la siguiente falla ---" << std::endl;
	for (int i = 0; i < 47; i++)
		d.attack("Bob");
	d.attack("Bob");

	std::cout << "--- delete por ClapTrap*: destructor virtual ---" << std::endl;
	ClapTrap* p = new DiamondTrap("Ptr");
	delete p;

	std::cout << "--- Muerte ---" << std::endl;
	c.takeDamage(200);
	c.attack("Bob");
	c.whoAmI();

	std::cout << "--- Orden de destruccion ---" << std::endl;
	return 0;
}
// NOLINTEND(readability-magic-numbers)
