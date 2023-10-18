/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berard <berard@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 11:44:56 by berard            #+#    #+#             */
/*   Updated: 2023/10/18 13:29:11 by berard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice")
{
	std::cout << "Ice default constructor called" << std::endl;
}

Ice::Ice(Ice const &src)
{
	std::cout << "Ice copy constructor called" << std::endl;
	*this = src;
	return;
}

Ice::~Ice(void)
{
	std::cout << "Ice destructor called" << std::endl;
	return;
}

Ice	&Ice::operator=(Ice const &rhs)
{
	std::cout << "Ice copy assignment operator called" << std::endl;
	type = rhs.type;
	return *this;
}

AMateria	*Ice::clone(void) const
{
	return new Ice(*this);
}

void	Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	return;
}

