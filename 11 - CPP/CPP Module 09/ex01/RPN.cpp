/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tastybao <tastybao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 14:18:16 by tastybao          #+#    #+#             */
/*   Updated: 2024/03/19 18:28:21 by tastybao         ###   ########.fr       */
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
		if ((i % 2 != 0 && param[i] != ' ') || (i + 1 == length && param[i] == ' ') || (i + 1 < length && param[i] == ' ' && param[i + 1] == ' '))
			throw std::invalid_argument("Invalid argument format - Please pass an argument consisting of a character followed by a space, etc...");
		if (param[i] == ' ')
			continue;
		checkCharacter(param[i]);
		processingStack(param[i]);
	}
	displayResult();
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
	_stackRPN = rhs._stackRPN;
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
	if (_stackRPN.size() < 2)
		throw std::invalid_argument("Insufficient numbers in the stack to do the operation");

	long	a;
	long	b;
	long	result = 0;

	b = _stackRPN.top();
	_stackRPN.pop();
	a = _stackRPN.top();
	_stackRPN.pop();

	if (c == '+')
		result = a + b;
	else if (c == '-')
		result = a - b;
	else if (c == '*')
		result = a * b;
	else if (c == '/')
	{
		if (b == 0)
			throw std::invalid_argument("Division by 0 is not allowed");
		result= a / b;
	}
	if (result < INT_MIN || result > INT_MAX)
		throw std::invalid_argument("The result is not within the scope of an int");
	_stackRPN.push(result);
	return;
}

void	RPN::displayResult(void)
{
	if (_stackRPN.size() > 1)
		throw std::invalid_argument("Too many numbers left in the stack");
	else if (_stackRPN.size() == 0)
		throw std::invalid_argument("No number has been passed as parameter");
	long	result = _stackRPN.top();
	_stackRPN.pop();
	std::cout << result << std::endl;
	return;
}

std::stack<long>	RPN::getStack(void) const
{
	return _stackRPN;
}
