/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaddou <hakaddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 21:21:55 by hakaddou          #+#    #+#             */
/*   Updated: 2023/03/15 21:59:39 by hakaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(): _type("someWrongAnimal") {
	std::cout	<< "Default Constructor called for base class WrongAnimal with type: "
				<< _type << std::endl;
}

WrongAnimal::WrongAnimal(std::string type): _type(type) {
	std::cout	<< "Parameter Constructor called for base class WrongAnimal with type: "
				<< _type << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other) {
	std::cout	<< "Copy Constructor called for base class WrongAnimal with type: "
				<< _type << std::endl;
	_type = other._type;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other) {
	std::cout	<< "Assignment Operator called for base class WrongAnimal with type: "
				<< _type << std::endl;
	if (this != &other)
		this->_type = other._type;
	return (*this);
}

WrongAnimal::~WrongAnimal() {
	std::cout	<< "Destructor called for base class WrongAnimal with type: "
				<< _type << std::endl;
}

void WrongAnimal::makeSound() const {
	std::cout << "WrongAnimal with the type: " << _type << " is making some wrong noise" << std::endl;
}

std::string WrongAnimal::getType() const {
	return (_type);
}