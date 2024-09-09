/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaddou <hakaddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 14:19:33 by hakaddou          #+#    #+#             */
/*   Updated: 2023/03/13 15:13:06 by hakaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap {
public:
	ScavTrap();
	ScavTrap(std::string name);
	~ScavTrap();

	void attack(const std::string& target);
	void guardGate();
};

void kill_before_attacking(void);
void attack_then_kill(void);
void repair_after_killing(void);
void repair_then_kill(void);
void A_attacks_B_till_death(ScavTrap& A, ScavTrap& B);

#endif