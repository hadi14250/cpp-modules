/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaddou <hakaddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 04:38:56 by hakaddou          #+#    #+#             */
/*   Updated: 2023/03/17 02:41:23 by hakaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(): _name("N/A") {
	std::cout	<< "Character Default Constructor called with name: " 
				<< _name << std::endl;
}

Character::Character(std::string const &name): _name(name) {
	std::cout	<< "Character Parameter Constructor called with name: " 
				<< _name << std::endl;
		for (int i = 0; i < 4; i++) {
			_inventory[i] = NULL;
			slotUnequiped[i] = false;
		}
}

Character::Character(Character const &other) {
	std::cout	<< "Character Copy Constructor called with name: " 
				<< _name << std::endl;
		this->_name = other._name;
		for (int i = 0; i < 4; i++)
			this->_inventory[i] = other._inventory[i];
}

Character& Character::operator=(Character const &other) {
	std::cout	<< "Character Copy Assignemnt Operator called with name: " 
				<< _name << std::endl;
		if (this == &other)
			return (*this);
		this->_name = other._name;
		for (int i = 0; i < 4; i++)
		{
			this->_inventory[i] = other._inventory[i];
			this->slotUnequiped[i] = other.slotUnequiped[i];
		}
		return(*this);
}

Character::~Character() {
	std::cout	<< "Character Destructor called with name: " 
				<< _name << std::endl;
    for (int i = 0; i < 4; i++)
        if (_inventory[i] != NULL)
            delete this->_inventory[i];			
}

std::string const & Character::getName() const {
	return (_name);
}

void Character::equip(AMateria* m) {
	int i;
	for(i = 0; i < 4; i++) {
		if (_inventory[i] == NULL && slotUnequiped[i] == false)  {
			_inventory[i] = m;
			 break ;
		}
	}
	if (i <= 3) {
		std::cout	<< _name << " equipped "
			<< m->getType() << " successfully" << std::endl;
	}
	else {
		std::cout	<< _name << " can't equip "
			<< m->getType() << std::endl;
	}
}

void Character::unequip(int idx) {
	if (idx < 0 || idx > 3) {
		std::cout << "Materia is out of this inventory" << std::endl;
		return ;
	}
	if (slotUnequiped[idx] == false && _inventory[idx] != NULL) {
		slotUnequiped[idx] = true;
		std::cout << _name << " unequiped "
					<< _inventory[idx]->getType() << std::endl;
		return ;
	}
	std::cout << _name << " can't unequiped "
			<< _inventory[idx]->getType() << std::endl;
}

void Character::use(int idx, ICharacter& target) {
	if (_inventory[idx] != NULL && slotUnequiped[idx] == false) {
        _inventory[idx]->use(target);
	}
}