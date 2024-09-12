/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaddou <hakaddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 14:25:53 by hakaddou          #+#    #+#             */
/*   Updated: 2023/12/05 20:37:02 by hakaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <algorithm>
#include <vector>
#include <deque>
#include <utility>
#include <climits>
#include <limits>
#include <sstream>
#include <cstdlib> 

class PmergeMe {
private:
	std::vector<std::pair<int, int> >	_vector;
	std::vector<int>					_sortedVector;
	std::deque<std::pair<int, int> >	_deque;
	std::deque<int>						_sortedDeque;
	int									lastNum;
	clock_t								vectorStartTime;
	clock_t								dequeStartTime;
	clock_t								vectorEndTime;
	clock_t								dequeEndTime;
	double								vectorEmergedTime;
	double								DequeEmergedTime;
	PmergeMe();
public:
	PmergeMe(int ac, char **av);
	PmergeMe(PmergeMe const &other);
	PmergeMe & operator=(PmergeMe const &other);

	std::vector<std::pair<int, int> > &getVector();
	std::deque<std::pair<int, int> > &getDq();
	
	void	PopulateVector(int ac, char **av);
	void	sortVector();

	void	PopulateDeque(int ac, char **av);
	void	sortDeque();


	void	printSortedVector();
	void	printSortedDeque();
};

bool isValidNumber(const std::string &input);
bool checkInput(char **av);