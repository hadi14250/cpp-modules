/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaddou <hakaddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 17:40:12 by hakaddou          #+#    #+#             */
/*   Updated: 2023/11/29 22:08:56 by hakaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Array.hpp"

template <typename T>
Array<T>::Array(): _size(0)
{
	std::cout << "Array Class Default Constructor Called" << std::endl;
	this->_arr = NULL;
}

template <typename T>
Array<T>::Array(unsigned int n): _size(n)
{
	std::cout << "Array Class Parameter Constructor Called" << std::endl;
	if (this->_size > 0 && this->_size < INT_MAX)
		this->_arr = new T[this->_size];
	else
		throw Array<T>::OutOfBoundException();
}

template <typename T>
Array<T>::Array(Array const &other): _size(other._size)
{
	std::cout << "Array Copy Constructor Called" << std::endl;
	if (this->_size > 0)
		this->_arr = new T[this->_size];
	else
		throw Array<T>::OutOfBoundException();
	if (this->_size)
		for (unsigned int i = 0; i < this->_size; i++)
			this->_arr[i] = other._arr[i];
}

template <typename T>
Array<T>&Array<T>::operator=(Array const &other)
{
	std::cout << "Array Class Copy Assignement Operator Called" << std::endl;
	if (this != &other)
	{
		if (this->_arr)
			delete [] this->_arr;
		this->_size = other._size;
		if (this->_size > 0)
			this->_arr = new T[this->_size];
		else
			throw Array<T>::OutOfBoundException();
		if (this->_size)
			for (unsigned int i = 0; i < this->_size; i++)
				this->_arr[i] = other._arr[i];
	}
	return (*this);
}
	
template <typename T>
Array<T>::~Array()
{
	std::cout << "Array Class Destrcutor Called" << std::endl;
	if (this->_arr)
		delete [] this->_arr;
}

template <typename T>
unsigned int Array<T>::size() const
{
	return (this->_size);
}

template <typename T>
T& Array<T>::operator[](unsigned int index)
{
	if (index >= this->_size || this->_arr == NULL)
	{
		std::cout << "Error: index " << index << std::endl;
		throw Array<T>::OutOfBoundException();
	}
	return (this->_arr[index]);
}

template <typename T>
char const *Array<T>::OutOfBoundException::what() const throw()
{
	return ("Out of bound");
}