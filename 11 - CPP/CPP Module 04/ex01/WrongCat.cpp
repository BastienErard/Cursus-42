/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Wrongcat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berard <berard@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 17:26:06 by berard            #+#    #+#             */
/*   Updated: 2023/10/12 15:14:38 by berard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal("WrongCat")
{
	std::cout << _type << " name constructor called" << std::endl;
	return;
}

WrongCat::WrongCat(std::string type) : WrongAnimal(type)
{
	std::cout << _type << " name constructor called" << std::endl;
	return;
}

WrongCat::WrongCat(WrongCat const & src)
{
	std::cout << _type << " name copy constructor called" << std::endl;
	*this = src;
	return;
}

WrongCat::~WrongCat(void)
{
	std::cout << _type << " name destructor called" << std::endl;
	return;
}

WrongCat	&WrongCat::operator=(WrongCat const & rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	_type = rhs._type;

	return *this;
}

void	WrongCat::makeSound(void) const
{
	std::cout << _type << " makes this sound : AAAAAAAAA." << std::endl;
	return;
}
