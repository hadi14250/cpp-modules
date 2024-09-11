/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaddou <hakaddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 01:59:56 by hakaddou          #+#    #+#             */
/*   Updated: 2023/12/02 04:38:54 by hakaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(): N(0)
{
	std::cout << "Span Default No Param Constructor Called" << std::endl;
}

Span::Span(unsigned int N): N(N)
{
	std::cout << "Span Default Param Constructor Called" << std::endl;
}

	
Span::Span(const Span &other): N(other.getN())
{
	std::cout << "Span Copy Constructor Called" << std::endl;

    const std::vector<int> &otherContainer = other.getContainer();
    this->container.reserve(otherContainer.size());

    for (std::vector<int>::const_iterator i = otherContainer.begin(); i != otherContainer.end(); i++)
        this->container.push_back(*i);
}

Span &Span::operator=(Span const &other)
{
	std::cout << "Span Copy Assignment Operator Called" << std::endl;

	if (this == &other)
		return (*this);
	this->N = other.getN();
    const std::vector<int> &otherContainer = other.getContainer();
    this->container.reserve(otherContainer.size());

    for (std::vector<int>::const_iterator i = otherContainer.begin(); i != otherContainer.end(); i++)
       this->container.push_back(*i);
	   
	return (*this);
}

Span::~Span()
{
	std::cout << "Span Destructor Called" << std::endl;
}

unsigned int Span::getN() const
{
	return (this->N);
}

std::vector<int> Span::getContainer() const
{
	return(this->container);
}

void	Span::addNumber(int num)
{
	if (this->getN() == this->container.size())
		throw Span::NLimitReachedException();
	else
		this->container.push_back(num);
}

const char* Span::NLimitReachedException::what() const throw()
{
	return ("\033[31mObject Can't store any more data\033[0m");
}

const char* Span::SPanNotFoundException::what() const throw()
{
	return ("\033[31mSpan Can't Be Found: Span should contain atleast 2 number\033[0m");
}

int	Span::shortestSpan()
{
	int minSpan = INT_MAX;
	int	span;

	if (this->container.size() <= 1)
		throw Span::SPanNotFoundException();
	std::vector<int> sorted = this->getContainer();
	std::sort(sorted.begin(), sorted.end());
	for (size_t i = 1; i < sorted.size(); i++)
	{
		span = sorted.at(i) - sorted.at(i - 1);
		minSpan = std::min(minSpan, span);
	}
	return (minSpan);
}

int Span::longestSpan()
{
	int longestSpan;

	if (this->container.size() <= 1)
		throw Span::SPanNotFoundException();
	std::vector<int> sorted = this->getContainer();
	std::sort(sorted.begin(), sorted.end());
	longestSpan = *(sorted.end() - 1) - (*sorted.begin());
	return (longestSpan);
}

size_t	Span::getVectorSize()
{
	return (this->container.size());
}

int getRandomInteger(int fromValue, int toValue)
{
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> distribution(fromValue, toValue);
    return distribution(gen);
}

void	fillVector(Span &obj, int from, int to)
{
	size_t size;

	size = obj.getN();
	try
	{
		for (size_t i = 0; i < size; i++)
			obj.addNumber(getRandomInteger(from, to));
	}
	catch (std::exception &e)
	{
		std::cout << "Exception Occured: " << e.what();
	}
}

void	printVector(Span &obj)
{
	std::vector<int> container;
	size_t size;

	container = obj.getContainer();
	size = container.size();
	std::cout << "Vector elements are:\n--->" << std::endl;
	for (size_t i = 0; i < size; i++)
	{
		std::cout << container[i];
		if (i != size - 1)
			std::cout << ", ";
	}
	std::cout << "\n<---\n" << std::endl;
}

void	printSortedVector(Span &obj)
{
	std::vector<int> container;
	size_t size;

	container = obj.getContainer();
	size = container.size();
	std::sort(container.begin(), container.end());

	std::cout << "Sorted Vector elements are:\n--->" << std::endl;
	for (size_t i = 0; i < size; i++)
	{
		std::cout << container[i];
		if (i != size - 1)
			std::cout << ", ";
	}
	std::cout << "\n<---\n" << std::endl;
}

int generateNum()
{
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> distribution(1, 10000000);
    return distribution(gen);
}

void	Span::fillVector()
{
	this->container.resize(this->getN());
	std::generate(this->container.begin(), this->container.end(), &generateNum);
}