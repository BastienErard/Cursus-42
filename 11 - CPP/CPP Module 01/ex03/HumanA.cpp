/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berard <berard@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 11:37:35 by berard            #+#    #+#             */
/*   Updated: 2023/09/13 15:04:13 by berard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

HumanA::HumanA(std::string name, Weapon &Weapon) : _Name(name), _Weapon(Weapon)
{
	return ;
}

HumanA::~HumanA();
{
	return ;
}

void	HumanA::attack(void)
{
	std::cout << _name << " attacks with their " << _weapon << std::endl;
	return ;
}
