/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tastybao <tastybao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 17:18:10 by berard            #+#    #+#             */
/*   Updated: 2024/03/17 13:55:55 by tastybao         ###   ########.fr       */
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
	*this = src;
	return;
}

BitcoinExchange::~BitcoinExchange(void)
{
	return ;
}

BitcoinExchange	&BitcoinExchange::operator=(BitcoinExchange const & rhs)
{
	_csv = rhs._csv;
	return *this;
}

void							BitcoinExchange::processingInput(char* input)
{
	std::ifstream	input_file(input);
	if (!input_file.is_open())
		throw std::ifstream::failure("Unable to open input file");
	std::string		line;
	while (std::getline(input_file, line))
	{
		if (checkFirstLine(line))
			continue;
		if (!checkCorrectFormat(line))
			continue;
		calculateRate(line);
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
	char	*endptr;

	strtod(rate.c_str(), &endptr);
	if (rate.empty() || rate.c_str() == endptr || *endptr != '\0')
	{
		std::cerr << "Error: not a float" << std::endl;
		return (false);
	}
	float	value = atof(rate.c_str());
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

void	BitcoinExchange::calculateRate(std::string& line)
{
	size_t	delimit = line.find('|');
	std::string	date = line.substr(0, delimit - 1);
	std::string	rate = line.substr(delimit + 2);
	float	f_rate = atof(rate.c_str());

	std::map<std::string, float>::iterator it = _csv.find(date);
	if (it != _csv.end())
		std::cout << date << " => " << f_rate << " = " << f_rate * it->second << std::endl;
	else
	{
		it = _csv.lower_bound(date);
		--it;
		std::cout << date << " => " << f_rate << " = " << f_rate * it->second << std::endl;
	}
	return ;
}

std::map<std::string, float>	BitcoinExchange::getCsv(void) const
{
	return _csv;
}
