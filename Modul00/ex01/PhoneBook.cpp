/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aialonso <aialonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/26 21:23:01 by aialonso          #+#    #+#             */
/*   Updated: 2026/04/28 12:11:46 by aialonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
    NumCont = 0;
}

std::string PhoneBook::AskField(std::string prompt)
{
    std::string input;
    do {
        std::cout << prompt;
        std::getline(std::cin, input);
    } while (input.empty());
    return input;
}

void 	PhoneBook::AddBook()
{	
	Contacts[NumCont].SetNombre(AskField("Nombre: "));
	Contacts[NumCont].SetApellido(AskField("Apelldo: "));
	Contacts[NumCont].SetApodo(AskField("Apodo: "));
	Contacts[NumCont].SetSecreto(AskField("Secreto: "));
	Contacts[NumCont].SetNumber(AskField("Numero: "));
	NumCont = (NumCont + 1) % 8;
}

void		PhoneBook::PrintContac()
{
	int n;
	
	std::stringstream ss(AskField("where index: "));
	if (!(ss >> n) || (n < 0 || n > NumCont - 1))
	{
		std::cout << "indice no valido" << std::endl;
		return ;
	}
	std::cout << "Nombre: " << Contacts[n].GetNombre() << std::endl;
	std::cout << "Apellido: " << Contacts[n].GetApellido() << std::endl;
	std::cout << "Apodo: " << Contacts[n].GetApodo() << std::endl;
	std::cout << "Secreto: " << Contacts[n].GetSecreto() << std::endl;
	std::cout << "Numero: " << Contacts[n].GetNumber() << std::endl;
}

void	PhoneBook::GetBook()
{
	int n;
	std::string data;

	n = 0;
	while(n < NumCont)
	{
		std::cout << std::setw(10) << std::right << n << "|";
		data = Contacts[n].GetNombre();
		if (data.length() > 10)
			data = data.substr(0, 9) + ".";
		std::cout << std::setw(10) << std::right << data << "|";
		data = Contacts[n].GetApellido();
		if (data.length() > 10)
			data = data.substr(0, 9) + ".";
		std::cout << std::setw(10) << std::right << data << "|";
		data = Contacts[n].GetApodo();
		if (data.length() > 10)
			data = data.substr(0, 9) + ".";
		std::cout << std::setw(10) << std::right << data << "|";
		std::cout << std::endl;
		n++;
	}
	PhoneBook::PrintContac();
}
