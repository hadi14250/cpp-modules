/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaddou <hakaddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 23:28:21 by hakaddou          #+#    #+#             */
/*   Updated: 2023/11/21 10:37:19 by hakaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

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

int	main(void)
{
	testConstructor();
	testConstructorWithTooLowGrade();
	testConstructorWithTooHighGrade();
	try
	{
		Bureaucrat hadi("Hadi", 120);
		std::cout << hadi;
		for (int i = 0; i < 160; i++)
			hadi.decGrade();
	}
	catch (std::exception & e)
	{
		std::cout << "exception: " << e.what() << std::endl;
	}
}
