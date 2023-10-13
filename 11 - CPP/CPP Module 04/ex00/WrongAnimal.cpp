/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berard <berard@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 17:25:13 by berard            #+#    #+#             */
/*   Updated: 2023/10/12 15:39:49 by berard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : _type("WrongAnimal")
{
	std::cout << _type << " name constructor called" << std::endl;
	return;
}

WrongAnimal::WrongAnimal(std::string type) : _type(type)
{
	std::cout << "Uber " << _type << " name constructor called" << std::endl;
	return;
}

WrongAnimal::WrongAnimal(WrongAnimal const & src)
{
	std::cout << _type << " name copy constructor called" << std::endl;
	*this = src;
	return;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << _type << " name destructor called" << std::endl;
	return;
}

WrongAnimal	&WrongAnimal::operator=(WrongAnimal const & rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	_type = rhs._type;

	return *this;
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "This animal make a lot of wrong sound." << std::endl;
	return;
}

std::string	WrongAnimal::getType(void) const
{
	return _type;
}
