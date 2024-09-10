/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaddou <hakaddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 13:36:35 by hakaddou          #+#    #+#             */
/*   Updated: 2023/11/21 16:30:11 by hakaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <fstream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm {
private:
	std::string	const _name;
	bool	_signed;
	int		_signGrade;
	int		_execGrade;

	void _checkGrades(int signGrade, int execGrade);
public:
		AForm();
		AForm(std::string const &name);
		AForm(int signGrade, int execGrade);
		AForm(std::string const &name, int signGrade, int execGrade);
		AForm(AForm const &other);
		AForm &operator=(AForm const &other);
		~AForm();

		// setters and getters
		std::string const getName() const;
		bool	getSignedBool() const;
		int		getSignedGrade() const;
		int		getExecgrade() const;

		void	beSigned(Bureaucrat &buru);
		
		virtual void execute(Bureaucrat const &executor) const = 0;

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

		class FormNeedsToBeSignedException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
};

std::ostream &operator<<(std::ostream &out, AForm *form);