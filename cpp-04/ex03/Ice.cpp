/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaddou <hakaddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 03:39:06 by hakaddou          #+#    #+#             */
/*   Updated: 2023/03/16 22:20:17 by hakaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(): AMateria("ice") {
	std::cout	<< "Ice Default Constructor called with type: " 
				<< _type << std::endl;
}

Ice::Ice(Ice const & other): AMateria("ice") {
	std::cout	<< "Ice Copy Constructor called with type: " 
				<< _type << std::endl;
	*this = other;
}

Ice& Ice::operator=(const Ice& other) {
	std::cout	<< "Assignment Operator called for base class Ice with type: "
				<< _type << std::endl;
	(void) other;
	return (*this);
}

Ice::~Ice() {
	std::cout	<< "Ice Destructor called with type: " 
				<< _type << std::endl;
}

AMateria* Ice::clone() const {
    return (new Ice(*this));
}

void    Ice::use(ICharacter& target)
{
    std::cout	<< "* shoots an ice bolt at "
				<< target.getName() << " *" << std::endl;
}
