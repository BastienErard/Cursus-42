/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tastybao <tastybao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 17:17:36 by tastybao          #+#    #+#             */
/*   Updated: 2023/10/06 19:03:21 by tastybao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _name("ClapTrap"), _HitPoints(10), _EnergyPoints(10), _AttackDamage(0)
{
	std::cout << "A new ClapTrap is created. It is.... " << _name << "!" << std::endl;
	return;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _HitPoints(10), _EnergyPoints(10), _AttackDamage(1)
{
	std::cout << "A new ClapTrap is created. It is.... " << _name << "!" << std::endl;
	return;
}

ClapTrap::ClapTrap(ClapTrap const &src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;

	return;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "Destructor called" << std::endl;
	return;
}

ClapTrap	&operator=(ClapTrap const & rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	_name = rhs._name;
	_HitPoints = rhs._HitPoints;
	_EnergyPoints = rhs._EnergyPoints;
	_AttackDamage = rhs._AttackDamage;

	return *this;
}

void	ClapTrap::attack(const std::string &target)
{
	if (_HitPoints == 0)
		std::cout << "ClapTrap " << _name << " is already dead!" << std::endl;
	else if (_EnergyPoints == 0)
		std::cout << "ClapTrap " << _name << " is out of energy." << std::endl;
	else
	{
		_EnergyPoints--;
		std::cout << "ClapTrap " << _name << " attacks " << target;
		std::cout << " causing " << _AttackDamage << " points of damage!" << std::endl;
	}
	return;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (_HitsPoints == 0)
		std::cout << "ClapTrap " << _name << " is already on the ground. Don't attack a dead body!" << std:endl;
	else
	{
		if (_HitsPoints <= amount)
		{
			std::cout << "ClapTrap " << _name << " is attacked and takes " << amount << " damage. He is dead!" << std::endl;
			_HitsPoints = 0;
		}
		else
		{
			std::cout << "ClapTrap " << _name << " is attacked and takes " << amount << " damage. He is still alive!" << std::endl;
			_HitsPoints -= amount;
		}
	}
	return;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (_Energy > 0 && _HitPoints > 0)
	{
		_Energy--;
		if (amount + _HitPoints >= 10)
		{
			_HitsPoints = 10;
			std::cout << "ClapTrap " << _name << " is now full life!" << std::endl;
		}
		else
		{
			_HitsPoints += amount;
			std::cout << "ClapTrap " << _name << " is restored to " << amount << " hit points!" << std::endl;
		}
	}
	else
		std::cout << "ClapTrap " << _name << " is unable to repair itself..." << std::endl;
	return;
}

void	ClapTrap::getStatus(void) const
{
	std::cout << "ClapTrap " << _name << "has " << _HitPoints << " hit points and " << _EnergyPoints << " energy points left." << std::endl;
	std::cout << "Its attack points are " << _AttackDamage << " ! It is very impressive..." << std::endl;
}
