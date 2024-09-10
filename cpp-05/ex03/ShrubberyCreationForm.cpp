/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaddou <hakaddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 17:58:25 by hakaddou          #+#    #+#             */
/*   Updated: 2023/11/21 18:28:29 by hakaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target): AForm("ShrubberyCreationForm", 145, 137), _target(target)
{
	std::cout << "Default Constructor for ShrubberyCreationForm called with target: " << this->_target << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &other): AForm("ShrubberyCreationForm", 145, 137), _target(other.getTarget())
{
	std::cout << "Copy Constructor for ShrubberyCreationForm called with target: " << this->_target << std::endl;
	*this = other;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &other)
{
	std::cout << "Copy Assignment Operator for ShrubberyCreationForm called with target: " << this->_target << std::endl;
	if (this != &other)
		return (*this);
	else
		return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "Destructor Called For ShrubberyCreationForm With Target: " << this->_target << std::endl;
}

std::string ShrubberyCreationForm::getTarget() const
{
	return (this->_target);
}

void ShrubberyCreationForm::execute(Bureaucrat const &buru) const
{
	if (this->getSignedBool() == false)
		throw FormNeedsToBeSignedException();
	else if ((int)buru.getGrade() > this->getExecgrade())
		throw Bureaucrat::GradeTooLowException();
	else
	{
		std::ofstream outfile (this->getTarget().append("_shrubbery").c_str());
		outfile << "\n       *\n";
		outfile << "      /|\\\n";
		outfile << "     /*|*\\\n";
		outfile << "    /  |  \\\n";
		outfile << "   /*--|--*\\\n";
		outfile << "  /   | |   \\\n";
		outfile << " /    | |    \\\n";
		outfile << "/*************\\\n";
		outfile << "      |||\n\n";
		outfile << std::endl;
		outfile.close();
	}
}

std::ostream &operator<<(std::ostream &out, ShrubberyCreationForm *sForm)
{
	if (sForm->getSignedBool() == true)
	{
		out << "The Form: " << sForm->getName() << " is signed. ";
		out << "Signing Grade is: " << sForm->getSignedGrade();
		out << ". Execution Grade is: " << sForm->getExecgrade() << std::endl;
	}
	else
	{
		out << "The Form: " << sForm->getName() << " is not signed. ";
		out << "Signing Grade is: " << sForm->getSignedGrade();
		out << ". Execution Grade is: " << sForm->getExecgrade() << std::endl;
	}
	return (out);
}
