/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaddou <hakaddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 22:49:26 by hakaddou          #+#    #+#             */
/*   Updated: 2023/11/21 18:41:41 by hakaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): _name("NO_NAME"), _grade(150)
{
	std::cout << "Bureaucrat default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string const &name): _name(name), _grade(150)
{
	std::cout << "Bureaucrat parameter constructor for: " << this->_name << " called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string const &name, int grade): _name(name)
{
	std::cout << "Bureaucrat parameter constructor for: " << this->_name << " called" << std::endl;
	this->_setGrade(grade);
}

Bureaucrat::Bureaucrat(Bureaucrat const &other): _name(other._name)
{
	std::cout << "Bureaucrat copy constructor called " << std::endl;
	*this = other;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &other)
{
	std::cout << "Bureaucrat assignment operator called" << std::endl;
	if (this != &other)
	{
		this->_grade = other.getGrade();
		return (*this);	
	}
	else
		return (*this);
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat destructor called for: " << this->_name << std::endl;
}

std::string const Bureaucrat::getName() const
{
	return (this->_name);
}

size_t Bureaucrat::getGrade() const
{
	return (this->_grade);
}

void	Bureaucrat::_setGrade(int grade)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade = grade;
}

void	Bureaucrat::incGrade()
{
	int	currentGrade = this->getGrade();
	currentGrade--;
	this->_setGrade(currentGrade);
}

void	Bureaucrat::decGrade()
{
	int	currentGrade = this->getGrade();
	currentGrade++;
	this->_setGrade(currentGrade);
}

const char	*Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade Too High");
}

const char	*Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade too low");
}

void Bureaucrat::signForm(AForm &form)
{
	form.beSigned(*this);
}

void	Bureaucrat::executeForm(AForm const &form)
{
	form.execute(*this);
}

std::ostream &operator<<(std::ostream &out, Bureaucrat &buru)
{
	out << buru.getName() << ", bureaucrat grade " << buru.getGrade() << std::endl;
	return (out);
}




