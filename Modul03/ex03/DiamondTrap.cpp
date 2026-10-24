/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aialonso <aialonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/24 18:37:22 by aialonso          #+#    #+#             */
/*   Updated: 2026/10/24 19:27:02 by aialonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
	: ClapTrap(DEFAULT_NAME "_clap_name"),
	  _name(DEFAULT_NAME) {
	_energyPoints = SCAV_ENERGY_POINTS;
	_attackDamage = FRAG_ATTACK_DAMAGE;
	_hitPoints = FRAG_HIT_POINTS;
	std::cout << "DiamondTrap default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string const& name)
	: ClapTrap(name + "_clap_name"),
	  ScavTrap(name),
	  FragTrap(name),
	  _name(name) {
	_energyPoints = SCAV_ENERGY_POINTS;
	_attackDamage = FRAG_ATTACK_DAMAGE;
	_hitPoints = FRAG_HIT_POINTS;
	std::cout << "DiamondTrap " << name << " constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const& other)
	: ClapTrap(other),
	  ScavTrap(other),
	  FragTrap(other),
	  _name(other._name) {
	std::cout << "DiamondTrap copy constructor called" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(DiamondTrap const& other) {
	std::cout << "DiamondTrap copy assignment operator called" << std::endl;
	if (this != &other) {
		ClapTrap::operator=(other);
		_name = other._name;
	}
	return *this;
}

DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap " << _name << " destructor called" << std::endl;
}

void DiamondTrap::attack(std::string const& target) {
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI() {
	if (_hitPoints == 0) {
		std::cout << "DiamondTrap " << _name << " can't tell who it is,";
		std::cout << " it has no hit points left!" << std::endl;
		return;
	}
	std::cout << "DiamondTrap name: " << _name << ", ";
	std::cout << "ClapTrap name: " << ClapTrap::_name;
	std::cout << std::endl;
}