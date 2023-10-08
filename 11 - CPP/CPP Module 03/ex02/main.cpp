/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tastybao <tastybao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 17:17:33 by tastybao          #+#    #+#             */
/*   Updated: 2023/10/08 21:04:16 by tastybao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"


int	main(void)
{
	unsigned int	i = 1;
	ClapTrap	Bob("Bob");
	ClapTrap	Optimus("Optimus");
	ScavTrap	GateKeeper("GateKeeper");
	FragTrap	JohnDoe("JohnDoe");
	std::cout << std::endl;

	Bob.getStatus();
	Optimus.getStatus();
	GateKeeper.getStatus();
	JohnDoe.getStatus();
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
	JohnDoe.highFivesGuys();
	std::cout << std::endl;

	Bob.getStatus();
	Optimus.getStatus();
	GateKeeper.getStatus();
	JohnDoe.getStatus();
	std::cout << std::endl;
	return (0);
}
