/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaddou <hakaddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 04:31:54 by hakaddou          #+#    #+#             */
/*   Updated: 2023/03/16 22:11:33 by hakaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>
#include "AMateria.hpp"
#include "ICharacter.hpp"

// class AMateria;

class Character : public ICharacter {
private:
    std::string _name;
    AMateria    *_inventory[4];
	bool		slotUnequiped[4];
public:
	Character();
    Character(std::string const &name);
    Character(Character const &other);
    Character& operator=(Character const &other);
    ~Character();

    std::string const & getName() const;
    void equip(AMateria* m);
    void unequip(int idx);
    void use(int idx, ICharacter& target);
};

#endif