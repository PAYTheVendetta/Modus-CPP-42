/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aialonso <aialonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 14:45:13 by aialonso          #+#    #+#             */
/*   Updated: 2026/10/19 22:29:05 by aialonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

// NOLINTBEGIN(readability-magic-numbers)
int main(void) {
	std::cout << "--- Constructores ---" << std::endl;
	ClapTrap a("Clappy");
	ClapTrap b;
	ClapTrap c(a);
	b = a;

	std::cout << "--- Ataque, dano y reparacion ---" << std::endl;
	a.attack("Bob");
	a.takeDamage(3);
	a.beRepaired(2);

	std::cout << "--- Sin energia ---" << std::endl;
	for (int i = 0; i < 9; i++)
		a.attack("Bob");
	a.beRepaired(1);

	std::cout << "--- Muerte ---" << std::endl;
	c.takeDamage(50);
	c.attack("Bob");
	c.beRepaired(5);
	c.takeDamage(1);

	std::cout << "--- Destructores ---" << std::endl;
	return 0;
}
// NOLINTEND(readability-magic-numbers)
