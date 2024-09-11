/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaddou <hakaddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 15:46:44 by hakaddou          #+#    #+#             */
/*   Updated: 2023/11/29 16:05:11 by hakaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once

#include <iostream>

template <typename Array, typename F>
void	iter(Array *arr, size_t len, F function)
{
	for (size_t i = 0; i < len; i++)
		function(arr[i]);
}

template <typename T>
void	printArrContent(T arr, size_t len)
{
	for(size_t i = 0; i < len; i++)
	{
		std::cout << arr[i];
		if (i != len - 1)
			std::cout << ", ";
	}
	std::cout << std::endl;
}