/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaddou <hakaddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 06:18:01 by hakaddou          #+#    #+#             */
/*   Updated: 2023/11/28 06:30:53 by hakaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

typedef struct Data
{
	std::string structContent;
}				Data;

class Serializer
{
private:
	Serializer();
	Serializer(Serializer const &other);
	Serializer &operator=(Serializer const &other);
	~Serializer();
	
public:
	static uintptr_t serialize(Data *ptr);
	static Data *deserialize(uintptr_t raw);
};