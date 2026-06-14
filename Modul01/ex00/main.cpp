/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aialonso <aialonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/11 17:36:26 by aialonso          #+#    #+#             */
/*   Updated: 2026/06/11 18:31:53 by aialonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie *z;
	
	randomChump("predator");
	z = newZombie("aitor");
	z->announce();
	z->announce();
	z->announce();
	delete z;
	return 0;
}
