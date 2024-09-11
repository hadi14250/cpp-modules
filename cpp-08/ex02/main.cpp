/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaddou <hakaddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 04:29:26 by hakaddou          #+#    #+#             */
/*   Updated: 2023/12/02 08:02:32 by hakaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

void	sortFifty()
{
	MutantStack<int>test;

	test.fill(50);
	
	std::cout << "Before Sorting:\n---->\n" << std::endl;
	test.print();

	std::sort(test.begin(), test.end());
	std::cout << "After Sorting:\n---->\n" << std::endl;
	test.print();
}

void	sortOneThousand()
{
	MutantStack<int>test;

	test.fill(1000);
	
	std::cout << "Before Sorting:\n---->\n" << std::endl;
	test.print();

	std::sort(test.begin(), test.end());
	std::cout << "After Sorting:\n---->\n" << std::endl;
	test.print();
}

void	testWithFive()
{
	MutantStack<int>test;

	test.fill(5);

	test.print();
}

void	testWithStrings()
{
	MutantStack<std::string>test;

	test.push("Hadi");
	test.push("Bilal");
	test.push("Zackery");
	test.push("Yassin");
	test.push("Faraz");
	test.push("Ahmad");

	test.print();
}

void	sortNames()
{
	MutantStack<std::string>test;

	test.push("Hadi");
	test.push("Bilal");
	test.push("Zackery");
	test.push("Yassin");
	test.push("Faraz");
	test.push("Jensen");
	test.push("Mehrin");
	test.push("Omar");
	test.push("Yao");
	test.push("Radi");
	test.push("Bushra");
	test.push("Marcos");
	test.push("Muses");
	test.push("Rifath");
	test.push("Ahmad");
	test.push("Sneha");
	test.push("Mama");
	test.push("Baba");
	test.push("Jawad");

	std::cout << "Before Sorting:\n---->\n" << std::endl;
	test.print();

	std::sort(test.begin(), test.end());
	std::cout << "After Sorting:\n---->\n" << std::endl;
	test.print();
}

void	RandomAccess()
{
	MutantStack<std::string>test;

	test.push("[0]: Hadi"); // 0
	test.push("[1]: Bilal"); // 1
	test.push("[2]: Zackery"); // 2
	test.push("[3]: Yassin"); // 3
	test.push("[4]: Faraz"); // 4
	test.push("[5]: Jensen"); // 5
	test.push("[6]: Mehrin"); // 6
	test.push("[7]: Omar"); // 7
	test.push("[8]: Yao"); // 8
	test.push("[9]: Radi"); // 9
	test.push("[10]: Bushra"); // 10
	test.push("[11]: Marcos"); // 11
	test.push("[12]: Muses"); // 12
	test.push("[13]: Rifath"); // 13
	test.push("[14]: Ahmad"); // 14
	test.push("[15]: Sneha"); // 15
	test.push("[16]: Mama"); // 16
	test.push("[17]: Baba"); // 17
	test.push("[18]: Jawad"); // 18

	test.print();

	test.print(11);
	test.print(0);
	test.print(17);
	test.print(14);
	test.print(4);
	test.print(7);
	
}

int main()
{
	testWithFive();
	sortFifty();
	sortOneThousand();
	testWithStrings();
	sortNames();
	RandomAccess();
}