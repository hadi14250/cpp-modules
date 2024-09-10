/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaddou <hakaddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 19:44:17 by hakaddou          #+#    #+#             */
/*   Updated: 2023/03/15 21:59:39 by hakaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(): _type("someAnimal") {
	std::cout	<< "Default Constructor called for base class Animal with type: "
				<< _type << std::endl;
}

Animal::Animal(std::string type): _type(type) {
	std::cout	<< "Parameter Constructor called for base class Animal with type: "
				<< _type << std::endl;
}

Animal::Animal(const Animal& other) {
	std::cout	<< "Copy Constructor called for base class Animal with type: "
				<< _type << std::endl;
	_type = other._type;
}

Animal& Animal::operator=(const Animal& other) {
	std::cout	<< "Assignment Operator called for base class Animal with type: "
				<< _type << std::endl;
	if (this != &other)
		this->_type = other._type;
	return (*this);
}

Animal::~Animal() {
	std::cout	<< "Destructor called for base class Animal with type: "
				<< _type << std::endl;
}

void Animal::makeSound() const {
	std::cout << "Animal with the type: " << _type << " is making some noise" << std::endl;
}

std::string Animal::getType() const {
	return (_type);
}