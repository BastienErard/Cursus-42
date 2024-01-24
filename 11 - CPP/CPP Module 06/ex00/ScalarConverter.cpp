/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berard <berard@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 18:08:51 by tastybao          #+#    #+#             */
/*   Updated: 2024/01/24 09:14:05 by berard           ###   ########.fr       */
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
	std::string	type;

	if (str.empty())
	{
		std::cerr << "The string is invalid (empty). Please try again" << std::endl;
		return;
	}
	if (str == "-inff" || str == "+inff" || str == "nanf" || str == "-inf" || str == "+inf" || str == "nan")
		printSpecialValue(str);
	else
	{
		type = getType(str);
		chooseConvert(type, str);
	}
	return;
}

std::string	ScalarConverter::getType(std::string str)
{
	std::string			type;
	bool				isFloat = false;
	bool				isDouble = false;

	if (std::isalpha(str[0]) && str.size() == 1)
	{
		type = "char";
		return (type);
	}
	for (int i = 0; i < (int)str.length(); i++)
	{
		if ((str[i] == '-' || str[i] == '+') && i == 0)
			i++;
		if (std::isdigit(str[i]))
			continue;
		else if (str[i] == '.' && !isDouble)
			isDouble = true;
		else if (str[i] == 'f' && isDouble && !isFloat)
		{
			isDouble = false;
			isFloat = true;
		}
		else
		{
		type = "error";
		return (type);
		}
	}
	if (isDouble)
		type = "double";
	else if (isFloat)
		type = "float";
	else
		type = "int";
	return (type);
}

void	ScalarConverter::chooseConvert(std::string type, std::string str)
{
	if (type == "char")
		charToOthers(str);
	else if (type == "int")
	{
		int	nb = std::atoi(str.c_str());
		intToOthers(nb);
	}
	else if (type == "float")
	{
		float nb = std::atof(str.c_str());
		floatToOthers(nb);
	}
	else if (type == "double")
	{
		double nb = std::atof(str.c_str());
		doubleToOthers(nb);
	}
	else
		std::cerr << "The conversion seems impossible. Please verify and try again" << std::endl;
	return;
}


void	ScalarConverter::charToOthers(std::string str)
{
	char	c = str[0];

	convertChar(c);
	convertInt(static_cast<int>(c));
	convertFloat(static_cast<float>(c));
	convertDouble(static_cast<double>(c));
	return;
}

void	ScalarConverter::intToOthers(int nb)
{
	convertChar(static_cast<char>(nb));
	convertInt(nb);
	convertFloat(static_cast<float>(nb));
	convertDouble(static_cast<double>(nb));
	return;
}

void	ScalarConverter::floatToOthers(float nb)
{
	convertChar(static_cast<char>(nb));
	convertInt(static_cast<int>(nb));
	convertFloat(nb);
	convertDouble(static_cast<double>(nb));
	return;
}

void	ScalarConverter::doubleToOthers(double nb)
{
	convertChar(static_cast<char>(nb));
	convertInt(static_cast<int>(nb));
	convertFloat(static_cast<float>(nb));
	convertDouble(nb);
	return;
}

void	ScalarConverter::convertChar(char c)
{
	if ((c >= 0 && c <= 32) || c == 127)
		std::cout << "char: Non displayable" << std::endl;
	else if (c < 0 || c > 127)
		std::cout << "char: impossible" << std::endl;
	else
		std::cout << "char: '" << c << "'" << std::endl;
	return;
}

void	ScalarConverter::convertInt(int nb)
{
	if (nb < INT_MIN || nb > INT_MAX)
		std::cout << "int: impossible:" << std::endl;
	else
		std::cout << "int: " << nb << std::endl;
	return;
}

void	ScalarConverter::convertFloat(float nb)
{
	std::cout << "float: " << std::fixed << std::setprecision(1) << nb << "f" << std::endl;
	return;
}

void	ScalarConverter::convertDouble(double nb)
{
	std::cout << "double: " << std::fixed << std::setprecision(1) << nb << std::endl;
	return;
}

void	ScalarConverter::printSpecialValue(std::string str)
{
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	std::cout << "float: " << str << "f" << std::endl;
	std::cout << "double: " << str << std::endl;
	return;
}
