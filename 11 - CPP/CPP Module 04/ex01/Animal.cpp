/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berard <berard@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 17:25:18 by berard            #+#    #+#             */
/*   Updated: 2023/10/13 14:55:29 by berard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) : _type("Animal")
{
	std::cout << _type << " name constructor called" << std::endl;
	return;
}

Animal::Animal(std::string type) : _type(type)
{
	std::cout << "Uber " << _type << " constructor called" << std::endl;
	return;
}

Animal::Animal(Animal const & src)
{
	std::cout << _type << " name copy constructor called" << std::endl;
	*this = src;
	return;
}

Animal::~Animal(void)
{
	std::cout << _type << " name destructor called" << std::endl;
	return;
}

Animal	&Animal::operator=(Animal const & rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	_type = rhs._type;

	return *this;
}

void	Animal::makeSound(void) const
{
	std::cout << "This animal is mute." << std::endl;
	return;
}

std::string	Animal::getType(void) const
{
	return _type;
}
