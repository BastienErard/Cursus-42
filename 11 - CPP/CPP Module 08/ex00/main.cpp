/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tastybao <tastybao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 12:10:49 by tastybao          #+#    #+#             */
/*   Updated: 2024/02/19 18:56:40 by tastybao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int	main(void)
{
	try
	{
		std::cout << "\033[1;34m--- First example - Success ---\033[0m" << std::endl;
		std::list<int>	list;
		list.push_back(5);
		list.push_back(10);
		list.push_back(15);
		list.push_back(20);
		list.push_back(15);
		easyfind(list, 15);
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

		try
	{
		std::cout << "\033[1;34m--- Second example - Fail ---\033[0m" << std::endl;
		std::list<int>	list;
		list.push_back(5);
		list.push_back(10);
		list.push_back(15);
		list.push_back(20);
		easyfind(list, 3);
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	return (0);
}
