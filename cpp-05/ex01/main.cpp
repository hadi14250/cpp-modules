/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaddou <hakaddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 23:28:21 by hakaddou          #+#    #+#             */
/*   Updated: 2023/11/21 15:59:07 by hakaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

void	testConstructor()
{
	Bureaucrat hadi;
	std::cout << hadi;
	
	Bureaucrat* hadi2 = new Bureaucrat("Hadididi");
	std::cout << hadi;
	delete hadi2;
}

void	testConstructorWithTooLowGrade()
{
	try
	{
		Bureaucrat hadi("Hadi", 250);
	}
	catch (std::exception & e)
	{
		std::cout << "exception: " << e.what() << std::endl;
	}
}

void	testConstructorWithTooHighGrade()
{
	try
	{
		Bureaucrat hadi("Hadi", -250);
	}
	catch (std::exception & e)
	{
		std::cout << "exception: " << e.what() << std::endl;
	}
}

void	shouldPass()
{
	Bureaucrat	buru("Hadi", 100);
	Form		form("Medical", 150, 150);
	std::cout << &form;
	try
	{
		form.beSigned(buru);
	}
	catch (std::exception &e)
	{
		std::cout << "\033[31mException Occured " << e.what() << "\033[0m" << std::endl;
	}
}

void	shouldFail()
{
	Bureaucrat	buru("Hadi", 100);
	Form		form("Medical", 99, 99);
	std::cout << &form;
	try
	{
		form.beSigned(buru);
	}
	catch (std::exception &e)
	{
		std::cout << "\033[31mException Occured " << e.what() << "\033[0m" << std::endl;
	}
}

void	shouldPassThenFail()
{
	Bureaucrat buru("Hadi", 50);
	Form form("Medical", 52, 52);
	std::cout << &form;
	try 
	{
		form.beSigned(buru);
	}
	catch (std::exception &e)
	{
		std::cout << "\033[31mException Occured " << e.what() << "\033[0m" << std::endl;
	}
	buru.decGrade();
	buru.decGrade();
	buru.decGrade();
	Form form2("Electric Bill", 52, 52);
	std::cout << &form2;
	try 
	{
		form2.beSigned(buru);
	}
	catch (std::exception &e)
	{
		std::cout << "\033[31mException Occured " << e.what() << "\033[0m" << std::endl;
	}
}

void	formAlreadySigned()
{
	Bureaucrat buru1("Hadi1", 50);
	Bureaucrat buru2("Hadi2", 50);
	Form	form("Medical Bill", 51, 51);
	try
	{
		form.beSigned(buru1);
		form.beSigned(buru2);
	}
	catch(std::exception &e)
	{
		std::cout << "\033[31mException Occured " << e.what() << "\033[0m" << std::endl;
	}
}

int	main(void)
{
	shouldPass();
	shouldFail();
	shouldPassThenFail();
	formAlreadySigned();
}
