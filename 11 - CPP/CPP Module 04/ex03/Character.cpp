/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tastybao <tastybao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 18:12:10 by tastybao          #+#    #+#             */
/*   Updated: 2023/10/18 18:33:13 by tastybao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void) : _name("DefaultName")
{
	int	i = -1

	std::cout << "Character default constructor called" << std::endl;

	while (++i < 4)
	{
		_inventory[i] = nullptr;
		_ground[i] = nullptr;
	}
	return;
}

Character::Character(std::string name) : _name(name)
{
	int	i = -1

	std::cout << "Character " << _name << " constructor called" << std::endl;

	while (++i < 4)
	{
		_inventory[i] = nullptr;
		_ground[i] = nullptr;
	}
	return;
}

Character::~Character(void)
{
	int	i = -1

	std::cout << "Character " << _name << " destructor called" << std::endl;

	while (++i < 4)
	{
		delete _inventory[i];
		delete _ground[i];
	}
	return;
}

