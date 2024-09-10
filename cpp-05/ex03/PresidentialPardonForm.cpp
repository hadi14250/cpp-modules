/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaddou <hakaddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 16:28:07 by hakaddou          #+#    #+#             */
/*   Updated: 2023/11/21 18:06:11 by hakaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string const &target): AForm("PresidentialPardonForm", 25, 5), _target(target)
{
	std::cout << "Default Constructor for PresidentialPardonForm called with target: " << this->_target << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &other): AForm("PresidentialPardonForm", 25,5), _target(other.getTarget())
{
	std::cout << "Copy Constructor for PresidentialPardonForm called with target: " << this->_target << std::endl;
	*this = other;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &other)
{
	std::cout << "Copy Assignment Operator for PresidentialPardonForm called with target: " << this->_target << std::endl;
	if (this != &other)
		return (*this);
	else
		return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "Destructor Called For PresidentialPardonForm With Target: " << this->_target << std::endl;
}

std::string PresidentialPardonForm::getTarget() const
{
	return (this->_target);
}

void PresidentialPardonForm::execute(Bureaucrat const &buru) const
{
	if (this->getSignedBool() == false)
		throw FormNeedsToBeSignedException();
	else if ((int)buru.getGrade() > this->getExecgrade())
		throw Bureaucrat::GradeTooLowException();
	else
	{
		std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
	}
}

std::ostream &operator<<(std::ostream &out, PresidentialPardonForm *pForm)
{
	if (pForm->getSignedBool() == true)
	{
		out << "The Form: " << pForm->getName() << " is signed. ";
		out << "Signing Grade is: " << pForm->getSignedGrade();
		out << ". Execution Grade is: " << pForm->getExecgrade() << std::endl;
	}
	else
	{
		out << "The Form: " << pForm->getName() << " is not signed. ";
		out << "Signing Grade is: " << pForm->getSignedGrade();
		out << ". Execution Grade is: " << pForm->getExecgrade() << std::endl;
	}
	return (out);
}
