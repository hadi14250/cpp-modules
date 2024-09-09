/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TestFuns.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaddou <hakaddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 12:31:04 by hakaddou          #+#    #+#             */
/*   Updated: 2023/03/13 15:13:59 by hakaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

void attack_then_kill(void) {
	ScavTrap hadi("Hadi");
	hadi.attack("42");
	hadi.takeDamage(100);
	hadi.attack("42");
	hadi.beRepaired(1000);
	hadi.attack("42");
}

void kill_before_attacking(void) {
	ScavTrap hadi("Hadi");
	hadi.takeDamage(100);
	hadi.attack("42");
}

void repair_after_killing(void) {
	ScavTrap hadi("Hadi");
	hadi.beRepaired(1000);
	hadi.attack("42");
}

void repair_then_kill(void) {
	ScavTrap hadi("Hadi");
	hadi.beRepaired(1000);
	hadi.takeDamage(520);
	hadi.attack("42");
	hadi.takeDamage(520);
	hadi.attack("42");
}

void A_attacks_B_till_death(ScavTrap& A, ScavTrap& B) {
	// A.setDamage(4);
	A.attack("B");
	B.takeDamage(A.getDamage());

	A.attack("B");
	B.takeDamage(A.getDamage());

	A.attack("B");
	B.takeDamage(A.getDamage());

	A.attack("B");
	B.takeDamage(A.getDamage());
}