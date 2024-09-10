/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaddou <hakaddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 20:54:31 by hakaddou          #+#    #+#             */
/*   Updated: 2023/03/15 21:58:43 by hakaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat"), _brain(NULL) {
	std::cout	<< "Default Constructor called for derived class Cat with type: "
				<< _type << std::endl;
	_brain = new Brain;
}

Cat::~Cat() {
	if (_brain != NULL)
		delete _brain;
	_brain = NULL;
	std::cout	<< "Destructor called for derived class Cat with type: "
				<< _type << std::endl;
}

Cat::Cat(const Cat& other): Animal("Cat") {
	std::cout	<< "Copy Constructor called for derived class Cat with type: "
				<< _type << std::endl;
	this->_brain = new Brain;
	for (int i = 0; i < 100; i++)
		this->_brain->set_idea(i, other._brain->get_idea(i));
}

Cat& Cat::operator=(const Cat& other) {
	std::cout	<< "Assignment Operator called for derived class Cat with type: "
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

void Cat::makeSound() const {
	std::cout << "Animal with the type: " << _type << " is meowing!" << std::endl;
}

const std::string Cat::get_b_idea(int i) {
	return (_brain->get_idea(i));
}

void Cat::set_b_idea(int i, std::string idea) {
	_brain->set_idea(i, idea);
}
