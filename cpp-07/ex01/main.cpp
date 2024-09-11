/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaddou <hakaddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 15:52:18 by hakaddou          #+#    #+#             */
/*   Updated: 2023/11/29 16:14:31 by hakaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void	addTenToInt(int &element)
{
	element += 10;
}

void	appendStrToString(std::string &element)
{
	element.append(" 42");
}

void	intIterTest()
{
	int arr[] = {1, 2, 3, 4, 5, 6, 7 , 8, 9, 10};
	std::cout << "Before iter --->" << std::endl;
	printArrContent(arr, 10);
	std::cout << "<---\n" << std::endl;

	iter(arr, 10, addTenToInt);

	std::cout << "After iter --->" << std::endl;
	printArrContent(arr, 10);
	std::cout << "<---\n" << std::endl;
}

void	strIterTest()
{
	std::string arr[] = {"Hadi", "Bilal", "Faraz", "Hussain", "Yassin", "Kazem"};
	std::cout << "Before iter --->" << std::endl;
	printArrContent(arr, 6);
	std::cout << "<---\n" << std::endl;

	iter(arr, 6, appendStrToString);

	std::cout << "After iter --->" << std::endl;
	printArrContent(arr, 6);
	std::cout << "<---\n" << std::endl;
}

int main()
{
	intIterTest();
	
	strIterTest();
}