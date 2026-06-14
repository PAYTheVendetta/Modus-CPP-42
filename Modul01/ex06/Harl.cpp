/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aialonso <aialonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/14 19:29:59 by aialonso          #+#    #+#             */
/*   Updated: 2026/06/14 19:40:16 by aialonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::debug()
{
	std::cout << "Hey i am a debug " << std::endl;
}

void	Harl::info()
{
	std::cout << "Hey i am a info" << std::endl;
}

void	Harl::warning()
{
	std::cout << "Hey i am a warning" << std::endl;
}

void	Harl::error()
{
	std::cout << "Hey i am a error" << std::endl;
}

void Harl::complain(std::string level)
{
	int i = 0;
	std::string wher[4] = {"debug", "info", "warning", "error"};
	
	for (; i < 4 && wher[i] != level; i++)
		;
	void (Harl::*fun[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	switch (i)
	{
		case 0:
			(this->*fun[0])();
			// fall through
		case 1:
			(this->*fun[1])();
			// fall through
		case 2:
			(this->*fun[2])();
			// fall through
		case 3:
			(this->*fun[3])();
			break ;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}