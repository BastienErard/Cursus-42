/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tastybao <tastybao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 11:45:06 by berard            #+#    #+#             */
/*   Updated: 2023/09/22 17:15:24 by tastybao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type)
{
	return ;
}

Weapon::~Weapon()
{
	return ;
}

std::string const	&Weapon::getType(void)
{
	std::string	&type = _type;
	return (type);
}

void	Weapon::setType(std::string type)
{
	_type = type;
}

