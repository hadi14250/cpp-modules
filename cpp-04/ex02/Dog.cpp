/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaddou <hakaddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 20:47:54 by hakaddou          #+#    #+#             */
/*   Updated: 2023/03/15 21:58:43 by hakaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog"), _brain(NULL) {
	std::cout	<< "Default Constructor called for derived class Dog with type: "
				<< _type << std::endl;
	_brain = new Brain;
}

Dog::~Dog() {
	if (_brain != NULL)
		delete _brain;
	_brain = NULL;
	std::cout	<< "Destructor called for derived class Dog with type: "
				<< _type << std::endl;
}

Dog::Dog(const Dog& other): Animal("Dog") {
	std::cout	<< "Copy Constructor called for derived class Dog with type: "
				<< _type << std::endl;
	this->_brain = new Brain;
	for (int i = 0; i < 100; i++)
		this->_brain->set_idea(i, other._brain->get_idea(i));
}

Dog& Dog::operator=(const Dog& other) {
	std::cout	<< "Assignment Operator called for derived class Dog with type: "
				<< _type << std::endl;
	if (this != &other && this->_brain != NULL) {
		delete this->_brain;
		this->_brain = NULL;
	}
	if (this != &other) {
		this->_brain = new Brain;
		for (int i = 0; i < 100; i++)
			this->_brain->set_idea(i, other._brain->get_idea(i));
	}
	return (*this);
}


void Dog::makeSound() const {
	std::cout << "Animal with the type: " << _type << " is barking!" << std::endl;
}

const std::string Dog::get_b_idea(int i) {
	return (_brain->get_idea(i));
}

void Dog::set_b_idea(int i, std::string idea) {
	_brain->set_idea(i, idea);
}
