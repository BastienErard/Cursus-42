/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tastybao <tastybao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 17:18:14 by berard            #+#    #+#             */
/*   Updated: 2024/03/15 18:14:07 by tastybao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

#include <iostream>
#include <map>
#include <fstream>
#include <sstream>
#include <algorithm>

class BitcoinExchange
{
	public :
		BitcoinExchange(const std::string file);
		BitcoinExchange(BitcoinExchange const & src);
		~BitcoinExchange(void);

		BitcoinExchange	&operator=(BitcoinExchange const & rhs);

		void							processingInput(char* input);
		bool							checkFirstLine(std::string line);
		bool							checkCorrectFormat(std::string line);
		bool							checkDate(std::string& date);
		bool							checkRate(std::string& rate);

		std::map<std::string, float>	getCsv(void) const;

	private :
		BitcoinExchange(void);
		std::map<std::string, float>	_csv;

};

#endif
