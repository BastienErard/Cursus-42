/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tastybao <tastybao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 13:24:25 by berard            #+#    #+#             */
/*   Updated: 2023/10/19 17:47:21 by tastybao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void) : type("cure")
{
	std::cout << "Cure default constructor called" << std::endl;
	return;
}

Cure::Cure(Cure const &src)
{
	std::cout << "Cure copy constructor called" << std::endl;
	*this = src;
	return;
}

Cure::~Cure(void)
{
	std::cout << "Cure destructor called" << std::endl;
	return;
}

Cure	&Cure::operator=(Cure const &rhs)
{
	std::cout << "Cure copy assignment operator called" << std::endl;
	type = rhs.type;
	return *this;
}

AMateria	*Cure::clone(void) const
{
	return new Cure(*this);
}

void	Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
	return;
}
