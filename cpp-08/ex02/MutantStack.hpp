/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaddou <hakaddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 05:41:04 by hakaddou          #+#    #+#             */
/*   Updated: 2023/12/02 08:03:10 by hakaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stack>
#include <deque>
#include <algorithm>
#include <type_traits>
#include <random>
#include <sstream>

template <typename T>
class MutantStack : public std::stack<T, std::deque<T> >
{
	public:
		MutantStack();
		MutantStack(MutantStack const &other);
		~MutantStack();
		MutantStack &operator=(MutantStack const &other);
		typename std::deque<T>::iterator begin(void);
		typename std::deque<T>::iterator end(void);
		T &operator[](unsigned int index);
		class OutOfBoundException: public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
		void	print();
		void	print(unsigned int index);
		void	fill(size_t batchAmount);
};

#include "MutantStack.tpp"