/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tastybao <tastybao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 17:17:33 by tastybao          #+#    #+#             */
/*   Updated: 2023/10/07 20:41:06 by tastybao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	unsigned int	i = 1;
	ClapTrap	Bob("Bob");
	ClapTrap	Optimus("Optimus");
	ScavTrap	GateKeeper("GateKeeper");
	std::cout << std::endl;

	Bob.getStatus();
	Optimus.getStatus();
	GateKeeper.getStatus();
	std::cout << std::endl;

	while (Optimus.getHitPoints() > 0)
	{
		Bob.setAttackDamage(i);
		Bob.attack("Optimus");
		Optimus.takeDamage(Bob.getAttackDamage());
		Optimus.beRepaired(2);
		GateKeeper.guardGate();
		i *= 3;
		std::cout << std::endl;
	}
	GateKeeper.attack("bob");
	Bob.takeDamage(GateKeeper.getAttackDamage());
	std::cout << std::endl;

	Bob.getStatus();
	Optimus.getStatus();
	GateKeeper.getStatus();
	std::cout << std::endl;
	return (0);
}
