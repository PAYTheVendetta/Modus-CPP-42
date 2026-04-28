/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aialonso <aialonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/26 20:23:25 by aialonso          #+#    #+#             */
/*   Updated: 2026/04/27 13:24:09 by aialonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <string>

class Contact
{
	private:
		std::string	Nombre;
		std::string	Apellido;
		std::string	Apodo;
		std::string	Secreto;
		std::string	Number;
	public:
		std::string GetNombre();
		std::string GetApellido();
		std::string GetApodo();
		std::string GetSecreto();
		std::string GetNumber();
		void SetNombre(std::string Nombre);
		void SetApellido(std::string Apellido);
		void SetApodo(std::string Apodo);
		void SetSecreto(std::string Secreto);
		void SetNumber(std::string Number);
};

#endif
