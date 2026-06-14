/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aialonso <aialonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/13 18:29:09 by aialonso          #+#    #+#             */
/*   Updated: 2026/06/13 19:34:59 by aialonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <fstream>
#include <iostream>

int main(int argc, char const *argv[])
{
	std::string line;
	size_t		found = 0;
	size_t		pos = 0;

	if (argc != 4)
		return (1);
	std::ifstream infile(argv[1]);
	if (!infile.is_open())
		return (1);
	std::ofstream outfile((std::string(argv[1]) + ".replace").c_str());
	while (std::getline(infile, line))
	{
		while (1)
		{
			found = line.find(argv[2], pos);
			if (found == std::string::npos)
				break;
			outfile << line.substr(pos, (found - pos));
			outfile << argv[3];
			pos = found + std::string(argv[2]).length();
		}
		outfile << line.substr(pos);
		outfile << std::endl;
		found = 0;
		pos = 0;
	}
	return (0);
}
