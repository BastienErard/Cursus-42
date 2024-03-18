/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berard <berard@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 14:18:16 by tastybao          #+#    #+#             */
/*   Updated: 2024/03/18 17:22:38 by berard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN(void)
{
	return ;
}

RPN::RPN(std::string param)
{
	size_t	length = param.length();

	if (length == 0)
		throw std::invalid_argument("Empty parameter - Please pass a parameter using inverted Polish notation.");
	for (size_t i = 0; i < length; i++)
	{
		if (i % 2 != 0 && param[i] != ' ')
			throw std::invalid_argument("Expected space - Invalid argument format");
		if (param[i] == ' ')
			continue;
		checkCharacter(param[i]);
		processingStack(param[i]);
	}
	std::cout << param << std::endl;
}

RPN::RPN(RPN const & src)
{
	*this = src;
	return ;
}

RPN::~RPN(void)
{
	return ;
}

RPN	&RPN::operator=(RPN const & rhs)
{
	(void) rhs;
	return *this;
}

void	RPN::checkCharacter(char c)
{
	if ((c < '0' || c > '9') && (c != '+' && c != '-' && c != '*' && c != '/'))
		throw std::invalid_argument("Please use a number between 0 and 9 or the operators +, -, * and / only.");
	return ;
}

void	RPN::processingStack(char c)
{
	if (c >= '0' && c <= '9')
	{
		long	num = c - '0';
		_stackRPN.push(num);
	}
	else
		calculation(c);
}

void	RPN::calculation(char c)
{
	return;
}

std::stack<long>	RPN::getStack(void) const
{
	return _stackRPN;
}
