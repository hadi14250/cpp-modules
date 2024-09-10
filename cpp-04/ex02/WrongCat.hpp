/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaddou <hakaddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 21:20:01 by hakaddou          #+#    #+#             */
/*   Updated: 2023/03/15 21:59:39 by hakaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WrongCat_HPP
#define WrongCat_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
public:
	WrongCat();
	WrongCat& operator=(const WrongCat& other);
	WrongCat(const WrongCat& other);
	~WrongCat();
	virtual void makeSound() const;
};

#endif