/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaddou <hakaddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 15:20:20 by hakaddou          #+#    #+#             */
/*   Updated: 2023/12/04 05:18:52 by hakaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Error: could not open file." << std::endl;
		return (1);
	}
	
	try
	{
		Btc btc("data.csv", av[1]);
		btc.compareValues();
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	// btc.printDataBase();
}