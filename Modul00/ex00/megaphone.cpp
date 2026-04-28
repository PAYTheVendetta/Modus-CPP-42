/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aialonso <aialonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/26 18:30:48 by aialonso          #+#    #+#             */
/*   Updated: 2026/04/26 18:52:45 by aialonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int main(int argc, char **argv)
{
	int n;
	int i;

	i = 1;
	if (argc <= 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (1);
	}
	while (argv[i])
	{
		n = 0;
		while (argv[i][n])
		{
			std::cout << (char)toupper(argv[i][n]);
			n++;
		}
		i++;
	}
	std::cout << std::endl;
	return (0);
}
