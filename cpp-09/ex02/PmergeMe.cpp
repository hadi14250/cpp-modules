/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaddou <hakaddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 14:23:38 by hakaddou          #+#    #+#             */
/*   Updated: 2023/12/05 20:50:28 by hakaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

void	sortPairs(int &firstValue, int &secondValue)
{
	int	tmp;

	if (secondValue < firstValue)
	{
		tmp = secondValue;
		secondValue = firstValue;
		firstValue = tmp;
	}
}

PmergeMe::PmergeMe(int ac, char **av)
{

	if (ac <= 1 || checkInput(av) != true)
		throw std::runtime_error("Error");
	if (ac % 2 == 0)
		this->lastNum = std::atoi(av[--ac]);
	else
		this->lastNum = -1;

	if (ac == 1)
		return ;
	std::cout << "Vector Before: ";
	for (int i = 1; i < ac; i++)
	{
		std::cout << std::atoi(av[i]) << " ";
		
	}
	std::cout  << "\n" << std::endl;

	this->vectorStartTime = clock();
	this->PopulateVector(ac, av);
	this->sortVector();
	this->vectorEndTime = clock();
	this->vectorEmergedTime = (double)(vectorEndTime - vectorStartTime) / ((double)CLOCKS_PER_SEC / 1000);

	this->dequeStartTime = clock();
	this->PopulateDeque(ac, av);
	this->sortDeque();
	this->dequeEndTime = clock();
	this->DequeEmergedTime = (double)(dequeEndTime - dequeStartTime) / ((double)CLOCKS_PER_SEC / 1000);


	this->printSortedVector();
	std::cout << "\n" << std::endl;
	this->printSortedDeque();

	std::cout << "\n" << std::endl;
	std::cout << "Time elapsed for Vector: " << vectorEmergedTime << std::endl;
	std::cout << "Time elapsed for Deque: " << DequeEmergedTime << std::endl;
}

void PmergeMe::PopulateVector(int ac, char **av)
{
	std::pair<int, int> pairedNums;
	int					firstValue;
	int					secondValue;

	for (int i = 1; i < ac; i += 2)
	{
		firstValue = std::atoi(av[i]);
		secondValue = std::atoi(av[i + 1]);
		sortPairs(firstValue, secondValue);
		pairedNums = std::make_pair(firstValue, secondValue);
		_vector.push_back(pairedNums);
	}
}

int	compareSecondValue(const std::pair< int, int > &a, const std::pair< int, int > &b)
{
	if (a.second == -1)
		return (false);
	if (a.second < b.second)
		return (true);
	else
		return (false);
};

std::vector< std::pair< int, int > >	vectorMergeSort(std::vector< std::pair< int, int > > vectorPairs)
{
	std::vector< std::pair< int, int > >			left;
	std::vector< std::pair< int, int > >			right;
	std::vector< std::pair< int, int > >::iterator	midPoint;
	std::vector< std::pair< int, int > >			mergeResult;

	if (vectorPairs.size() <= 1)
		return (vectorPairs);
	midPoint = vectorPairs.begin() + vectorPairs.size() / 2;
	left.insert(left.begin(), vectorPairs.begin(), midPoint);
	left = vectorMergeSort(left);
	right.insert(right.begin(), midPoint, vectorPairs.end());
	right = vectorMergeSort(right);
	std::merge(left.begin(), left.end(), right.begin(), right.end(), std::back_inserter(mergeResult), compareSecondValue);
	return (mergeResult);
};

std::deque< std::pair< int, int > >	dequeMergeSort(std::deque< std::pair< int, int > > dequePairs)
{
	std::deque< std::pair< int, int > >			left;
	std::deque< std::pair< int, int > >			right;
	std::deque< std::pair< int, int > >::iterator	midPoint;
	std::deque< std::pair< int, int > >			mergeResult;

	if (dequePairs.size() <= 1)
		return (dequePairs);
	midPoint = dequePairs.begin() + dequePairs.size() / 2;
	left.insert(left.begin(), dequePairs.begin(), midPoint);
	left = dequeMergeSort(left);
	right.insert(right.begin(), midPoint, dequePairs.end());
	right = dequeMergeSort(right);
	std::merge(left.begin(), left.end(), right.begin(), right.end(), std::back_inserter(mergeResult), compareSecondValue);
	return (mergeResult);
};

void insertChainBtoChainAVector(std::vector<int>& chainA, std::vector<int>& chainB)
{
    for (std::vector<int>::iterator itB = chainB.begin(); itB != chainB.end(); ++itB)
	{
        std::vector<int>::iterator itA = std::lower_bound(chainA.begin(), chainA.end(), *itB);
        chainA.insert(itA, *itB);
    }
}

void insertChainBtoChainADeque(std::deque<int>& chainA, std::deque<int>& chainB)
{
    for (std::deque<int>::iterator itB = chainB.begin(); itB != chainB.end(); ++itB)
	{
        std::deque<int>::iterator itA = std::lower_bound(chainA.begin(), chainA.end(), *itB);
        chainA.insert(itA, *itB);
    }
}


void	PmergeMe::sortVector()
{
	std::vector< int >	chainA;
	std::vector< int >	chainB;


	if (_vector.empty())
		return ;
	_vector = vectorMergeSort(_vector);

	for (std::vector< std::pair<int, int> >::iterator it = _vector.begin(); it != _vector.end(); it++)
	{
		chainA.push_back(it->second);
		chainB.push_back(it->first);
	}
	if (this->lastNum != -1)
		chainB.push_back(this->lastNum);
	
	insertChainBtoChainAVector(chainA, chainB);
	this->_sortedVector = chainA;
}

void	PmergeMe::sortDeque()
{
	std::deque<int>	chainA;
	std::deque<int>	chainB;


	if (_deque.empty())
		return ;
	_deque = dequeMergeSort(_deque);

	for (std::deque< std::pair<int, int> >::iterator it = _deque.begin(); it != _deque.end(); it++)
	{
		chainA.push_back(it->second);
		chainB.push_back(it->first);
	}
	if (this->lastNum != -1)
		chainB.push_back(this->lastNum);

	insertChainBtoChainADeque(chainA, chainB);
	this->_sortedDeque = chainA;
}

void	PmergeMe::printSortedVector()
{
	std::cout << "Vector After: ";
	for (std::vector<int>::iterator it = _sortedVector.begin(); it != _sortedVector.end(); it++)
	{
		std::cout << *it;
		std::cout << " ";
	}
	std::cout << std::endl;
}

void	PmergeMe::printSortedDeque()
{
	std::cout << "Deque After: ";
	for (std::deque<int>::iterator it = _sortedDeque.begin(); it != _sortedDeque.end(); it++)
	{
		std::cout << *it;
		std::cout << " ";
	}
	std::cout << std::endl;
}


void PmergeMe::PopulateDeque(int ac, char **av)
{
	std::pair<int, int> pairedNums;
	int					firstValue;
	int					secondValue;

    for (int i = 1; i < ac; i += 2)
	{
		firstValue = std::atoi(av[i]);
		secondValue = std::atoi(av[i + 1]);
		sortPairs(firstValue, secondValue);
		pairedNums = std::make_pair(firstValue, secondValue);
		_deque.push_back(pairedNums);
    }
}

bool checkInput(char **av)
{
	for (int i = 1; av[i]; i++)
		if (!isValidNumber(av[i]))
			return (false);
	return (true);
}

bool isValidNumber(const std::string &input)
{
    std::istringstream iss(input);
    double number;

    iss >> number;

    if (iss.fail() || !iss.eof())
    {
        return false;
    }

    if (number < 0 || number > std::numeric_limits<int>::max())
    {
        return false;
    }
    return true;
}
