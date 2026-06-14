/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aialonso <aialonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/11 18:48:20 by aialonso          #+#    #+#             */
/*   Updated: 2026/06/11 18:53:28 by aialonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie *z;

	z = zombieHorde(5, "mi");
	for (int i = 0; i < 5; i++)
		z[i].announce();
	delete[] z;
	return 0;
}
