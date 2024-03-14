/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tastybao <tastybao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 17:18:14 by berard            #+#    #+#             */
/*   Updated: 2024/03/14 19:48:05 by tastybao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

#include <iostream>
#include <map>
#include <fstream>
#include <algorithm>

class BitcoinExchange
{
	public :
		BitcoinExchange(const std::string file);
		BitcoinExchange(BitcoinExchange const & src);
		~BitcoinExchange(void);

		BitcoinExchange	&operator=(BitcoinExchange const & rhs);

		void							processingInput(char* input);

		std::map<std::string, float>	getCsv(void) const;

	private :
		BitcoinExchange(void);
		std::map<std::string, float>	_csv;

};

#endif
