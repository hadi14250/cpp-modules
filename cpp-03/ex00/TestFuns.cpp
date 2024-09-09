/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TestFuns.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaddou <hakaddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 12:31:04 by hakaddou          #+#    #+#             */
/*   Updated: 2023/03/13 13:11:07 by hakaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

void attack_then_kill(void) {
	ClapTrap hadi("Hadi");
	hadi.attack("42");
	hadi.takeDamage(100);
	hadi.attack("42");
	hadi.beRepaired(1000);
	hadi.attack("42");
}

void kill_before_attacking(void) {
	ClapTrap hadi("Hadi");
	hadi.takeDamage(100);
	hadi.attack("42");
}

void repair_after_killing(void) {
	ClapTrap hadi("Hadi");
	hadi.beRepaired(1000);
	hadi.attack("42");
}

void repair_then_kill(void) {
	ClapTrap hadi("Hadi");
	hadi.beRepaired(1000);
	hadi.takeDamage(520);
	hadi.attack("42");
	hadi.takeDamage(520);
	hadi.attack("42");
}

void A_attacks_B_till_death(ClapTrap& A, ClapTrap& B) {
	A.setDamage(4);
	A.attack("B");
	B.takeDamage(A.getDamage());

	A.attack("B");
	B.takeDamage(A.getDamage());

	A.attack("B");
	B.takeDamage(A.getDamage());

	A.attack("B");
	B.takeDamage(A.getDamage());
}