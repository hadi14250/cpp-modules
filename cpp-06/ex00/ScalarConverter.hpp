/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaddou <hakaddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 01:03:01 by hakaddou          #+#    #+#             */
/*   Updated: 2023/11/28 06:02:08 by hakaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <iomanip>

#define UNDER_LINE "\033[4m"
#define ESC_TEXT_FORMAT "\033[0m"


class ScalarConverter
{
private:
	ScalarConverter();
	ScalarConverter(ScalarConverter const &other);
	ScalarConverter &operator=(ScalarConverter const &other);
	~ScalarConverter();

public:
	static void convert(std::string const &input);
};
