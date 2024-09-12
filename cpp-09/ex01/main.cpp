/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaddou <hakaddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 04:38:41 by hakaddou          #+#    #+#             */
/*   Updated: 2023/12/04 04:40:15 by hakaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Rpn.hpp"

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Error: invalid argument" << std::endl;
		return (1);
	}
	Rpn rpn(av[1]);
}