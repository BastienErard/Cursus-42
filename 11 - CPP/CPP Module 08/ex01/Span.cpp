/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tastybao <tastybao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 18:59:52 by tastybao          #+#    #+#             */
/*   Updated: 2024/02/20 13:28:27 by tastybao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(void)
{
	_maxSize = 0;
	return;
}

Span::Span(unsigned int n) : _maxSize(n)
{
	return ;
}

Span::Span(Span const & src)
{
	_numbers = src._numbers;
	_maxSize = src._maxSize;
	return ;
}

Span::~Span(void)
{
	return ;
}

Span	&Span::operator=(Span const & rhs)
{
	_numbers = rhs._numbers;
	_maxSize = rhs._maxSize;
	return *this;
}

void			Span::addNumber(int num)
{
	if (_numbers.size() >= _maxSize)
		throw (SpanAlreadyFull());
	_numbers.push_back(num);
	return ;
}

void			Span::addRange(std::vector<int>::iterator it, std::vector<int>::iterator ite)
{
	unsigned int	number = std::distance(it, ite);
	if (_numbers.size() + number > _maxSize)
		throw SpanAlreadyFull();
	std::copy(it, ite, std::back_inserter(_numbers));
	return ;
}

int			Span::shortestSpan(void)
{
	if (_numbers.size() < 2)
		throw (ImpossibleToCompare());
	std::vector<int>	temp = _numbers;
	std::sort(temp.begin(), temp.end());
	int	distance = temp[1] - temp[0];
	for (unsigned int i = 1; i < temp.size(); i++)
	{
		int	ref = temp[i] - temp[i - 1];
		if (ref < distance)
			distance = ref;
	}
	return (distance);
}

int			Span::longestSpan(void)
{
	if (_numbers.size() < 2)
		throw (ImpossibleToCompare());
	std::vector<int>	temp = _numbers;
	std::sort(temp.begin(), temp.end());
	return (temp.back() - temp.front());
}

std::vector<int>	Span::getNumbers(void) const
{
	return (_numbers);
}

unsigned int	Span::getSize(void) const
{
	return (_maxSize);
}
