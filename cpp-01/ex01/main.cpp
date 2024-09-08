/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaddou <hakaddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 14:34:08 by hakaddou          #+#    #+#             */
/*   Updated: 2023/03/10 15:49:09 by hakaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

 int main(void) {
	{
		int size = 100;
		Zombie *zombies = zombieHorde(size, "boo");
		for (int i = 0; i < size; i++)
		{
			std::cout << "zombie[" << i << "]: ";
			zombies->announce();
		}
		delete[] zombies;
	}
	{
		int size = -10;
		Zombie *zombies = zombieHorde(size, "boo");
		for (int i = 0; i < size; i++)
		{
			std::cout << "zombie[" << i << "]: ";
			zombies->announce();
		}
		delete[] zombies;
	}
}
