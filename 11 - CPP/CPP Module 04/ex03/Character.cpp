/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berard <berard@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 18:12:10 by tastybao          #+#    #+#             */
/*   Updated: 2023/10/20 16:57:54 by berard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void) : _name("DefaultName")
{
	int	i = -1;

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
	int	i = -1;

	std::cout << "Character " << _name << " constructor called" << std::endl;

	while (++i < 4)
	{
		_inventory[i] = nullptr;
		_ground[i] = nullptr;
	}
	return;
}

Character::Character(Character const &src)
{
	int	i = -1;

	std::cout << "Character copy constructor called" << std::endl;

	_name = src._name;
	while (++i < 4)
	{
		if (src._inventory[i])
			_inventory[i] = src._inventory[i]->clone();
		else
			_inventory[i] = nullptr;
		if (src._ground[i])
			_ground[i] = src._ground[i]->clone();
		else
			_ground[i] = nullptr;
	}
	return ;
}

Character::~Character(void)
{
	int	i = -1;

	std::cout << "Character " << _name << " destructor called" << std::endl;

	while (++i < 4)
	{
		delete _inventory[i];
		delete _ground[i];
	}
	return;
}

Character	&Character::operator=(Character const &rhs)
{
	int	i = -1;

	std::cout << "Character copy assignment operator called" << std::endl;

	_name = rhs._name;
	while (++i < 4)
	{
		if (_inventory[i])
		{
			delete _inventory[i];
			_inventory[i] = nullptr;
		}
		if (_ground[i])
		{
			delete _ground[i];
			_ground[i] = nullptr;
		}
		if (rhs._inventory[i])
			_inventory[i] = rhs._inventory[i]->clone();
		if (rhs._ground[i])
			_ground[i] = rhs._ground[i]->clone();
	}
	return *this;
}

std::string const	&Character::getName(void) const
{
	return _name;
}

void	Character::equip(AMateria *m)
{
	int	i = -1;

	if (!m)
	{
		std::cout << "* this element is not known to the player *" << std::endl;
		return ;
	}
	while (++i < 4)
	{
		if (!_inventory[i])
		{
			_inventory[i] = m;
			std::cout << _name << " equip the " << m->getType();
			std::cout << " material in the slot number " << i << "." << std::endl;
			return;
		}
	}
	std::cout << _name << " can not equip the " << m->getType();
	std::cout << " material. Inventory is full." << std::endl;
	return;
}

void	Character::unequip(int idx)
{
	if (idx < 0 || idx > 3)
	{
		std::cout << "* There is no slot " << idx << ". *" << std::endl;
		return;
	}
	if (!_inventory[idx])
	{
		std::cout << "* There's nothing to unequip at the slot ";
		std::cout << "number " << idx << ". *" << std::endl;
		return;
	}
	int	i = -1;
	while (++i < 4)
	{
		if (!_ground[i])
		{
			_ground[i] = _inventory[idx]->clone();
			delete _inventory[idx];
			_inventory[idx] = nullptr;
			std::cout << "* " << getName() << "unequipped ";
			std::cout << _ground[i]->getType() << ". *" << std::endl;
			return;
		}
	}
	delete _ground[0];
	_ground[0] = _inventory[idx]->clone();
	delete _inventory[idx];
	_inventory[idx] = nullptr;
	std::cout << "* " << getName() << "unequipped ";
	std::cout << _ground[0]->getType() << ". *" << std::endl;
	return;
}

void	Character::use(int idx, ICharacter &target)
{
	if (idx < 0 || idx > 3 || !_inventory[idx])
	{
		std::cout << "* There is nothing in the " << idx << " slot. *" << std::endl;
		return;
	}
	_inventory[idx]->use(target);
	return;
}
