/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aialonso <aialonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 19:17:35 by aialonso          #+#    #+#             */
/*   Updated: 2026/10/22 19:50:02 by aialonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <climits>

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
	if (_energyPoints == 0 || _hitPoints == 0) {
		std::cout << "ClapTrap " << _name << " can't attack, it has no ";
		if (_hitPoints == 0)
			std::cout << "hit";
		else
			std::cout << "energy";
		std::cout << " points left!" << std::endl;
		return;
	}
	_energyPoints--;
	std::cout << "ClapTrap " << _name << " attacks " << target;
	std::cout << ", causing " << _attackDamage << " points of damage!"
			  << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
	std::cout << "ClapTrap " << _name;
	if (_hitPoints == 0) {
		std::cout << " is already dead!" << std::endl;
		return;
	}
	std::cout << " takes " << amount << " points of damage ";
	if (amount >= _hitPoints)
		std::cout << "and dies!" << std::endl;
	else
		std::cout << (_hitPoints - amount) << " hit points left!" << std::endl;
	if (amount <= _hitPoints)
		_hitPoints -= amount;
	else
		_hitPoints = 0;
}

void ClapTrap::beRepaired(unsigned int amount) {
	std::cout << "ClapTrap " << _name;
	if (_hitPoints == 0 || _energyPoints == 0) {
		std::cout << " can't repair, it has no ";
		if (_hitPoints == 0)
			std::cout << "hit points left!" << std::endl;
		else
			std::cout << "energy points left!" << std::endl;
		return;
	}
	_energyPoints--;
	if (amount > UINT_MAX - _hitPoints)
		_hitPoints = UINT_MAX;
	else
		_hitPoints += amount;
	std::cout << " repairs itself for " << amount << " hit points, ";
	std::cout << _hitPoints << " hit points now!" << std::endl;
}