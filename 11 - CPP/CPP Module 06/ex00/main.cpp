/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berard <berard@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 18:08:42 by tastybao          #+#    #+#             */
/*   Updated: 2024/01/24 09:13:57 by berard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int	main(int argc, char *argv[])
{
	if (argc != 2)
		std::cerr << "Please write only one argument. Otherwise, you will receive this message again" << std::endl;
	else
	{
		std::string	str = argv[1];
		ScalarConverter::convert(str);
	}
	return (0);
}
