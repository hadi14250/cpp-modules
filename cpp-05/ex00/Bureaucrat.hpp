/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaddou <hakaddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 22:38:02 by hakaddou          #+#    #+#             */
/*   Updated: 2023/11/21 10:24:49 by hakaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class Bureaucrat
{
	private:
	std::string const	_name;
	size_t				_grade;

	void _setGrade(int grade);

	public:
		Bureaucrat();
		Bureaucrat(std::string const &name);
		Bureaucrat(std::string const &name, int grade);
		Bureaucrat(Bureaucrat const &other);
		Bureaucrat &operator=(Bureaucrat const &other);
		~Bureaucrat();

		// setters and getters
		std::string const getName() const;
		size_t getGrade() const;

		void	incGrade();
		void	decGrade();

		class GradeTooHighException: public std::exception
		{
			public:
				virtual const char *what() const throw();
		};

		class GradeTooLowException: public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
	
};

std::ostream &operator<<(std::ostream &out, Bureaucrat &other);
