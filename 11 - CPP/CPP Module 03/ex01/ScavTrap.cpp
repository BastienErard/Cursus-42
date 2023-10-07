/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tastybao <tastybao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 19:51:10 by tastybao          #+#    #+#             */
/*   Updated: 2023/10/07 20:39:24 by tastybao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap("Default", 100, 50, 20)
{
	std::cout << "A new ScavTrap is created. It is.... " << _name << "!" << std::endl;
	return;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name, 100, 50, 20)
{
	std::cout << "A new ScavTrap is created. It is.... " << _name << "!" << std::endl;
	return;
}

ScavTrap::ScavTrap(ScavTrap const &src)
{
	std::cout << "Copy constructor called (ScavTrap)" << std::endl;
	*this = src;

	return;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "Destructor called (ScavTrap)" << std::endl;
	return;
}

ScavTrap	&ScavTrap::operator=(ScavTrap const & rhs)
{
	std::cout << "Copy assignment operator called (ScavTrap)" << std::endl;
	_name = rhs._name;
	_HitPoints = rhs._HitPoints;
	_EnergyPoints = rhs._EnergyPoints;
	_AttackDamage = rhs._AttackDamage;

	return *this;
}

void	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << _name << " monitors while the session of Fight Club is running!" << std::endl;
	_EnergyPoints--;
	return ;
}

void	ScavTrap::attack(const std::string &target)
{
	if (_HitPoints == 0)
		std::cout << "ScavTrap " << _name << " is already dead!" << std::endl;
	else if (_EnergyPoints == 0)
		std::cout << "ScavTrap " << _name << " is out of energy." << std::endl;
	else
	{
		_EnergyPoints--;
		std::cout << "ScavTrap " << _name << " attacks " << target;
		std::cout << " causing " << _AttackDamage << " points of damage!" << std::endl;
	}
	return;
}
