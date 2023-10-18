/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berard <berard@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 19:07:06 by tastybao          #+#    #+#             */
/*   Updated: 2023/10/18 13:13:41 by berard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void) : type("Unknowned)")
{
	std::cout << "AMAteria default constructor called" << std::endl;
	return;
}

AMateria::AMateria(std::string const &type) : type(type)
{
	std::cout << "AMateria type constructor called" << std::endl;
	return ;
}

AMateria::AMateria(AMateria const &src)
{
	std::cout << "AMateria copy constructor called" << std::endl;
	*this = src;
	return;
}

AMateria::~AMateria(void)
{
	std::cout << "AMateria destructor called" << std::endl;
	return;
}

AMateria	&AMateria::operator=(AMateria const &rhs)
{
	std::cout << "AMateria copy assignment operator called" << std::endl;
	type = rhs.type;
	return *this;
}

std::string const	&AMateria::getType(void) const
{
	return type;
}

void	AMateria::use(ICharacter &target)
{
	std::cout << "* shoots an " << type << " at " << target.getName() << " *" << std::endl;
	return;
}
