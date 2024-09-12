/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaddou <hakaddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 15:19:55 by hakaddou          #+#    #+#             */
/*   Updated: 2023/12/04 19:08:20 by hakaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <map>
#include <iomanip>
#include <sstream>
#include <fstream>
#include <string>
#include <ctime>
#include <cstdlib>

class Btc {
private:
	std::map<time_t, double> dataBase;
	std::string csvFile;
	std::string txtFile;
	std::ifstream csvFileStream;
	std::ifstream txtFileStream;
	Btc();
public:
	Btc(std::string csvFile, std::string txtFile);
	Btc(Btc const &other);
	Btc &operator=(Btc const &other);
	~Btc();

	void	fillDataBase();
	time_t	returnTimeValue(std::string dateString);
	std::string reverseTimeValue(time_t timeValue);
	void	printDataBase();
	void	compareValues();

	// getters
	std::string getCsvFile() const;
	std::string getTxtFile() const;
	std::map<time_t, double> getDataBase() const;

	// exception classes
	class CsvFileCantOpenExcpetion: public std::exception
	{
	public:
		virtual const char *what() const throw();
	};
	class TxtFileCantOpenExcpetion: public std::exception
	{
	public:
		virtual const char *what() const throw();
	};
	class CsvFileParsingException: public std::exception
	{
	public:
		virtual const char *what() const throw();
	};
};