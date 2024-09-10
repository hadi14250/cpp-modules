/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaddou <hakaddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 02:33:59 by hakaddou          #+#    #+#             */
/*   Updated: 2023/03/16 22:22:07 by hakaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"

class AMateria
{
protected:
    std::string _type;
public:
	AMateria();
	AMateria(std::string const & type);
	AMateria(AMateria const & other);
	AMateria& operator=(const AMateria& other);

    virtual ~AMateria();

	std::string const & getType() const;
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};

#endif