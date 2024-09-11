/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaddou <hakaddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 05:42:47 by hakaddou          #+#    #+#             */
/*   Updated: 2023/12/02 08:01:17 by hakaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

template <typename T>
MutantStack<T>::MutantStack()
{
	std::cout << "MutantStack Class Default Constructor Called" << std::endl;
}

template <typename T>
MutantStack<T>::MutantStack(MutantStack const &other)
{
	std::cout << "MutantStack Copy Constructor Called" << std::endl;
	*this = other;
}

template <typename T>
MutantStack<T>&MutantStack<T>::operator=(MutantStack const &other)
{
	std::cout << "MutantStack Class Copy Assignement Operator Called" << std::endl;
	if (this != &other)
	{
		std::stack<T, std::deque<T> >::operator=(other);
		return *this;
	}
	return (*this);
}

template <typename T>
MutantStack<T>::~MutantStack()
{
	std::cout << "MutantStack Class Destrcutor Called" << std::endl;
}

template <typename T>
typename std::deque<T>::iterator MutantStack<T>::begin(void)
{
	return (this->c.begin());
}

template <typename T>
typename std::deque<T>::iterator MutantStack<T>::end(void)
{
	return (this->c.end());
}

template <typename T>
T& MutantStack<T>::operator[](unsigned int index)
{
	unsigned int	intIterator;
	intIterator = 0;
	
	if (index >= this->size())
	{
		std::cout << "Error: index " << index << std::endl;
		throw MutantStack<T>::OutOfBoundException();
	}
	for (std::deque<int>::iterator i = this->begin(); i != this->end(); i++)
	{
		if (intIterator == index)
			return (*i);	
		intIterator++;
	}
	return (*(this->end()));
}

template <typename T>
char const *MutantStack<T>::OutOfBoundException::what() const throw()
{
	return ("Out of bound");
}

template <typename T>
void	MutantStack<T>::print()
{
	for (size_t i = 0; i < this->c.size(); i++)
	{
		std::cout << this->c[i];
		if (i != (this->size() - 1))
			std::cout << ", ";
	}
	std::cout << std::endl;
}
template <typename T>
void	MutantStack<T>::print(unsigned int index)
{
	std::cout << "The Element at index: " << index << " is: " << this->c[index] << std::endl;
}

// only works if the stack is holds ints
template <typename T>
void	MutantStack<T>::fill(size_t batchAmount)
{
	for (size_t i = 0; i < batchAmount; i++)
	{
		std::random_device rd;
		std::mt19937 gen(rd());
		std::uniform_int_distribution<int> distribution(1, batchAmount * 10);
		int randomNum =  distribution(gen);
		this->push(randomNum);
	}
}