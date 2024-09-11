/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaddou <hakaddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 20:02:37 by hakaddou          #+#    #+#             */
/*   Updated: 2023/11/29 22:13:53 by hakaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

void	basicTest()
{
	Array<std::string> arr(5);
	arr[0] = "Hadi";
	arr[1] = "Bilal";
	arr[2] = "Hussain";
	arr[3] = "Faraz";
	arr[4] = "Robby";
	for(unsigned int i = 0; i < arr.size(); i++)
		std::cout << arr[i] << std::endl;
}

void	copyConstructorTest()
{
	Array<std::string> arr1(5);
	arr1[0] = "Hadi";
	arr1[1] = "Bilal";
	arr1[2] = "Hussain";
	arr1[3] = "Faraz";
	arr1[4] = "Robby";

	Array<std::string> arr2(arr1);
	for(unsigned int i = 0; i < arr2.size(); i++)
		std::cout << arr2[i] << std::endl;
}

void	exceptionEmpty()
{
	Array<std::string> arr1(5);
	arr1[0] = "Hadi";
	arr1[1] = "Bilal";
	arr1[2] = "Hussain";
	arr1[3] = "Faraz";
	arr1[4] = "Robby";

	Array<std::string> arr2;
	try
	{
		for(unsigned int i = 0; i < arr2.size(); i++)
			std::cout << arr2[i] << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "\033[31mException Occured " << e.what() << "\033[0m" << std::endl;
	}
}

void	copyAssignmentTest()
{
	Array<std::string> arr1(5);
	arr1[0] = "Hadi";
	arr1[1] = "Bilal";
	arr1[2] = "Hussain";
	arr1[3] = "Faraz";
	arr1[4] = "Robby";

	Array<std::string> arr2;
	arr2 = arr1;
	try
	{
		for(unsigned int i = 0; i < arr2.size(); i++)
			std::cout << arr2[i] << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "\033[31mException Occured " << e.what() << "\033[0m" << std::endl;
	}
}

void	negativeIndex()
{
	try
	{
		Array<std::string> arr1(-1);
	}
	catch (std::exception &e)
	{
		std::cout << "\033[31mException Occured " << e.what() << "\033[0m" << std::endl;
	}
}

void	intTest()
{
	Array<int> arr1(5);
	arr1[0] = 1;
	arr1[1] = 2;
	arr1[2] = 3;
	arr1[3] = 4;
	arr1[4] = 5;

	Array<int> arr2;
	arr2 = arr1;
	try
	{
		for(unsigned int i = 0; i < arr2.size(); i++)
			std::cout << arr2[i] << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "\033[31mException Occured " << e.what() << "\033[0m" << std::endl;
	}
}

int main()
{
	basicTest();
	copyConstructorTest();
	exceptionEmpty();
	copyAssignmentTest();
	negativeIndex();
	intTest();
}