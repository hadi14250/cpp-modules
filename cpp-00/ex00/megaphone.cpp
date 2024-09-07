/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaddou <hakaddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 14:30:36 by hakaddou          #+#    #+#             */
/*   Updated: 2023/03/04 17:22:20 by hakaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
	std::string word;
	
	if (ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		system("say -v 'Bad News' -r 300 -v lekha LOUD AND UNBEARABLE FEEDBACK NOISE");
		return (0);
	}
	for (int i = 1; i < ac; i++)
	{
		word = std::string(av[i]);
		int length = static_cast<int>(word.length());
		for (int j = 0; j < length; j++)
		{
			word[j] = std::toupper(word[j]);
		}
		std::cout << word + " ";
	}
	std::cout << std::endl;
}