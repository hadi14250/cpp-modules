/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaddou <hakaddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 11:07:11 by hakaddou          #+#    #+#             */
/*   Updated: 2023/03/13 13:12:46 by hakaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main() {

 	attack_then_kill();
	std::cout << std::endl;
	
 	kill_before_attacking();
	std::cout << std::endl;
	
 	repair_after_killing();
	std::cout << std::endl;
	
 	repair_then_kill();

	std::cout << std::endl << std::endl;
	ClapTrap A("A");
	ClapTrap B("B");
	A_attacks_B_till_death(A, B);
}