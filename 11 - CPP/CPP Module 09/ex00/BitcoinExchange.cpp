/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tastybao <tastybao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 17:18:10 by berard            #+#    #+#             */
/*   Updated: 2024/03/15 18:32:35 by tastybao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(void)
{
	return ;
}

BitcoinExchange::BitcoinExchange(const std::string file)
{
	std::ifstream	data_csv(file);
	if (!data_csv.is_open())
		throw std::ifstream::failure("Unable to open file csv");
	std::string		line;
	size_t			delimit;
	while (std::getline(data_csv, line))
	{
		if ((delimit = line.find(",")) == std::string::npos)
			throw std::invalid_argument("data.csv incorrect");
		std::string	key = line.substr(0, delimit);
		float		value = std::atof(line.substr(delimit + 1).c_str());
		_csv.insert(std::make_pair(key, value));
	}
	data_csv.close();
}

BitcoinExchange::BitcoinExchange(BitcoinExchange const & src)
{
	// to complete ?
	*this = src;
	return;
}

BitcoinExchange::~BitcoinExchange(void)
{
	return ;
}

BitcoinExchange	&BitcoinExchange::operator=(BitcoinExchange const & rhs)
{
	_csv = rhs._csv;// to complete
	return *this;
}

void							BitcoinExchange::processingInput(char* input)
{
	std::ifstream	input_file(input);
	if (!input_file.is_open())
		throw std::ifstream::failure("Unable to open input file");
	std::string		line;
	// size_t			delimit;
	while (std::getline(input_file, line))
	{
		if (checkFirstLine(line))
			continue;
		if (!checkCorrectFormat(line))
			continue;

		std::cout << line << std::endl;
	}
	input_file.close();
}

bool	BitcoinExchange::checkFirstLine(std::string line)
{
	std::string	titleToFind = "date | value";

	if (line.find(titleToFind) != std::string::npos)
		return (true);
	return (false);
}

bool	BitcoinExchange::checkCorrectFormat(std::string line)
{
	size_t	delimit = line.find('|');
	if (delimit == std::string::npos)
	{
		std::cout << "Error: bad input => " << line << std::endl;
		return (false);
	}
	std::string	date = line.substr(0, delimit);
	std::string	rate = line.substr(delimit + 2);
	if (!checkDate(date))
	{
		std::cout << "Error: bad input => " << line << std::endl;
		return (false);
	}
	if (!checkRate(rate))
		return (false);
	return (true);
}

bool	BitcoinExchange::checkDate(std::string& date)
{
	std::istringstream	iss(date);
	char	delimit;
	int		year;
	int		month;
	int		day;

	iss >> year >> delimit >> month >> delimit >> day;
	if (iss.fail() || iss.eof())
		return (false);
	if (day < 1 || day > 31 || month < 1 || month > 12 || year < 2009 || year > 2024)
		return (false);
	if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30)
		return (false);
	if (month == 2)
	{
		bool	isLeapYear = ((year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)));
		if (isLeapYear && day > 29)
			return (false);
		else if (!isLeapYear && day > 28)
			return (false);
	}
	if (year == 2009 && day == 1)
		return (false);
	return (true);
}

bool	BitcoinExchange::checkRate(std::string& rate)
{
	std::istringstream	iss(rate);
	float	value;
	char	extraChar;

	iss >> std::noskipws >> value >> extraChar;
	if (!iss.eof() || extraChar != '\0')
	{
		std::cerr << "Error: not a float" << std::endl;
		return (false);
	}
	if (value < 0)
	{
		std::cerr << "Error: not a positive number." << std::endl;
		return (false);
	}
	if (value > 1000)
	{
		std::cerr << "Error: too large a number." << std::endl;
		return (false);
	}
		return (true);
}

std::map<std::string, float>	BitcoinExchange::getCsv(void) const
{
	return _csv;
}
