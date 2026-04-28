/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aialonso <aialonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 13:05:44 by aialonso          #+#    #+#             */
/*   Updated: 2026/04/27 13:15:10 by aialonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(void)
{
	PhoneBook Book;
	std::string Comand;
	
	while (1)
	{
		std::cout << "Comando" << std::endl;
		std::getline(std::cin, Comand);
		if (Comand == "ADD")
			Book.AddBook();
		if (Comand == "SEARCH")
			Book.GetBook();
		if (Comand == "EXIT")
			break ;
	}
	return 0;
}
