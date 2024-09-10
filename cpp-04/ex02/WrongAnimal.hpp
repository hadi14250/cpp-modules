/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaddou <hakaddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 21:20:22 by hakaddou          #+#    #+#             */
/*   Updated: 2023/03/15 21:59:39 by hakaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef WrongAnimal_HPP
#define WrongAnimal_HPP

#include <iostream>

class WrongAnimal {
protected:
	std::string _type;
public:
	WrongAnimal();
	WrongAnimal(std::string type);
	WrongAnimal(const WrongAnimal& other);
	WrongAnimal& operator=(const WrongAnimal& other);
	virtual ~WrongAnimal();

	void makeSound() const;
	std::string getType() const;
};

#endif