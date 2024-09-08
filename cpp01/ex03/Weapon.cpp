/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaddou <hakaddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 17:28:24 by hakaddou          #+#    #+#             */
/*   Updated: 2023/03/10 17:52:03 by hakaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type_i) {
	type = type_i;
}

const std::string Weapon::getType() {
	return type;	
}

void Weapon::setType(std::string type_i) {
	type = type_i;
}