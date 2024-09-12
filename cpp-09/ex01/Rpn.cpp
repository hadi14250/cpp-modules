/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Rpn.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaddou <hakaddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 03:27:59 by hakaddou          #+#    #+#             */
/*   Updated: 2023/12/04 19:17:20 by hakaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Rpn.hpp"

Rpn::Rpn()
{

}

Rpn::Rpn(std::string input): input(input)
{
    try
	{
    	std::cout << this->evaluatePostfix() << std::endl;
    }
	catch (std::exception& e)
	{
        std::cerr << "Error: " << e.what() << std::endl;
    }
}

Rpn::Rpn(Rpn const &other)
{
	*this = other;
}

Rpn &Rpn::operator=(Rpn const &other)
{
	if (this == &other)
		return (*this);
	this->rpnStack = other.getRpnStack();
	this->input = other.getInput();
	return (*this);
}

std::string Rpn::getInput() const
{
	return (input);
}

std::stack<int, std::list<int> > Rpn::getRpnStack() const
{
	return (rpnStack);
}

bool isOperator(char c)
{
    return c == '+' || c == '-' || c == '*' || c == '/';
}

int performOperation(int operand1, int operand2, char op)
{
    switch (op)
	{
        case '+':
            return (operand1 + operand2);
        case '-':
            return (operand1 - operand2);
        case '*':
            return (operand1 * operand2);
        case '/':
            if (operand2 != 0)
                return (operand1 / operand2); 
			else
                throw std::runtime_error("Division by zero");
        default:
            throw std::invalid_argument("Invalid operator");
    }
}

int	Rpn::evaluatePostfix()
{
    std::string			token;
	int					operand1;
	int					operand2;
	int					intValue;
	
	std::istringstream iss(this->input);
    while (iss >> token)
	{
        if (std::isdigit(token[0]) || (token.size() > 1 && token[0] == '-' && std::isdigit(token[1])))
		{
            intValue = std::atoi(token.c_str());
            if (intValue < 10)
                this->rpnStack.push(intValue);
            else
                throw std::invalid_argument("Number is not less than 10: " + token);
        }
		else if (isOperator(token[0]))
		{
            if (this->rpnStack.size() < 2)
                throw std::invalid_argument("Insufficient operands for operator");
            operand2 = this->rpnStack.top();
            this->rpnStack.pop();
            operand1 = this->rpnStack.top();
            this->rpnStack.pop();
            this->rpnStack.push(performOperation(operand1, operand2, token[0]));
        }
		else
            throw std::invalid_argument("Invalid token: " + token);
    }
    if (this->rpnStack.size() != 1)
        throw std::invalid_argument("Invalid postfix expression");
    return (this->rpnStack.top());
}
