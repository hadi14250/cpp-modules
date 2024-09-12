/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Rpn.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaddou <hakaddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 03:19:39 by hakaddou          #+#    #+#             */
/*   Updated: 2023/12/04 21:47:14 by hakaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stack>
#include <list>
#include <string>
#include <sstream>
#include <cctype>
#include <climits>
#include <cstdlib>

class Rpn {
private:
	std::stack<int, std::list<int> > rpnStack;
	std::string input;
	Rpn();
public:
	Rpn(std::string input);
	Rpn(Rpn const &other);
	Rpn &operator=(Rpn const &other);

	// getters
	std::string getInput() const;
	std::stack<int, std::list<int> > getRpnStack() const;

	int	evaluatePostfix();
};

int performOperation(int operand1, int operand2, char op);
bool isOperator(char c);