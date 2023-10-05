/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tastybao <tastybao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 18:06:28 by tastybao          #+#    #+#             */
/*   Updated: 2023/10/05 22:52:13 by tastybao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : _n(0)
{
	std::cout << "Default constructor called" << std::endl;
	return;
}

Fixed::Fixed(const int n)
{
	std::cout << "Int constructor called" << std::endl;
	_n = n << _bits;
	return;
}

Fixed::Fixed(const float n)
{
	std::cout << "Float constructor called" << std::endl;
	_n = roundf(n * (1 << _bits));
	return;
}

Fixed::Fixed(Fixed const & src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;

	return;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
	return;
}


Fixed	&Fixed::operator=(Fixed const & rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	_n = rhs.getRawBits();

	return *this;
}

int	Fixed::getRawBits(void) const
{
	return _n;
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	_n = raw;
	return;
}

float	Fixed::toFloat(void) const
{
	return (float)_n / (1 << _bits);
}

int		Fixed::toInt(void) const
{
	return _n >> _bits;
}

std::ostream &operator<<(std::ostream &out, Fixed const & rhs)
{
	out << rhs.toFloat();
	return out;
}
