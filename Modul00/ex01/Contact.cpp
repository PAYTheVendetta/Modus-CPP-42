/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aialonso <aialonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/26 20:23:25 by aialonso          #+#    #+#             */
/*   Updated: 2026/04/27 13:51:57 by aialonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

std::string	Contact::GetNombre()
{
	return (this->Nombre);
}

std::string	Contact::GetApellido()
{
	return (this->Apellido);
}

std::string Contact::GetApodo()
{
	return (this->Apodo);
}

std::string Contact::GetSecreto()
{
	return (this->Secreto);
}

std::string Contact::GetNumber()
{
	return (this->Number);
}

void Contact::SetNombre(std::string Nombre)
{
	this->Nombre = Nombre;
}

void Contact::SetApellido(std::string Apellido)
{
	this->Apellido = Apellido;
}

void Contact::SetApodo(std::string Apodo)
{
	this->Apodo = Apodo;
}

void Contact::SetSecreto(std::string Secreto)
{
	this->Secreto = Secreto;
}

void Contact::SetNumber(std::string Number)
{
	this->Number = Number;
}
