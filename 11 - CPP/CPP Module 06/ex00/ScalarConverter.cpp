/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tastybao <tastybao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 18:08:51 by tastybao          #+#    #+#             */
/*   Updated: 2024/01/20 17:06:24 by tastybao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(void)
{
	return;
}

ScalarConverter::ScalarConverter(ScalarConverter const & src)
{
	(void) src;
	return;
}

ScalarConverter::~ScalarConverter(void)
{
	return;
}

ScalarConverter	&ScalarConverter::operator=(ScalarConverter const & rhs)
{
	(void) rhs;
	return *this;
}

void	ScalarConverter::convert(std::string str)
{
	std::string	type = getType(str);
	// to continue
}

std::string	ScalarConverter::getType(std::string str)
{

}
