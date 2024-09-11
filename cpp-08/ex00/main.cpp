/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaddou <hakaddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 13:43:36 by hakaddou          #+#    #+#             */
/*   Updated: 2023/12/01 22:33:19 by hakaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int getRandomInteger(int fromValue, int toValue)
{
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> distribution(fromValue, toValue);
    return distribution(gen);
}


void	vectorTestShouldPass()
{
	std::cout << "vectorTestShouldPass():\n\t---->\n";
	std::vector<int> v;

	for (int i = 0; i < 10000; i++)
		v.push_back(i);
	
	std::cout << "Containter Type is: Vector, Container Size is: " << v.size() << std::endl;
	
	try 
	{
		int val = easyfind(v, 9951);
		std::cout << "Value is: " << val << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "\033[31mExcpetoin: " << e.what() << "\033[0m"<< std::endl;
	}
	std::cout << "\t<----\n" << std::endl;
}

void	vectorTestShouldFail()
{
	std::cout << "vectorTestShouldFail():\n\t---->\n";
	std::vector<int> v;

	for (int i = 0; i < 10000; i++)
		v.push_back(i);
	
	std::cout << "Containter Type is: Vector, Container Size is: " << v.size() << std::endl;
	
	try 
	{
		int val = easyfind(v, 165156);
		std::cout << "Value is: " << val << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "\033[31mExcpetoin: " << e.what() << "\033[0m"<< std::endl;
	}
	std::cout << "\t<----\n" << std::endl;
}

void	vectorTestFiftyPercentChanceOfPassing()
{
	std::cout << "vectorTestFiftyPercentChanceOfPassing():\n\t---->\n";
	std::vector<int> v;

	for (int i = 0; i < 10000; i++)
		v.push_back(getRandomInteger(-5000, 5000));
	
	std::cout << "Containter Type is: Vector, Container Size is: " << v.size() << std::endl;
	
	try 
	{
		int val = easyfind(v, 15);
		std::cout << "Value is: " << val << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "\033[31mExcpetoin: " << e.what() << "\033[0m"<< std::endl;
	}
	std::cout << "\t<----\n" << std::endl;
}

void	VeryLargeVector()
{
	std::cout << "VeryLargeVector():\n\t---->\n";
	std::vector<int> v;

	for (int i = 0; i < 10000000; i++)
		v.push_back(i);
	
	std::cout << "Containter Type is: Vector, Container Size is: " << v.size() << std::endl;
	
	try 
	{
		int val = easyfind(v, getRandomInteger(0, 1000));
		std::cout << "Value is: " << val << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "\033[31mExcpetoin: " << e.what() << "\033[0m"<< std::endl;
	}
	std::cout << "\t<----\n" << std::endl;
}

void	arrayTestShouldPass()
{
	std::cout << "arrayTestShouldPass():\n\t---->\n";
	std::array<int, 10000> v;

	for (int i = 0; i < 10000; i++)
		v[i] = i;
	
	std::cout << "Containter Type is: Array, Container Size is: " << v.size() << std::endl;
	
	try 
	{
		int val = easyfind(v, 9951);
		std::cout << "Value is: " << val << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "\033[31mExcpetoin: " << e.what() << "\033[0m"<< std::endl;
	}
	std::cout << "\t<----\n" << std::endl;
}

void	arrayTestShouldFail()
{
	std::cout << "arrayTestShouldFail():\n\t---->\n";
	std::array<int, 10000> v;

	for (int i = 0; i < 10000; i++)
		v[i] = i;
	
	std::cout << "Containter Type is: Array, Container Size is: " << v.size() << std::endl;
	
	try 
	{
		int val = easyfind(v, 165156);
		std::cout << "Value is: " << val << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "\033[31mExcpetoin: " << e.what() << "\033[0m"<< std::endl;
	}
	std::cout << "\t<----\n" << std::endl;
}

void	arrayTestFiftyPercentChanceOfPassing()
{
	std::cout << "arrayTestFiftyPercentChanceOfPassing():\n\t---->\n";
	std::array<int, 10000> v;

	for (int i = 0; i < 10000; i++)
		v[i] = getRandomInteger(-5000, 5000);
	
	std::cout << "Containter Type is: Array, Container Size is: " << v.size() << std::endl;
	
	try 
	{
		int val = easyfind(v, 15);
		std::cout << "Value is: " << val << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "\033[31mExcpetoin: " << e.what() << "\033[0m"<< std::endl;
	}
	std::cout << "\t<----\n" << std::endl;
}

void	VeryLargeArray()
{
	std::cout << "VeryLargeArray():\n\t---->\n";
	std::array<int, 100000>  v;

	for (int i = 0; i < 100000; i++)
		v[i] = i;
	
	std::cout << "Containter Type is: Array, Container Size is: " << v.size() << std::endl;
	
	try 
	{
		int val = easyfind(v, getRandomInteger(0, 500));
		std::cout << "Value is: " << val << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "\033[31mExcpetoin: " << e.what() << "\033[0m"<< std::endl;
	}
	std::cout << "\t<----\n" << std::endl;
}


void	listTestShouldPass()
{
	std::cout << "listTestShouldPass():\n\t---->\n";
	std::list<int> v;

	for (int i = 0; i < 10000; i++)
		v.push_back(i);
	
	std::cout << "Containter Type is: List, Container Size is: " << v.size() << std::endl;
	
	try 
	{
		int val = easyfind(v, 9951);
		std::cout << "Value is: " << val << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "\033[31mExcpetoin: " << e.what() << "\033[0m"<< std::endl;
	}
	std::cout << "\t<----\n" << std::endl;
}

void	listTestShouldFail()
{
	std::cout << "listTestShouldFail():\n\t---->\n";
	std::list<int> v;

	for (int i = 0; i < 10000; i++)
		v.push_back(i);
	
	std::cout << "Containter Type is: List, Container Size is: " << v.size() << std::endl;
	
	try 
	{
		int val = easyfind(v, 165156);
		std::cout << "Value is: " << val << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "\033[31mExcpetoin: " << e.what() << "\033[0m"<< std::endl;
	}
	std::cout << "\t<----\n" << std::endl;
}

void	listTestFiftyPercentChanceOfPassing()
{
	std::cout << "listTestFiftyPercentChanceOfPassing():\n\t---->\n";
	std::list<int> v;

	for (int i = 0; i < 10000; i++)
		v.push_back(getRandomInteger(-5000, 5000));
	
	std::cout << "Containter Type is: List, Container Size is: " << v.size() << std::endl;
	
	try 
	{
		int val = easyfind(v, 15);
		std::cout << "Value is: " << val << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "\033[31mExcpetoin: " << e.what() << "\033[0m"<< std::endl;
	}
	std::cout << "\t<----\n" << std::endl;
}

void	VeryLargeList()
{
	std::cout << "VeryLargeList():\n\t---->\n";
	std::list<int> v;

	for (int i = 0; i < 10000000; i++)
		v.push_back(i);
	
	std::cout << "Containter Type is: List, Container Size is: " << v.size() << std::endl;
	
	try 
	{
		int val = easyfind(v, getRandomInteger(0, 1000));
		std::cout << "Value is: " << val << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "\033[31mExcpetoin: " << e.what() << "\033[0m"<< std::endl;
	}
	std::cout << "\t<----\n" << std::endl;
}


int main()
{
	vectorTestShouldPass();
	vectorTestShouldFail();
	vectorTestFiftyPercentChanceOfPassing();
	VeryLargeVector();
	arrayTestShouldPass();
	arrayTestShouldPass();
	arrayTestFiftyPercentChanceOfPassing();
	VeryLargeArray();
	listTestShouldPass();
	listTestShouldFail();
	listTestFiftyPercentChanceOfPassing();
	VeryLargeList();
}
 