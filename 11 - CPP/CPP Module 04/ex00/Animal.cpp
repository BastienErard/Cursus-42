/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tastybao <tastybao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 17:25:18 by berard            #+#    #+#             */
/*   Updated: 2023/10/11 20:45:30 by tastybao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) : _type("Animal"), _sound("nothing")
{
	std::cout << _type << " name constructor called" << std::endl;
	return;
}

Animal::Animal(std::string type) : _type(type), _sound("nothing")
{
	std::cout << _type << " name constructor called" << std::endl;
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

Animal	&Animal::operator=(animal const & rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	_type = rhs._type;
	_sound = rhs._sound;

	return *this;
}

void	Animal::makeSound(void)
{
	std::cout << "This animal is mute." << std::endl;
	return;
}
