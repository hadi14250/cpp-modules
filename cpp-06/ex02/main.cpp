/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaddou <hakaddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 05:53:18 by hakaddou          #+#    #+#             */
/*   Updated: 2023/11/28 07:08:21 by hakaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

void	identify(Base * p)
{
	if (dynamic_cast<A *>(p))
		std::cout << "The pointer is a A type." << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "The pointer is a B type." << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << "The pointer is a C type." << std::endl;
}

void	identify(Base & p)
{
	try
	{
		A &a = dynamic_cast<A &>(p);
		(void) a;
		std::cout << "The pointer is of class type A" << std::endl;
	}
	catch (const std::exception& e)
	{	
	}
	try
	{
		B &b = dynamic_cast<B &>(p);
		(void) b;
		std::cout << "The pointer is of class type B" << std::endl;
	}
	catch(const std::exception& e)
	{		
	}
	try
	{
		C &c = dynamic_cast<C &>(p);
		(void) c;
		std::cout << "The pointer is of class type C" << std::endl;
	}
	catch(const std::exception& e)
	{	
	}
}

Base *	generate()
{
	Base *	ptr;
	
	ptr = NULL;
	srand(time(NULL));

	int random = rand();
	
	if (random  % 3 == 0)
	{
		ptr = new A;
		std::cout << "Class of type A was created" << std::endl;
	}
	else if (random % 3 == 1)
	{
		ptr = new B;
		std::cout << "Class of type B was created" << std::endl;
	}
	else
	{
		ptr = new C;
		std::cout << "Class of type C was created" << std::endl;
	}
	return ptr;
}

int	main() {
	Base *	ptr = generate();

	identify(ptr);
	identify(*ptr);

	delete ptr;

	return 0;
}