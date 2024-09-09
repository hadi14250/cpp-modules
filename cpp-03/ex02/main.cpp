/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaddou <hakaddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 11:07:11 by hakaddou          #+#    #+#             */
/*   Updated: 2023/03/13 15:42:11 by hakaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main() {

 	attack_then_kill();
	std::cout << std::endl;
	
 	kill_before_attacking();
	std::cout << std::endl;
	
 	repair_after_killing();
	std::cout << std::endl;
	
 	repair_then_kill();

	std::cout << std::endl << std::endl;
	FragTrap A("A");
	FragTrap B("B");
	A_attacks_B_till_death(A, B);
	
	std::cout << std::endl;
	FragTrap Hadi("Hadi");
	std::cout << std::endl;
	Hadi.highFivesGuys();
	std::cout << std::endl;
}