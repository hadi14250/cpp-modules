/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaddou <hakaddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 14:30:17 by hakaddou          #+#    #+#             */
/*   Updated: 2023/12/05 20:42:49 by hakaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "PmergeMe.hpp"

int main(int ac, char **av)
{
	try
	{
		PmergeMe pmergeme(ac, av);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}