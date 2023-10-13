/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berard <berard@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 17:26:03 by berard            #+#    #+#             */
/*   Updated: 2023/10/13 14:55:25 by berard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal("Dog")
{
	std::cout << _type << " name constructor called" << std::endl;
	_Brain = new Brain();
	return;
}

Dog::Dog(Dog const & src)
{
	std::cout << _type << " name copy constructor called" << std::endl;
	_type = src._type;
	_Brain = new Brain(*src._Brain)
	return;
}

Dog::~Dog(void)
{
	std::cout << _type << " name destructor called" << std::endl;
	delete _Brain;
	return;
}

Dog	&Dog::operator=(Dog const & rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	_type = rhs._type;
	delete _Brain;
	_Brain = new brain(*rhs._Brain);

	return *this;
}

void	Dog::makeSound(void) const
{
	std::cout << _type << " makes this sound : Miaou." << std::endl;
	return;
}

Brain	*Dog::getBrain(void) const
{
	return _Brain;
}
