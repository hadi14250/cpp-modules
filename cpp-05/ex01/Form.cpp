/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaddou <hakaddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 13:46:04 by hakaddou          #+#    #+#             */
/*   Updated: 2023/11/21 15:58:13 by hakaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(): _name("NO_NAME"), _signed(false), _signGrade(150), _execGrade(150)
{
	std::cout << "Form default constructor called" << std::endl;
}

Form::Form(std::string const &name): _name(name), _signed(false), _signGrade(150), _execGrade(150)
{
	std::cout << "Form Param constructor called for: " << name << std::endl;
}

Form::Form(int signGrade, int execGrade): _name("NO_NAME"), _signed(false), _signGrade(signGrade), _execGrade(execGrade)
{
	std::cout << "Form Param constructor called" << std::endl;
	this->_checkGrades(signGrade, execGrade);
}

Form::Form(std::string const &name, int signGrade, int execGrade): _name(name), _signed(false), _signGrade(signGrade), _execGrade(execGrade)
{
	std::cout << "Form Param constructor called for: " << name << std::endl;
	this->_checkGrades(signGrade, execGrade);
}

Form::Form(Form const &other): _name(other.getName()), _signed(other.getSignedBool()), _signGrade(other.getSignedGrade()), _execGrade(other.getExecgrade())
{
	std::cout << "Form Copy constructor called for: " << this->_name << std::endl;
	*this = other;
}

Form::~Form()
{
	std::cout << "Form Desctructor Called for: " << this->_name << std::endl;
}

Form &Form::operator=(Form const &other)
{
	std::cout << "Form Assignation Operator Called" << std::endl;
	if (this != &other)
		return (*this);
	else
		return (*this);
}

std::string const Form::getName() const
{
	return (this->_name);
}

bool	Form::getSignedBool() const
{
	return (this->_signed);
}

int		Form::getSignedGrade() const
{
	return (this->_signGrade);
}

int		Form::getExecgrade() const
{
	return (this->_execGrade);
}

void Form::_checkGrades(int signGrade, int execGrade)
{
	if (signGrade < 1 || execGrade < 1)
		throw Form::GradeTooHighException();
	else if (signGrade > 150 || execGrade > 150)
		throw Form::GradeTooLowException();
}

const char *Form::GradeTooHighException::what() const throw()
{
	return ("Grade too high");
}

const char *Form::GradeTooLowException::what() const throw()
{
	return ("Grade too low");
}

void	Form::beSigned(Bureaucrat &buru)
{
	if (((int)(buru.getGrade()) > ((int)(this->_signGrade))))
		throw Form::GradeTooLowException();
	if (this->_signed != true)
	{
		std::cout << "\033[32m" << buru.getName() <<  " Signed " << "Form " << this->getName() << "\033[0m" << std::endl;
		this->_signed = true; 
	}
	else
		std::cout << buru.getName() <<  " couldn’t sign " << "Form " << this->getName() << " because it's already signed" << std::endl;
}

std::ostream &operator<<(std::ostream &out, Form *form)
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