/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tastybao <tastybao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 18:29:01 by tastybao          #+#    #+#             */
/*   Updated: 2024/03/26 14:10:09 by tastybao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int	main(int argc, char *argv[])
{
	if (argc <= 2)
	{
		std::cerr << "Error - please pass a positive integer sequence as argument" << std::endl;
		return (1);
	}
	try
	{
		std::deque<int>		deque_pre_sort;
		std::vector<int>	vector_pre_sort;
		for (int i = 1; i < argc; i++)
		{
			long int	value;
			char		*endptr;
			value = std::strtol(argv[i], &endptr, 10);
			if (*endptr != '\0')
				throw std::invalid_argument("Error - Format of an argument is incorrect. Please pass only a positive integer sequence");
			if (value < 0 || value > INT_MAX)
				throw std::invalid_argument("Error - The value of an argument is not within the range of a positive int");
			int	int_value = static_cast<int>(value);
			deque_pre_sort.push_back(int_value);
			vector_pre_sort.push_back(int_value);
		}
		PmergeMe	merge(deque_pre_sort, vector_pre_sort);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
		return (1);
	}
	return (0);
}
