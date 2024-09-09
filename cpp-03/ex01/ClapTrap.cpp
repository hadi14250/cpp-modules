/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaddou <hakaddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 10:56:35 by hakaddou          #+#    #+#             */
/*   Updated: 2023/03/13 14:32:28 by hakaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {
	_name = "n/a";
	std::cout << "ClapTrap Default Constructor for " << _name << " Called" << std::endl;
}

ClapTrap::ClapTrap(std::string name): _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
	std::cout << "ClapTrap Parameter Constructor for " << _name << " Called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other){
	std::cout << "ClapTrap Copy Constructor Called" << std::endl;
	this->_name = other._name;
	this->_hitPoints = other._hitPoints;
	this->_energyPoints = other._energyPoints;
	this->_attackDamage = other._attackDamage;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other) {
	std::cout << "Clap Trap Copy Assignment Operator Called" << std::endl;
	if (this != &other) {
		this->_name = other._name;
		this->_hitPoints = other._hitPoints;
		this->_energyPoints = other._energyPoints;
		this->_attackDamage = other._attackDamage;
	}
	return (*this);
}

ClapTrap::~ClapTrap(void) {
	std::cout << "ClapTrap Destructor for " << _name << " Called" << std::endl;
}

void ClapTrap::attack(const std::string& target) {
	
	if (_energyPoints <= 0)
    {
        std::cout << "ClapTrap " << _name << " has no energy left to attack :(" << std::endl;
        return;
    }
	if (_hitPoints <= 0)
    {
        std::cout << "ClapTrap " << _name << " can't attack because it's dead :(" << std::endl;
        return;
    }
	std::cout	<< "ClapTrap " << _name <<  " attacked " << target << "!! And caused "
				<< _attackDamage << " points of damage!" << std::endl;
	
	--_energyPoints;
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (_hitPoints <= 0) {
		std::cout << "ClapTrap " << _name << " is already dead" << std::endl;
		return ;
	}
	std::cout << "Clap Trap " << _name << " took " << amount << " points of damage!" << std::endl;

	_hitPoints -= amount;
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (_energyPoints <= 0) {
		std::cout << "ClapTrap " << _name << " has no energy left to be repaired :(" << std::endl;
        return;
	}
	if (_hitPoints <= 0)
    {
        std::cout << "ClapTrap " << _name << " can't be repaired because it's dead :(" << std::endl;
        return;
    }
	std::cout	<< "Clap Trap " << _name << " got repaired with " 
				<< amount << " hitpoints!" << std::endl;
	--_energyPoints;
	_hitPoints += amount;
}

void ClapTrap::setDamage(unsigned int amout) {
	_attackDamage = amout;
}

int ClapTrap::getDamage(void) const {
	return (_attackDamage);
	}