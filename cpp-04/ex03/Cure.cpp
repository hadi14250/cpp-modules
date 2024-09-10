/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaddou <hakaddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 04:16:32 by hakaddou          #+#    #+#             */
/*   Updated: 2023/03/16 17:43:19 by hakaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(): AMateria("cure") {
	std::cout	<< "Cure Default Constructor called with type: " 
				<< _type << std::endl;
}

Cure::Cure(Cure const & other): AMateria("cure") {
	std::cout	<< "Cure Copy Constructor called with type: " 
				<< _type << std::endl;
	*this = other;
}

Cure& Cure::operator=(const Cure& other) {
	std::cout	<< "Assignment Operator called for base class Cure with type: "
				<< _type << std::endl;
	(void) other;
	return (*this);
}

Cure::~Cure() {
	std::cout	<< "Cure Destructor called with type: " 
				<< _type << std::endl;
}

AMateria* Cure::clone() const {
    return (new Cure(*this));
}

void    Cure::use(ICharacter& target)
{
	std::cout	<< "* heals " << target.getName()
				<< "'s wounds *" << std::endl;
}
