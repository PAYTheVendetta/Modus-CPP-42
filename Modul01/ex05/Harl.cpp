/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aialonso <aialonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/13 19:37:18 by aialonso          #+#    #+#             */
/*   Updated: 2026/06/14 19:23:37 by aialonso         ###   ########.fr       */
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
	if (i == 4)
		return ;
	void (Harl::*fun[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	(this->*fun[i])();
}