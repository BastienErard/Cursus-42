/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tastybao <tastybao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 17:54:59 by tastybao          #+#    #+#             */
/*   Updated: 2023/10/08 20:58:53 by tastybao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap("Default", 100, 100, 30)
{
	std::cout << "A new FragTrap is created. It is.... " << _name << "!" << std::endl;
	return;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name, 100, 100, 30)
{
	std::cout << "A new FragTrap is created. It is.... " << _name << "!" << std::endl;
	return;
}

FragTrap::FragTrap(FragTrap const &src)
{
	std::cout << "Copy constructor called (FragTrap)" << std::endl;
	*this = src;

	return;
}

FragTrap::~FragTrap(void)
{
	std::cout << "Destructor called (FragTrap)" << std::endl;
	return;
}

FragTrap	&FragTrap::operator=(FragTrap const & rhs)
{
	std::cout << "Copy assignment operator called (FragTrap)" << std::endl;
	_name = rhs._name;
	_HitPoints = rhs._HitPoints;
	_EnergyPoints = rhs._EnergyPoints;
	_AttackDamage = rhs._AttackDamage;

	return *this;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << _name << " gives everyone a high five for the fight!" << std::endl;
	_EnergyPoints--;
	return;
}
