/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaddou <hakaddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 18:44:59 by hakaddou          #+#    #+#             */
/*   Updated: 2023/03/11 19:14:40 by hakaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main( void ) {

    std::string input = "42";
    Harl harl;
	std::cout << "Enter a level: ";
    while(std::getline(std::cin, input) && input != "EXIT")
    {
        harl.complain(input);
        std::cout << "Enter a level: ";
	}
}