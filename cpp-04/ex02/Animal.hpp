/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaddou <hakaddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 19:43:38 by hakaddou          #+#    #+#             */
/*   Updated: 2023/03/15 22:02:20 by hakaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Animal_HPP
#define Animal_HPP

#include <iostream>

class Animal {
protected:
	std::string _type;
public:
	Animal();
	Animal(std::string type);
	Animal(const Animal& other);
	Animal& operator=(const Animal& other);
	virtual ~Animal();

	virtual void makeSound() const = 0;
	std::string getType() const;
};

#endif