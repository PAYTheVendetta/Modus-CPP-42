/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aialonso <aialonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/13 19:37:24 by aialonso          #+#    #+#             */
/*   Updated: 2026/06/14 19:21:28 by aialonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char const *argv[])
{
	Harl harl;
	
	if (argc != 2)
		return (1);
	harl.complain(std::string(argv[1]));
	return 0;
}
