/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaddou <hakaddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 20:39:50 by hakaddou          #+#    #+#             */
/*   Updated: 2023/03/10 15:22:05 by hakaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include "Zombie.hpp"

 int main(void) {
	Zombie* zomb = newZombie("Hadi");
	zomb->announce();
	delete zomb;
	randomChump("qwerty");
}
