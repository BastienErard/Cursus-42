/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tastybao <tastybao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 18:29:01 by tastybao          #+#    #+#             */
/*   Updated: 2024/03/19 18:37:10 by tastybao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int	main(int argc, char *argv[])
{
	if (argc <= 2)
	{
		std::cerr << "Error - please pass a positive integer sequence as argument" << std::endl;
		return 1;
	}
	return;
}
