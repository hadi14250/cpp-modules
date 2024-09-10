/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaddou <hakaddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 04:16:01 by hakaddou          #+#    #+#             */
/*   Updated: 2023/03/16 22:21:58 by hakaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"

class Cure : public AMateria {
public:
	Cure();
	Cure(Cure const & other);
	Cure& operator=(const Cure& other);

    virtual ~Cure();

	virtual AMateria* clone() const;
	virtual void use(ICharacter& target);
};

#endif