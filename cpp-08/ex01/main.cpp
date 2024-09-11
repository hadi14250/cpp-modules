/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaddou <hakaddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 22:38:54 by hakaddou          #+#    #+#             */
/*   Updated: 2023/12/02 04:41:51 by hakaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

void	zeroElementTest()
{
	{
		try
		{
			std::cout << "\noneElementTest()() start:\n-------------->>>>" << std::endl;
			Span container;

			fillVector(container, 0, 20);
			printVector(container);
			printSortedVector(container);
			std::cout << "Shortest Span is: " << container.shortestSpan() << std::endl;
			std::cout << "Longest Span is: " << container.longestSpan() << std::endl;
		}
		catch(std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << "\nEnd of oneElementTest()()\n<<<<--------------\n" << std::endl;	
}

void	oneElementTest()
{
	{
		try
		{
			std::cout << "\noneElementTest()() start:\n-------------->>>>" << std::endl;
			Span container(1);

			fillVector(container, 0, 20);
			printVector(container);
			printSortedVector(container);
			std::cout << "Shortest Span is: " << container.shortestSpan() << std::endl;
			std::cout << "Longest Span is: " << container.longestSpan() << std::endl;
		}
		catch(std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << "\nEnd of oneElementTest()()\n<<<<--------------\n" << std::endl;	
}

void	twoElementTest()
{
	{
		try
		{
			std::cout << "\noneElementTest()() start:\n-------------->>>>" << std::endl;
			Span container(2);

			fillVector(container, 0, 20);
			printVector(container);
			printSortedVector(container);
			std::cout << "Shortest Span is: " << container.shortestSpan() << std::endl;
			std::cout << "Longest Span is: " << container.longestSpan() << std::endl;
		}
		catch(std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << "\nEnd of oneElementTest()()\n<<<<--------------\n" << std::endl;	
}

void	simpleTest()
{
	{
		std::cout << "\nsimpleTest() start:\n-------------->>>>" << std::endl;
		Span container(5);

		fillVector(container, 0, 20);
		printVector(container);
		printSortedVector(container);
		std::cout << "Shortest Span is: " << container.shortestSpan() << std::endl;
		std::cout << "Longest Span is: " << container.longestSpan() << std::endl;
	}
	std::cout << "\nEnd of simpleTest()\n<<<<--------------\n" << std::endl;
}

void	TwentyTest()
{
	{
		std::cout << "\nTwentyTest() start:\n-------------->>>>" << std::endl;
		Span container(20);

		fillVector(container, 0, 100);
		printVector(container);
		printSortedVector(container);
		std::cout << "Shortest Span is: " << container.shortestSpan() << std::endl;
		std::cout << "Longest Span is: " << container.longestSpan() << std::endl;
	}
	std::cout << "\nEnd of TwentyTest()\n<<<<--------------\n" << std::endl;
}


void	oneHundredTest()
{
	{
		std::cout << "\noneHundredTest() start:\n-------------->>>>" << std::endl;
		Span container(100);

		fillVector(container, 0, 400);
		printVector(container);
		printSortedVector(container);
		std::cout << "Shortest Span is: " << container.shortestSpan() << std::endl;
		std::cout << "Longest Span is: " << container.longestSpan() << std::endl;
	}
	std::cout << "\nEnd of oneHundredTest()\n<<<<--------------\n" << std::endl;
}

void	oneThousandTest()
{
	{
		std::cout << "\noneThousandTest() start:\n-------------->>>>" << std::endl;
		Span container(1000);

		fillVector(container, -200000, 200000);
		printVector(container);
		printSortedVector(container);
		std::cout << "Shortest Span is: " << container.shortestSpan() << std::endl;
		std::cout << "Longest Span is: " << container.longestSpan() << std::endl;
	}
	std::cout << "\nEnd of oneThousandTest()\n<<<<--------------\n" << std::endl;
}

void	thirtyThousandTest()
{
	{
		std::cout << "\nthirtyThousandTest() start:\n-------------->>>>" << std::endl;
		Span container(30000);

		fillVector(container, 1, 100000000);
		printVector(container);
		printSortedVector(container);
		std::cout << "Shortest Span is: " << container.shortestSpan() << std::endl;
		std::cout << "Longest Span is: " << container.longestSpan() << std::endl;
	}
	std::cout << "\nEnd of thirtyThousandTest()\n<<<<--------------\n" << std::endl;
}

void	hundredThousandTest()
{
	{
		std::cout << "\nhundredThousandTest() start:\n-------------->>>>" << std::endl;
		Span container(100000);

		fillVector(container, -1000000000, 1000000000);
		printVector(container);
		printSortedVector(container);
		std::cout << "Shortest Span is: " << container.shortestSpan() << std::endl;
		std::cout << "Longest Span is: " << container.longestSpan() << std::endl;
	}
	std::cout << "\nEnd of hundredThousandTest()\n<<<<--------------\n" << std::endl;
}

void	fillVectorTest()
{
	{
		std::cout << "\nfillVectorTest() start:\n-------------->>>>" << std::endl;
		Span container(100);

		container.fillVector();
		printVector(container);
		printSortedVector(container);
		std::cout << "Shortest Span is: " << container.shortestSpan() << std::endl;
		std::cout << "Longest Span is: " << container.longestSpan() << std::endl;
	}
	std::cout << "\nEnd of fillVectorTest()\n<<<<--------------\n" << std::endl;
}


void	pdfTest()
{
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
}



int main()
{
	zeroElementTest();
	oneElementTest();
	twoElementTest();
	simpleTest();
	TwentyTest();
	oneHundredTest();
	oneThousandTest();
	thirtyThousandTest();
	hundredThousandTest();
	fillVectorTest();
	pdfTest();
	
}