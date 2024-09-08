/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaddou <hakaddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 17:28:11 by hakaddou          #+#    #+#             */
/*   Updated: 2023/03/10 19:14:05 by hakaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name_i, Weapon &weapon_i) {
	name = name_i;
	weapon = &weapon_i;
}

void HumanA::attack() {
	std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}
