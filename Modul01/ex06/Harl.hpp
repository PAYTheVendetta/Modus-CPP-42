/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aialonso <aialonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/14 19:29:54 by aialonso          #+#    #+#             */
/*   Updated: 2026/06/14 19:29:56 by aialonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once
#ifndef HARL_H
# define HARL_H

#include <string>
#include <fstream>
#include <iostream>

class Harl
{
private:
	void	debug();
	void	info();
	void	warning();
	void	error();
public:
	void complain(std::string level);
};

#endif