/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaddou <hakaddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 15:19:44 by hakaddou          #+#    #+#             */
/*   Updated: 2023/12/04 19:09:19 by hakaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

Btc::Btc()
{
	
}

Btc::Btc(std::string csvFile, std::string txtFile): csvFile(csvFile),
txtFile(txtFile), csvFileStream(csvFile.c_str()), txtFileStream(txtFile.c_str())
{

	if  (!csvFileStream.is_open())
		throw CsvFileCantOpenExcpetion();
	if (!txtFileStream.is_open())
		throw TxtFileCantOpenExcpetion();
	this->fillDataBase();
}


Btc::Btc(Btc const &other)
{
	*this = other;
}

Btc &Btc::operator=(Btc const &other)
{
	if (this == &other)
		return (*this);
	this->csvFile = other.getCsvFile();
	this->txtFile = other.getTxtFile();
	this->dataBase = other.getDataBase();
	return (*this);
}

Btc::~Btc()
{
	if (txtFileStream.is_open())
		txtFileStream.close();
	if (csvFileStream.is_open())
		csvFileStream.close();
}

std::string Btc::getCsvFile() const
{
	return (this->csvFile);
}

std::string Btc::getTxtFile() const
{
	return (this->txtFile);
}

std::map<time_t, double> Btc::getDataBase() const
{
	return (this->dataBase);
}

const char *Btc::CsvFileCantOpenExcpetion::what() const throw()
{
	return ("\033[31mError opening CSV file\033[0m");
}

const char *Btc::TxtFileCantOpenExcpetion::what() const throw()
{
	return ("\033[31mError opening TXT file\033[0m");
}

const char *Btc::CsvFileParsingException::what() const throw()
{
	return ("\033[31mError Parsing CSV file\033[0m");
}


std::string Btc::reverseTimeValue(time_t timeValue)
{
    std::tm* tmStruct = std::localtime(&timeValue);

    if (tmStruct)
	{
        std::ostringstream dateStream;
        dateStream << tmStruct->tm_year + 1900 << '-';

        if (tmStruct->tm_mon + 1 < 10)
            dateStream << '0';
        
        dateStream << tmStruct->tm_mon + 1 << '-';

        if (tmStruct->tm_mday < 10)
            dateStream << '0';
        
        dateStream << tmStruct->tm_mday;

        return dateStream.str();
    }
	else
        return ("Invalid date");
}

time_t Btc::returnTimeValue(std::string dateString) {
    int year, month, day;

	if (dateString.empty())
		return (-1);

    if (sscanf(dateString.c_str(), "%d-%d-%d", &year, &month, &day) == 3)
	{
		if (year <= 1969)
			return (1969);
        if (year >= 1900 && month >= 1 && month <= 12 && day >= 1 && day <= 31)
		{
            std::tm tmStruct = {};
            tmStruct.tm_year = year - 1900;
            tmStruct.tm_mon = month - 1;
            tmStruct.tm_mday = day;
            time_t timeValue = std::mktime(&tmStruct);
            return (timeValue);
        }
		else
            return (-1);
    }
	else
        return (-1);
}

void	Btc::fillDataBase()
{
	std::string	line;
	std::string	dateString;
	double		value;
    while (std::getline(csvFileStream, line))
	{
		std::stringstream ss(line);
		std::getline(ss, dateString, ',');
		if (dateString == "date")
			continue;
		ss >> value;
		time_t timeValue = this->returnTimeValue(dateString);
        if (timeValue == -1)
			throw Btc::CsvFileParsingException();
        this->dataBase.insert(std::make_pair(timeValue, value));
    }
}

bool isValidNumber(const std::string &str)
{
	double value;
	char remaining;

	if (str.empty())
		return false;
	std::istringstream ss(str);
	if (!(ss >> value) || (ss >> std::ws && ss.get(remaining)))
		return false;
	return true;
}

int	parseError(std::string dateString, std::string value, time_t timeValue, std::string line)
{
	double valueDouble;

    if (isValidNumber(value))
        valueDouble = std::atof(value.c_str());
	else 
	{
		std::cout << "Error: bad input => " << line << std::endl;
		return (-1);
	}

	if (!value.empty())
		valueDouble = std::atof(value.c_str());
	if (line.find('|') == std::string::npos || value.empty())
	{
		std::cout << "Error: bad input => " << line << std::endl;
		return (-1);
	}
	if (timeValue <= 0)
	{
		std::cout << "Error: bad input => " << dateString << std::endl;
		return (-1);
	}
	if (timeValue == 1969)
	{
		std::cout << "Error: invalid registery, can't fall back => " << dateString << std::endl;
		return (-1);
	}
	else if (valueDouble < 0)
	{
		std::cout << "Error: not a positive number." << std::endl;
		return (-1);
	}
	else if (valueDouble > 1000)
	{
		std::cout << "Error: too large a number." << std::endl;
		return (-1);
	}
	else
		return (1);
}

void	printComparison(std::map<time_t, double> dataBase, Btc &btc, time_t timeValue, double multiplicationFactor)
{
	
	std::map<time_t, double>::const_iterator it = dataBase.find(timeValue);
	if (it != dataBase.end())
	{
		std::cout << btc.reverseTimeValue(timeValue) << " => " << multiplicationFactor << " = " << it->second * multiplicationFactor << std::endl;
		return ;
	}
	else
	{
		it = dataBase.lower_bound(timeValue);
		if (it == dataBase.begin())
			std::cout << "Error: invalid registery, can't fall back => " << btc.reverseTimeValue(timeValue) << std::endl;
		else if (--it == dataBase.end())
			std::cout << btc.reverseTimeValue(timeValue) << " => " << multiplicationFactor << " = " << it->second * multiplicationFactor << std::endl;
		else
			std::cout << btc.reverseTimeValue(timeValue) << " => " << multiplicationFactor << " = " << it->second * multiplicationFactor << std::endl;
	}
}

void	Btc::compareValues()
{
	std::string	line;
	std::string	dateString;
	std::string	multiplicationFactor;
	int			i;
	double		valueDouble;

	// to skip over the first line
	i = -1;
    while (std::getline(txtFileStream, line))
	{
		std::stringstream ss(line);
		std::getline(ss, dateString, '|');
		if (line.empty() || ++i == 0)
			continue;
		ss >> multiplicationFactor;
		time_t timeValue = this->returnTimeValue(dateString);
        if (parseError(dateString, multiplicationFactor, timeValue, line) != -1)
		{
			valueDouble = std::atof(multiplicationFactor.c_str());
			printComparison(this->dataBase, *this, timeValue,valueDouble);
		}
    }
}

void	Btc::printDataBase()
{
	for (std::map<time_t, double>::iterator i = this->dataBase.begin(); i != this->dataBase.end(); i++)
	{
		std::cout << "Date String: " << this->reverseTimeValue(i->first)
		<< " | Value: " << i->second
		<< " | Time value: " << i->first
		<< std::endl;	
	}
}
