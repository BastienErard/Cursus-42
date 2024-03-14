/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tastybao <tastybao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 17:18:10 by berard            #+#    #+#             */
/*   Updated: 2024/03/14 19:47:34 by tastybao         ###   ########.fr       */
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
		throw std::ifstream::failure("Unable to open file");
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

}

std::map<std::string, float>	BitcoinExchange::getCsv(void) const
{
	return _csv;
}
