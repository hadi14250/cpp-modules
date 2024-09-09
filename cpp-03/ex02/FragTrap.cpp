/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaddou <hakaddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 15:23:53 by hakaddou          #+#    #+#             */
/*   Updated: 2023/03/13 15:37:30 by hakaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap() {
	std::cout << "FragTrap Default Constructor for " << _name << " Called" << std::endl;
}

FragTrap::FragTrap(std::string name): ClapTrap(name){
	std::cout << "FragTrap Parameter Constructor for " << _name << " Called" << std::endl;
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
}

FragTrap::~FragTrap(void) {
	std::cout << "FragTrap Destructor for " << _name << " Called" << std::endl;
}

void FragTrap::highFivesGuys() {
	if (_hitPoints <= 0 || _energyPoints <= 0) {
		std::cout << "FragTrap is dead or has no energy" << std::endl;
		return ;
	}
	std::cout << "FragTrap " << _name << " demands a highfive!!" << std::endl;
}