/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tastybao <tastybao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 19:15:53 by tastybao          #+#    #+#             */
/*   Updated: 2024/02/17 19:41:24 by tastybao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int	main(void)
{
	std::cout << "ARRAY - INT" << std::endl;
	int	ArInt[] = {5, 10, 15};
	iter(ArInt, 3, print<int>);

	std::cout << std::endl << "ARRAY - FLOAT" << std::endl;
	float	ArFloat[] = {4.02f, 13.03f, 42.04f};
	iter(ArFloat, 3, print<float>);

	std::cout << std::endl << "ARRAY - STRING" << std::endl;
	std::string	ArString[] = {"Liste", "Super", "Banane"};
	iter(ArString, 3, print<std::string>);
	return (0);
}
