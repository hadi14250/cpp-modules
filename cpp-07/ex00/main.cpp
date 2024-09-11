/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaddou <hakaddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 14:29:56 by hakaddou          #+#    #+#             */
/*   Updated: 2023/11/29 15:44:27 by hakaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

void	intSwapTest()
{
	int a = 123456;
	int	b = 654321;

	std::cout << "integer Swap test	--->" << std::endl;
	std::cout << "Before, a is: " << a << ", b is: " << b << std::endl;
	::swap(a, b);
	std::cout << "After, a is: " << a << ", b is: " << b << "\n<---\n" << std::endl;


}

void	stringSwapTest()
{
	std::string str1 = "Hadi";
	std::string	str2 = "Kaddoura";

	std::cout << "string swap test	--->" << std::endl;
	std::cout << "Before, str1 is: " << str1 << ", str2 is: " << str2 << std::endl;
	swap(str1, str2);
	std::cout << "After, str1 is: " << str1 << ", str2 is: " << str2 << "\n<---\n" << std::endl;

}

void	floatSwapTest()
{
	float f1 = 123.456f;
	float f2 = 654.321f;

	std::cout << "float swap test	--->" << std::endl;
	std::cout << "Before, f1 is: " << f1 << ", f2 is: " << f2 << std::endl;
	swap(f1, f2);
	std::cout << "After, f1 is: " << f1 << ", f2 is: " << f2 << "\n<---\n" << std::endl;
}

void	classSwapTest()
{
	class classTest
	{
		
		public:
			classTest(std::string name): strInClass(name)
			{
					
			}
			std::string strInClass;
	};

	classTest class1("Hadi");
	classTest class2("Kaddoura");

	std::cout << "class test	--->" << std::endl;
	std::cout << "Before, class1 is: " << class1.strInClass << ", class2 is: " << class2.strInClass << std::endl;
	swap(class1.strInClass, class2.strInClass);
	std::cout << "After, class1 is: " << class1.strInClass << ", class2 is: " << class2.strInClass << "\n<---\n" << std::endl;
}

void	intMinTest()
{
	int int1 = 123;
	int int2 = 654;

	std::cout << "int min test	--->" << std::endl;
	std::cout << "int1 is: " << int1 << ", int2 is: " << int2 << std::endl;
	std::cout << "min value is: " << min(int1, int2) << "\n<---\n" << std::endl;
}

void	floatMinTest()
{
	float f1 = 123.456f;
	float f2 = 654.321f;

	std::cout << "float min test	--->" << std::endl;
	std::cout << "f1 is: " << f1 << ", f2 is: " << f2 << std::endl;
	std::cout << "min value is: " << min(f1, f2) << "\n<---\n" << std::endl;
}

void	intMaxTest()
{
	int int1 = 123;
	int int2 = 654;

	std::cout << "int max test	--->" << std::endl;
	std::cout << "int1 is: " << int1 << ", int2 is: " << int2 << std::endl;
	std::cout << "max value is: " << max(int1, int2) << "\n<---\n" << std::endl;
}

void	floatMaxTest()
{
	float f1 = 123.456f;
	float f2 = 654.321f;

	std::cout << "float max test	--->" << std::endl;
	std::cout << "f1 is: " << f1 << ", f2 is: " << f2 << std::endl;
	std::cout << "max value is: " << max(f1, f2) << "\n<---\n" << std::endl;
}

void	pdfTest()
{
	int a = 2;
	int b = 3;
	swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << max( c, d ) << std::endl;
}

int main()
{
	intSwapTest();
	stringSwapTest();
	floatSwapTest();
	classSwapTest();

	intMinTest();
	floatMinTest();

	intMaxTest();
	floatMaxTest();

	pdfTest();
}