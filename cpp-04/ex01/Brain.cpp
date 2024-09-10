/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaddou <hakaddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 05:27:10 by hakaddou          #+#    #+#             */
/*   Updated: 2023/03/15 06:08:36 by hakaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
	std::cout << "Default Constructor for Brain called" << std::endl;
	for (int i = 0; i < 100; i++)
		_ideas[i] = "Brain Fart...";
}

Brain::Brain(const Brain &other) {
	std::cout << "Copy Constructor for Brain called" << std::endl;
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = other._ideas[i];
}

Brain& Brain::operator=(const Brain &other) {
	std::cout << "Assignment Operator for Brain called" << std::endl;
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = other._ideas[i];
	return (*this);
}

Brain::~Brain() {
	std::cout << "Destructor for Brain called" << std::endl;
}

const std::string Brain::get_idea(int i) {
	if(i < 0 || i >= 100)
		return(_ideas[0]);
	return(_ideas[i]);
}

void Brain::set_idea(int i, std::string idea) {
	if (i < 0 || i >= 100)
		return ;
	_ideas[i] = idea;
}
