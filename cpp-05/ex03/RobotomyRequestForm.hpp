/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaddou <hakaddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 18:37:50 by hakaddou          #+#    #+#             */
/*   Updated: 2023/11/21 19:19:41 by hakaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include <cstdlib>


class Bureaucrat;

class AForm;

class	RobotomyRequestForm: public AForm {
private:
	std::string const	_target;

	RobotomyRequestForm();
public:
	RobotomyRequestForm(std::string const &target);
	RobotomyRequestForm(RobotomyRequestForm const &other);
	RobotomyRequestForm &operator=(RobotomyRequestForm const &other);
	~RobotomyRequestForm();

	std::string getTarget() const;
	virtual void execute(Bureaucrat const &buru) const;
};

std::ostream &operator<<(std::ostream &out, RobotomyRequestForm *rForm);