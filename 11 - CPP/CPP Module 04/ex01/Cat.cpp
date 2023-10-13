/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berard <berard@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 17:25:20 by berard            #+#    #+#             */
/*   Updated: 2023/10/13 14:55:26 by berard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal("Cat")
{
	std::cout << _type << " name constructor called" << std::endl;
	_Brain = new Brain();
	return;
}

Cat::Cat(Cat const & src)
{
	std::cout << _type << " name copy constructor called" << std::endl;
	_type = src._type;
	_Brain = new Brain(*src._Brain)
	return;
}

Cat::~Cat(void)
{
	std::cout << _type << " name destructor called" << std::endl;
	delete _Brain;
	return;
}

Cat	&Cat::operator=(Cat const & rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	_type = rhs._type;
	delete _Brain;
	_Brain = new brain(*rhs._Brain);

	return *this;
}

void	Cat::makeSound(void) const
{
	std::cout << _type << " makes this sound : Miaou." << std::endl;
	return;
}

Brain	*Cat::getBrain(void) const
{
	return _Brain;
}
