/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaddou <hakaddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 12:09:45 by hakaddou          #+#    #+#             */
/*   Updated: 2023/11/24 14:16:07 by hakaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"


Intern::Intern()
{
	std::cout << "Intern default constructor Called" << std::endl;
}

Intern::Intern(Intern const &other)
{
	std::cout << "Intern Copy constructor Called" << std::endl;
	*this = other;
}

Intern &Intern::operator=(Intern const &other)
{
	std::cout << "INtern Assignation Operator Called" << std::endl;
	if (this != &other)
		return (*this);
	else
		return (*this);
}

Intern::~Intern()
{
	std::cout << "Intern Desctructor Called" << std::endl;
}
AForm	*Intern::makeForm(std::string const &formName, std::string const &formTarget)
{
	std::string forms[] = {"presidential pardon", "robotomy request", "shrubbery creation"};
	AForm	*form = NULL;

	for (int i = 0; i < 3; i++)
	{
	if (formName == forms[i])
	{
		switch(i)
		{
			case 0:
				form = new PresidentialPardonForm(formTarget);
				break;
			case 1:
				form = new RobotomyRequestForm(formTarget);
				break;
			case 2:
				form = new ShrubberyCreationForm(formTarget);
				break;
		}
	}
	}
	if (form == NULL)
		std::cout << formName << "No Form Matches This Name" << std::endl;
	else
		std::cout << "Intern creates: " << formName << std::endl;
	return (form);
}
