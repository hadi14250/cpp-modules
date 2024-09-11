/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaddou <hakaddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 21:05:51 by hakaddou          #+#    #+#             */
/*   Updated: 2023/12/01 22:37:05 by hakaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <algorithm>
#include <type_traits>
#include <random>
#include <array>
#include <vector>
#include <list>
#include <deque>

class valueNotFoundException : public std::exception
{
	public:
		virtual const char* what() const throw()
		{
			return ("Not found");
		}
};

template <typename T>
int	easyfind(T container, int value)
{
	typename T::iterator i;
	i = std::find(container.begin(), container.end(), value);
	if (i == container.end())
		throw valueNotFoundException();
	else
		return (*i);
}