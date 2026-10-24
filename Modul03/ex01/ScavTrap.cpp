/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aialonso <aialonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 19:48:02 by aialonso          #+#    #+#             */
/*   Updated: 2026/10/23 19:39:33 by aialonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
	_energyPoints = SCAV_ENERGY_POINTS;
	_attackDamage = SCAV_ATTACK_DAMAGE;
	_hitPoints = SCAV_HIT_POINTS;
	std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string const& name)
	: ClapTrap(name) {
	std::cout << "ScavTrap " << name << " constructor called" << std::endl;
	_energyPoints = SCAV_ENERGY_POINTS;
	_attackDamage = SCAV_ATTACK_DAMAGE;
	_hitPoints = SCAV_HIT_POINTS;
}

ScavTrap::ScavTrap(ScavTrap const& other)
	: ClapTrap(other) {
	std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap& ScavTrap::operator=(ScavTrap const& other) {
	std::cout << "ScavTrap copy assignment operator called" << std::endl;
	if (this != &other) {
		_hitPoints = other._hitPoints;
		_energyPoints = other._energyPoints;
		_attackDamage = other._attackDamage;
		_name = other._name;
	}
	return *this;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap " << _name << " destructor called" << std::endl;
}

void ScavTrap::attack(std::string const& target) {
	if (_energyPoints == 0 || _hitPoints == 0) {
		std::cout << "ScavTrap " << _name << " can't attack, it has no ";
		if (_hitPoints == 0)
			std::cout << "hit";
		else
			std::cout << "energy";
		std::cout << " points left!" << std::endl;
		return;
	}
	_energyPoints--;
	std::cout << "ScavTrap " << _name << " attacks " << target;
	std::cout << ", causing " << _attackDamage << " points of damage!"
			  << std::endl;
}

void ScavTrap::guardGate() {
	if (_hitPoints == 0) {
		std::cout << "ScavTrap " << _name << " can't guard the gate,";
		std::cout << " it has no hit points left!" << std::endl;
		return;
	}
	std::cout << "ScavTrap " << _name << " is now in Gate keeper mode\n";
}