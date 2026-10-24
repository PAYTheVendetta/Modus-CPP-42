/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aialonso <aialonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 19:46:56 by aialonso          #+#    #+#             */
/*   Updated: 2026/10/23 19:54:41 by aialonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() {
	_energyPoints = FRAG_ENERGY_POINTS;
	_attackDamage = FRAG_ATTACK_DAMAGE;
	_hitPoints = FRAG_HIT_POINTS;
	std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string const& name)
	: ClapTrap(name) {
	std::cout << "FragTrap " << name << " constructor called" << std::endl;
	_energyPoints = FRAG_ENERGY_POINTS;
	_attackDamage = FRAG_ATTACK_DAMAGE;
	_hitPoints = FRAG_HIT_POINTS;
}

FragTrap::FragTrap(FragTrap const& other)
	: ClapTrap(other) {
	std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap& FragTrap::operator=(FragTrap const& other) {
	std::cout << "FragTrap copy assignment operator called" << std::endl;
	if (this != &other) {
		_hitPoints = other._hitPoints;
		_energyPoints = other._energyPoints;
		_attackDamage = other._attackDamage;
		_name = other._name;
	}
	return *this;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap " << _name << " destructor called" << std::endl;
}

void FragTrap::highFivesGuys() {
	if (_hitPoints == 0) {
		std::cout << "FragTrap " << _name << " can't high five,";
		std::cout << " it has no hit points left!" << std::endl;
		return;
	}
	std::cout << "FragTrap " << _name << " requests a high five!\n";
}
