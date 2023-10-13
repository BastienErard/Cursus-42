/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berard <berard@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 17:26:03 by berard            #+#    #+#             */
/*   Updated: 2023/10/12 15:20:07 by berard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal("Dog")
{
	std::cout << _type << " name constructor called" << std::endl;
	return;
}

Dog::Dog(std::string type) : Animal(type)
{
	std::cout << _type << " name constructor called" << std::endl;
	return;
}

Dog::Dog(Dog const & src)
{
	std::cout << _type << " name copy constructor called" << std::endl;
	*this = src;
	return;
}

Dog::~Dog(void)
{
	std::cout << _type << " name destructor called" << std::endl;
	return;
}

Dog	&Dog::operator=(Dog const & rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	_type = rhs._type;

	return *this;
}

void	Dog::makeSound(void) const
{
	std::cout << _type << " makes this sound : Waouf." << std::endl;
	return;
}
