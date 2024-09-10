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

Cat::Cat() : Animal("Cat") {
	std::cout	<< "Default Constructor called for derived class Cat with type: "
				<< _type << std::endl;
}

Cat::~Cat() {
	std::cout	<< "Destructor called for derived class Cat with type: "
				<< _type << std::endl;
}

Cat::Cat(const Cat& other): Animal("cat") {
	std::cout	<< "Copy Constructor called for derived class Cat with type: "
				<< _type << std::endl;
	*this = other;
}

Cat& Cat::operator=(const Cat& other) {
	std::cout	<< "Assignment Operator called for derived class Cat with type: "
				<< _type << std::endl;
	if (this != &other)
		this->_type = other._type;
	return (*this);
}

void Cat::makeSound() const {
	std::cout << "Animal with the type: " << _type << " is meowing!" << std::endl;
}
