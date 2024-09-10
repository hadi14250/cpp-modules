/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaddou <hakaddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 03:39:22 by hakaddou          #+#    #+#             */
/*   Updated: 2023/03/16 22:22:02 by hakaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"

class Ice : public AMateria {
public:
	Ice();
	Ice(Ice const & other);
	Ice& operator=(const Ice& other);

    virtual ~Ice();

	virtual AMateria* clone() const;
	virtual void use(ICharacter& target);
};


#endif