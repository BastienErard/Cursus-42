/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berard <berard@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 17:18:12 by berard            #+#    #+#             */
/*   Updated: 2024/03/15 10:40:35 by berard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int	main(int argc, char *argv[])
{
	if (argc != 2)
	{
			std::cerr << "Please pass only one argument as a parameter (input.txt)" << std::endl;
			return (1);
	}
	try
	{
		BitcoinExchange	bitcoin("data.csv");
		bitcoin.processingInput(argv[1]);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
		return (1);
	}
	return (0);
}
