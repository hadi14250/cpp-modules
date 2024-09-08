/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaddou <hakaddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 20:41:04 by hakaddou          #+#    #+#             */
/*   Updated: 2023/03/10 15:21:57 by hakaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() {
}

Zombie::~Zombie(){
	std::cout << name << " has been destroyed" << std::endl;
};

void Zombie::setName(std::string name_i) {
	name = name_i;
}

std::string Zombie::getName(void) {
	return (name);
}

void Zombie::announce(void) {
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie* newZombie(std::string name) {
	Zombie *newZomb = new Zombie;
	newZomb->setName(name);
	return (newZomb);
}

void randomChump(std::string name) {
    Zombie newZomb;
	newZomb.setName(name);
    newZomb.announce();
}
