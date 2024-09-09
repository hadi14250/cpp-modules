/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaddou <hakaddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 14:43:44 by hakaddou          #+#    #+#             */
/*   Updated: 2023/03/13 15:30:26 by hakaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap() {
	std::cout << "ScavTrap Default Constructor for " << _name << " Called" << std::endl;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name){
	std::cout << "ScavTrap Parameter Constructor for " << _name << " Called" << std::endl;
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
}

ScavTrap::~ScavTrap(void) {
	std::cout << "ScavTrap Destructor for " << _name << " Called" << std::endl;
}

void ScavTrap::attack(const std::string& target) {
	if (_energyPoints <= 0)
    {
        std::cout << "ScavTrap " << _name << " has no energy left to attack :(" << std::endl;
        return;
    }
	if (_hitPoints <= 0)
    {
        std::cout << "ScavTrap " << _name << " can't attack because it's dead :(" << std::endl;
        return;
    }
	std::cout	<< "ScavTrap " << _name <<  " attacked " << target << "!! And caused "
				<< _attackDamage << " points of damage!" << std::endl;
	
	--_energyPoints;
}

void ScavTrap::guardGate() {
	std::cout << "ScavTrap " << _name << " is now in Gate keeper mode" << std::endl;
}
