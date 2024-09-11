/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaddou <hakaddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 17:31:04 by hakaddou          #+#    #+#             */
/*   Updated: 2023/11/29 22:14:18 by hakaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <climits>
template <typename T>
class Array
{
private:
	T *_arr;
	unsigned int _size;
public:
	Array();
	Array(unsigned int n);
	Array(Array const &other);
	Array &operator=(Array const &other);
	~Array();

	unsigned int size() const;
	T &operator[](unsigned int index);
	class OutOfBoundException: public std::exception
	{
		public:
			virtual const char *what() const throw();
	};
	
};

#include "Array.tpp"
