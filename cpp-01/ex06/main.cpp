/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaddou <hakaddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 18:44:59 by hakaddou          #+#    #+#             */
/*   Updated: 2023/03/11 19:42:50 by hakaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av) {

    if (ac != 2) {
        std::cout << "Usage: ./harlFilter <level>" << std::endl;
		return (1);
    }
    std::string input = av[1];
    Harl        harl;
    harl.complain(input);
    return (0);
}