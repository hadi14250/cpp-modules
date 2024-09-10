/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaddou <hakaddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 05:25:03 by hakaddou          #+#    #+#             */
/*   Updated: 2023/03/15 06:09:05 by hakaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain {
private:
	std::string _ideas[100];
public:
	Brain();
	Brain(const Brain &other);
	Brain& operator=(const Brain &other);
	~Brain();

	const std::string get_idea(int i);
	void set_idea(int i, std::string idea);
};

#endif