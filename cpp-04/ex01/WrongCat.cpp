/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaddou <hakaddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 21:24:31 by hakaddou          #+#    #+#             */
/*   Updated: 2023/03/15 21:59:39 by hakaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat") {
	std::cout	<< "Default Constructor called for derived class WrongCat with type: "
				<< _type << std::endl;
}

WrongCat::WrongCat(const WrongCat& other): WrongAnimal() {
	std::cout	<< "Copy Constructor called for derived class WrongCat with type: "
				<< _type << std::endl;
	*this = other;
}

WrongCat& WrongCat::operator=(const WrongCat& other) {
	std::cout	<< "Assignment Operator called for derived class WrongCat with type: "
				<< _type << std::endl;
	if (this != &other)
		this->_type = other._type;
	return (*this);
}

WrongCat::~WrongCat() {
	std::cout	<< "Destructor called for derived class WrongCat with type: "
				<< _type << std::endl;
}

void WrongCat::makeSound() const {
	std::cout << "WrongAnimal with the type: " << _type << " is meowing!" << std::endl;
}
