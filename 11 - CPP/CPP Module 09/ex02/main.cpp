/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berard <berard@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 18:29:01 by tastybao          #+#    #+#             */
/*   Updated: 2024/03/22 13:07:42 by berard           ###   ########.fr       */
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
