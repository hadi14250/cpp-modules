/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaddou <hakaddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 18:37:49 by hakaddou          #+#    #+#             */
/*   Updated: 2023/11/21 19:25:48 by hakaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string const &target): AForm("RobotomyRequestForm", 72, 45), _target(target)
{
	std::cout << "Default Constructor for RobotomyRequestForm called with target: " << this->_target << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &other): AForm("RobotomyRequestForm", 72, 45), _target(other.getTarget())
{
	std::cout << "Copy Constructor for RobotomyRequestForm called with target: " << this->_target << std::endl;
	*this = other;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &other)
{
	std::cout << "Copy Assignment Operator for RobotomyRequestForm called with target: " << this->_target << std::endl;
	if (this != &other)
		return (*this);
	else
		return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "Destructor Called For RobotomyRequestForm With Target: " << this->_target << std::endl;
}

std::string RobotomyRequestForm::getTarget() const
{
	return (this->_target);
}

void RobotomyRequestForm::execute(Bureaucrat const &buru) const
{
	if (this->getSignedBool() == false)
		throw FormNeedsToBeSignedException();
	else if ((int)buru.getGrade() > this->getExecgrade())
		throw Bureaucrat::GradeTooLowException();
	else
	{
		std::cout << "dododododododododod...... (drilling noises)" << std::endl;
		std::srand(static_cast<unsigned>(::time(0)));
        int randomValue = std::rand();
        bool success = randomValue % 2 == 0;
        if (success)
            std::cout << _target << " has been robotomized successfully!" << std::endl;
        else
            std::cout << "Robotomy failed for " << _target << "." << std::endl;
	}
}

std::ostream &operator<<(std::ostream &out, RobotomyRequestForm *rForm)
{
	if (rForm->getSignedBool() == true)
	{
		out << "The Form: " << rForm->getName() << " is signed. ";
		out << "Signing Grade is: " << rForm->getSignedGrade();
		out << ". Execution Grade is: " << rForm->getExecgrade() << std::endl;
	}
	else
	{
		out << "The Form: " << rForm->getName() << " is not signed. ";
		out << "Signing Grade is: " << rForm->getSignedGrade();
		out << ". Execution Grade is: " << rForm->getExecgrade() << std::endl;
	}
	return (out);
}
