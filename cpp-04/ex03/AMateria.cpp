/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaddou <hakaddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 03:02:58 by hakaddou          #+#    #+#             */
/*   Updated: 2023/03/16 22:29:04 by hakaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"

AMateria::AMateria(): _type("N/A") {
	std::cout	<< "AMateria Default Constructor called with type: " 
				<< _type << std::endl;
}

AMateria::AMateria(std::string const & type): _type(type) {
	std::cout	<< "AMateria Parameter Constructor called with type: " 
				<< _type << std::endl;
}

AMateria::AMateria(AMateria const & other) {
	std::cout	<< "AMateria Copy Constructor called with type: " 
				<< _type << std::endl;
	*this = other;
}

AMateria& AMateria::operator=(const AMateria& other) {
	std::cout	<< "Assignment Operator called for base class AMateria with type: "
				<< _type << std::endl;
	this->_type = other._type;
	return (*this);
}

AMateria::~AMateria() {
	std::cout	<< "AMateria Destructor called with type: " 
				<< _type << std::endl;
}

std::string const & AMateria::getType() const {
	return (_type);
}

void AMateria::use(ICharacter& target) {
	(void) target;
}