/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berard <berard@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 17:25:20 by berard            #+#    #+#             */
/*   Updated: 2023/10/12 15:38:17 by berard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal("Cat")
{
	std::cout << _type << " name constructor called " << std::endl;
	return;
}

Cat::Cat(std::string type) : Animal(type)
{
	std::cout << _type << " name constructor called " << std::endl;
	return;
}

Cat::Cat(Cat const & src)
{
	std::cout << _type << " name copy constructor called" << std::endl;
	*this = src;
	return;
}

Cat::~Cat(void)
{
	std::cout << _type << " name destructor called" << std::endl;
	return;
}

Cat	&Cat::operator=(Cat const & rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	_type = rhs._type;

	return *this;
}

void	Cat::makeSound(void) const
{
	std::cout << _type << " makes this sound : Miaou." << std::endl;
	return;
}


