/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaddou <hakaddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 01:18:09 by hakaddou          #+#    #+#             */
/*   Updated: 2023/11/28 06:02:02 by hakaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

void	printData(bool nanFlag, std::string const &data, char c, int i, float fl, double dub);

void	printError(std::string const &data)
{
	std::cout << "The Data: " 
	<< '"' << UNDER_LINE << data << ESC_TEXT_FORMAT << '"'
	<< " can't be converted" << std::endl;
}

bool isSpecialChar(std::string const &data)
{
	return (data.length() == 1 &&	(data[0] == '+' || data[0] == '-' || data[0] == '.' || data[0] == 'f'));
}

bool sigNumNotOne(std::string const &data)
{
	return (
			(std::count(data.begin(), data.end(), '+'))
			+
			(std::count(data.begin(), data.end(), '-'))
			> 1);
}

bool isInt(std::string const &data)
{
	if (data[0] == '+' || data[0] == '-')
		return std::all_of(data.begin() + 1, data.end(), isdigit);
	else
		return std::all_of(data.begin(), data.end(), isdigit);
}

bool isDouble(std::string const &data)
{
	if ((std::count(data.begin(), data.end(), '.') == 1))
			return (true);
	else
		return(false);
}

bool nanFlag(std::string const &data)
{
	return (data == "+inf" || data == "-inf" || data == "nan" || data == "nanf" || data == "+inff" || data == "-inff" || data == "inf" || data == "inff");
}

bool checkDoubleData(std::string const &data)
{
	if (data.find_first_of(".") != data.find_last_of(".")
		|| isdigit(data[data.find_first_of(".") + 1]) == false
		|| data.find_first_of(".") == 0)
		return (false);
	else
		return (true);
}

bool isFloat(std::string const &data)
{
	return (data.find("f") != std::string::npos);
}

bool checkFloatData(std::string const &data)
{
	if (
		data.find(".f") != std::string::npos
			|| data.find("f.") != std::string::npos
			|| 1 < (std::count(data.begin(), data.end(), 'f'))
			|| 1 < (std::count(data.begin(), data.end(), '.'))
			|| !isdigit(data[data.find(".") - 1])
			|| !isdigit(data[data.find(".") + 1])
			|| 'f' != (data[data.length() - 1])
		)
		return (false);
	else
		return (true);
}

bool isChar(std::string const &data)
{
	return ((data[0] >= 32 && data[0] <= 126 && data.length() == 1));
}

void initCharConversion(std::string const &data)
{
	char	charData = static_cast<unsigned char>(data[0]);
	int		intData = static_cast<int>(charData);
	float	floadData = static_cast<float>(charData);
	double	doubleData = static_cast<double>(charData);
	printData(false, data, charData, intData, floadData, doubleData);
}

void initIntConversion(std::string const &data)
{
	int		intData = std::atoi(data.c_str());
	float	floadData = static_cast<float>(intData);
	double	doubleData = static_cast<double>(intData);
	char	charData = static_cast<unsigned char>(intData);
	printData(false, data, charData, intData, floadData, doubleData);
}

void initFloatConversion(std::string const &data)
{
	float	floadData = std::atof(data.c_str());
	int		intData = static_cast<int>(floadData);
	char	charData = static_cast<unsigned char>(floadData);
	double	doubleData = static_cast<float>(floadData);
	printData(false, data, charData, intData, floadData, doubleData);
}

void initDoubleConversion(std::string const &data)
{
	double	doubleData = std::atof(data.c_str());
	int		intData = static_cast<int>(doubleData);
	float	floadData = static_cast<float>(doubleData);
	char	charData = static_cast<unsigned char>(doubleData);
	printData(false, data, charData, intData, floadData, doubleData);
}

void initNanConversion(std::string const &data)
{
	double	nanData = std::atof(data.c_str());
	char	charData = static_cast<unsigned char>(nanData);
	float	floadData = static_cast<float>(nanData);
	int		intData = static_cast<int>(nanData);
	printData(true, data, charData, intData, floadData, nanData);
}

void parseData(std::string const &data)
{
	if (nanFlag(data))
		initNanConversion(data);
	else if (isSpecialChar(data))
		initCharConversion(data);
	else if (sigNumNotOne(data))
		printError(data);
	else if (isInt(data))
		initIntConversion(data);
	else if (isFloat(data) && checkFloatData(data))
		initFloatConversion(data);
	else if (isDouble(data) && checkDoubleData(data))
		initDoubleConversion(data);
	else if (isChar(data))
		initCharConversion(data);
	else
		printError(data);
}

void printChar(bool nanFlag, int i, char c)
{
	if (!nanFlag && (i >= 0 && i <= 255))
	{
		if (std::isprint(i))
			std::cout << "char: '" << c << "'" << std::endl;
		else
			std::cout << "char: Non displayable" << std::endl;
	}
	else
		std::cout << "char: impossible" << std::endl;
}

void printInt(bool nanFlag, std::string const &data, int i)
{
	double check = std::atof(data.c_str());
	
	if (!nanFlag && (check >= INT_MIN && check <= INT_MAX))
		std::cout << "int: " << i << std::endl;
	else
		std::cout << "int: impossible" << std::endl;
}

void printNanInf(std::string const &data, std::string const &type)
{
	if (data == "nan" || data == "nanf")
	{
		std::cout << type << ": nan";
		if (type == "float")
			std::cout << "f";
		std::cout << std::endl;
	}
	else if (data == "+inf" || data == "+inff")
	{
		std::cout << type << ": +inf";
		if (type == "float")
			std::cout << "f";
		std::cout << std::endl;
	}
	else if (data == "-inf" || data == "-inff")
	{
		std::cout << type << ": -inf";
		if (type == "float")
			std::cout << "f";
		std::cout << std::endl;
	}
	else if (data == "inf" || data == "inff")
	{
		std::cout << type << ": inf";
		if (type == "float")
			std::cout << "f";
		std::cout << std::endl;
	}
}

void printFloat(bool nanFlag, std::string const &data, float f)
{
	if (!nanFlag)
	{
		double check = std::atof(data.c_str());

		if (check < INT_MIN || check > INT_MAX)
			std::cout << "float: impossible" << std::endl;
		else
			std::cout << "float: " << std::fixed << std::setprecision(1) << f << "f" << std::endl;
	}
	else
		printNanInf(data, "float");
}

void printDouble(bool nanFlag, std::string const &data, double d)
{
	if (!nanFlag)
	{
		double check = std::atof(data.c_str());

		if (check < INT_MIN || check > INT_MAX)
			std::cout << "double: impossible" << std::endl;
		else
			std::cout << "double: " << std::fixed << std::setprecision(1) << d << std::endl;
	}
	else
		printNanInf(data, "double");
}

void printData(bool nanFlag, std::string const &data, char c, int i, float fl, double dub)
{
	printChar(nanFlag, i, c);
	printInt(nanFlag, data, i);
	printFloat(nanFlag, data, fl);
	printDouble(nanFlag, data, dub);
}


void ScalarConverter::convert(std::string const &data)
{
	parseData(data);
}
