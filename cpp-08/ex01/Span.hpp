/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaddou <hakaddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 01:45:00 by hakaddou          #+#    #+#             */
/*   Updated: 2023/12/02 04:33:41 by hakaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
#include <type_traits>
#include <random>

class Span {
private:
	unsigned int N;
	std::vector<int> container;

public:
	Span();
	Span(unsigned int N);
	Span(Span const &other);
	Span &operator=(Span const &other);
	~Span();

	unsigned int getN() const;
	std::vector<int> getContainer() const;
	size_t	getVectorSize();
	void	addNumber(int num);
	int		shortestSpan();
	int		longestSpan();
	void	fillVector();

	class NLimitReachedException: public std::exception
	{
	public:
		virtual const char *what() const throw();
	};

	class SPanNotFoundException: public std::exception
	{
	public:
		virtual const char *what() const throw();
	};
	
};

int getRandomInteger(int fromValue, int toValue);
void	fillVector(Span &obj, int from, int to);
void	printVector(Span &obj);
void	printSortedVector(Span &obj);