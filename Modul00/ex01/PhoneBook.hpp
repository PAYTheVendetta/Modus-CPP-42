/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aialonso <aialonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/26 21:23:04 by aialonso          #+#    #+#             */
/*   Updated: 2026/04/28 12:03:33 by aialonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <iomanip>
#include <sstream>
#include "Contact.hpp"

class PhoneBook
{
	private:
		int			NumCont;
		Contact		Contacts[8];
		std::string AskField(std::string prompt);
		void		PrintContac();
	public:
		void 		AddBook();
		void		GetBook();
					PhoneBook();
};

#endif