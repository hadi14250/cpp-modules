/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaddou <hakaddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 13:36:35 by hakaddou          #+#    #+#             */
/*   Updated: 2023/11/21 15:02:56 by hakaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
private:
	std::string	const _name;
	bool	_signed;
	int		_signGrade;
	int		_execGrade;

	void _checkGrades(int signGrade, int execGrade);
public:
		Form();
		Form(std::string const &name);
		Form(int signGrade, int execGrade);
		Form(std::string const &name, int signGrade, int execGrade);
		Form(Form const &other);
		Form &operator=(Form const &other);
		~Form();

		// setters and getters
		std::string const getName() const;
		bool	getSignedBool() const;
		int		getSignedGrade() const;
		int		getExecgrade() const;

		void	beSigned(Bureaucrat &buru);


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

std::ostream &operator<<(std::ostream &out, Form *form);