/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaddou <hakaddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 13:46:04 by hakaddou          #+#    #+#             */
/*   Updated: 2023/11/21 17:19:45 by hakaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(): _name("NO_NAME"), _signed(false), _signGrade(150), _execGrade(150)
{
	std::cout << "Form default constructor called" << std::endl;
}

AForm::AForm(std::string const &name): _name(name), _signed(false), _signGrade(150), _execGrade(150)
{
	std::cout << "Form Param constructor called for: " << name << std::endl;
}

AForm::AForm(int signGrade, int execGrade): _name("NO_NAME"), _signed(false), _signGrade(signGrade), _execGrade(execGrade)
{
	std::cout << "Form Param constructor called" << std::endl;
	this->_checkGrades(signGrade, execGrade);
}

AForm::AForm(std::string const &name, int signGrade, int execGrade): _name(name), _signed(false), _signGrade(signGrade), _execGrade(execGrade)
{
	std::cout << "Form Param constructor called for: " << name << std::endl;
	this->_checkGrades(signGrade, execGrade);
}

AForm::AForm(AForm const &other): _name(other.getName()), _signed(other.getSignedBool()), _signGrade(other.getSignedGrade()), _execGrade(other.getExecgrade())
{
	std::cout << "Form Copy constructor called for: " << this->_name << std::endl;
	*this = other;
}

AForm::~AForm()
{
	std::cout << "Form Desctructor Called for: " << this->_name << std::endl;
}

AForm &AForm::operator=(AForm const &other)
{
	std::cout << "Form Assignation Operator Called" << std::endl;
	if (this != &other)
		return (*this);
	else
		return (*this);
}

std::string const AForm::getName() const
{
	return (this->_name);
}

bool	AForm::getSignedBool() const
{
	return (this->_signed);
}

int		AForm::getSignedGrade() const
{
	return (this->_signGrade);
}

int		AForm::getExecgrade() const
{
	return (this->_execGrade);
}

void AForm::_checkGrades(int signGrade, int execGrade)
{
	if (signGrade < 1 || execGrade < 1)
		throw AForm::GradeTooHighException();
	else if (signGrade > 150 || execGrade > 150)
		throw AForm::GradeTooLowException();
}

const char *AForm::GradeTooHighException::what() const throw()
{
	return ("Grade too high");
}

const char *AForm::GradeTooLowException::what() const throw()
{
	return ("Grade too low");
}

const char *AForm::FormNeedsToBeSignedException::what() const throw()
{
	return ("Form Needs to be signed before executing it");
}


void	AForm::beSigned(Bureaucrat &buru)
{
	if (((int)(buru.getGrade()) > ((int)(this->_signGrade))))
		throw AForm::GradeTooLowException();
	if (this->_signed != true)
	{
		std::cout << "\033[32m" << buru.getName() <<  " Signed " << "Form " << this->getName() << "\033[0m" << std::endl;
		this->_signed = true; 
	}
	else
		std::cout << buru.getName() <<  " couldn’t sign " << "Form " << this->getName() << " because it's already signed" << std::endl;
}

std::ostream &operator<<(std::ostream &out, AForm *form)
{
	if (form->getSignedBool() == true)
	{
		out << "The Form: " << form->getName() << " is signed. ";
		out << "Signing Grade is: " << form->getSignedGrade();
		out << ". Execution Grade is: " << form->getExecgrade() << std::endl;
	}
	else
	{
		out << "The Form: " << form->getName() << " is not signed. ";
		out << "Signing Grade is: " << form->getSignedGrade();
		out << ". Execution Grade is: " << form->getExecgrade() << std::endl;
	}
	return (out);
}