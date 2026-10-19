/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aialonso <aialonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 14:45:20 by aialonso          #+#    #+#             */
/*   Updated: 2026/10/19 17:01:02 by aialonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
	: _name(DEFAULT_NAME),
	  _hitPoints(HIT_POINTS),
	  _energyPoints(ENERGY_POINTS),
	  _attackDamage(ATTACK_DAMAGE) {
	std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string const& name)
	: _name(name),
	  _hitPoints(HIT_POINTS),
	  _energyPoints(ENERGY_POINTS),
	  _attackDamage(ATTACK_DAMAGE) {
	std::cout << "ClapTrap " << _name << " constructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const& other)
	: _name(other._name),
	  _hitPoints(other._hitPoints),
	  _energyPoints(other._energyPoints),
	  _attackDamage(other._attackDamage) {
	std::cout << "ClapTrap copy constructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=(ClapTrap const& other) {
	std::cout << "ClapTrap copy assignment operator called" << std::endl;
	if (this != &other) {
		_name = other._name;
		_hitPoints = other._hitPoints;
		_energyPoints = other._energyPoints;
		_attackDamage = other._attackDamage;
	}
	return *this;
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap " << _name << " destructor called" << std::endl;
}

void ClapTrap::attack(std::string const& target) {
	std::cout << "ClapTrap " << _name << " attacks " << target;
	std::cout << " causing 1 points of damage!" << std::endl;
}
