/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tastybao <tastybao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 17:17:33 by tastybao          #+#    #+#             */
/*   Updated: 2023/10/07 19:25:34 by tastybao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	unsigned int	i = 1;
	ClapTrap	Bob("Bob");
	ClapTrap	Optimus("Optimus");
	std::cout << std::endl;

	Bob.getStatus();
	Optimus.getStatus();
	std::cout << std::endl;

	while (Optimus.getHitPoints() > 0)
	{
		Bob.setAttackDamage(i);
		Bob.attack("Optimus");
		Optimus.takeDamage(Bob.getAttackDamage());
		Optimus.beRepaired(2);
		i *= 3;
		std::cout << std::endl;
	}
	Bob.getStatus();
	Optimus.getStatus();
	std::cout << std::endl;
	return (0);
}
