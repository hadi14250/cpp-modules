/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaddou <hakaddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 17:28:19 by hakaddou          #+#    #+#             */
/*   Updated: 2023/03/10 19:16:48 by hakaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanB {
private:
	std::string name;
	Weapon *weapon;
public:
	HumanB(std::string name_i);
	void attack();
	void setWeapon(Weapon &weapon_i);
};

#endif