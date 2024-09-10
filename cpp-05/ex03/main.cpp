/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaddou <hakaddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 17:05:33 by hakaddou          #+#    #+#             */
/*   Updated: 2023/11/24 14:22:20 by hakaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

void	testsForPresidentialPardonForm()
{
	Bureaucrat	hadi("hadi", 1);
	PresidentialPardonForm form("Ali");
	form.beSigned(hadi);
	std::cout << &form;
	std::cout << hadi;
	form.execute(hadi);
	Bureaucrat hadi2("hadi2", 149);
	PresidentialPardonForm form2("Ali2");
	std::cout << &form2;
	std::cout << hadi2;
	try
	{
		form2.beSigned(hadi2);
	}
	catch (std::exception &e)
	{
		std::cout << "Exception: " << e.what() << std::endl;
	}
}

void	testsForShrubberyCreationForm()
{
	Bureaucrat	hadi("hadi", 1);
	ShrubberyCreationForm treeForm("TreeFactory");
	treeForm.beSigned(hadi);
	std::cout << &treeForm;
	std::cout << hadi;
	treeForm.execute(hadi);
	Bureaucrat hadi2("hadi2", 149);
	ShrubberyCreationForm treeForm2("Ali2");
	std::cout << &treeForm2;
	std::cout << hadi2;
	try
	{
		treeForm2.beSigned(hadi2);
	}
	catch (std::exception &e)
	{
		std::cout << "Exception: " << e.what() << std::endl;
	}

	try
	{
		hadi2.executeForm(treeForm2);
	}
	catch (std::exception &e)
	{
		std::cout << "Exception: " << e.what() << std::endl;
	}

	try
	{
		hadi2.signForm(treeForm2);
		hadi2.executeForm(treeForm2);
	}
	catch (std::exception &e)
	{
		std::cout << "Exception: " << e.what() << std::endl;
	}

	try
	{
		hadi.signForm(treeForm2);
		hadi.executeForm(treeForm2);
	}
	catch (std::exception &e)
	{
		std::cout << "Exception: " << e.what() << std::endl;
	}
}

void	testsForRobotomyRequestForm()
{
	Bureaucrat hadi("Hadi", 1);
	RobotomyRequestForm robo("roboReq");
	hadi.signForm(robo);
	hadi.executeForm(robo);
}

AForm*	testsForInterm()
{

	Intern someRandomIntern;
	AForm* rrf;
	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	return (rrf);
}

int main()
{
	testsForPresidentialPardonForm();
	testsForShrubberyCreationForm();
	testsForRobotomyRequestForm();
	
	Bureaucrat buru("Hadi", 1);
	AForm* robotomy = testsForInterm();
	robotomy->beSigned(buru);
	robotomy->execute(buru);
	
}