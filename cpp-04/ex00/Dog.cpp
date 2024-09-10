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

Dog::Dog() : Animal("Dog") {
	std::cout	<< "Default Constructor called for derived class Dog with type: "
				<< _type << std::endl;
}

Dog::Dog(const Dog& other): Animal("Dog") {
	std::cout	<< "Copy Constructor called for derived class Dog with type: "
				<< _type << std::endl;
	*this = other;
}

Dog& Dog::operator=(const Dog& other) {
	std::cout	<< "Assignment Operator called for derived class Dog with type: "
				<< _type << std::endl;
	if (this != &other)
		this->_type = other._type;
	return (*this);
}

Dog::~Dog() {
	std::cout	<< "Destructor called for derived class Dog with type: "
				<< _type << std::endl;
}

void Dog::makeSound() const {
	std::cout << "Animal with the type: " << _type << " is barking!" << std::endl;
}