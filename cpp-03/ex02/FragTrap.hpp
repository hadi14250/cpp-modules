/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaddou <hakaddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 15:18:23 by hakaddou          #+#    #+#             */
/*   Updated: 2023/03/13 15:23:36 by hakaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class FragTrap: public ClapTrap {
public:
	FragTrap();
	FragTrap(std::string name);
	~FragTrap();

	void highFivesGuys(void);
};

void kill_before_attacking(void);
void attack_then_kill(void);
void repair_after_killing(void);
void repair_then_kill(void);
void A_attacks_B_till_death(FragTrap& A, FragTrap& B);

#endif
