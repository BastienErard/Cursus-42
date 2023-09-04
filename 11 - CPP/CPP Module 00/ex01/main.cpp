/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tastybao <tastybao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 16:14:01 by tastybao          #+#    #+#             */
/*   Updated: 2023/09/04 15:53:34 by tastybao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main(void)
{
	std::string	input;
	PhoneBook	PhoneBook;

	while (1)
	{
		std::cout << "Please enter a command ; ";
		std::getline(std::cin, input);
		if (input == "ADD")
			PhoneBook.AddContact();
		else if (input == "SEARCH")
			;
		else if (input == "EXIT")
			break;
		else
			std::cout << "Please enter a valid command (ADD, SEARCH, EXIT)";
		std::cout << std::endl;
	}
	return (0);
}
