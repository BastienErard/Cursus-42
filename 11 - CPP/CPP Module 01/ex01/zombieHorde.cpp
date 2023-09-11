/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berard <berard@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 11:25:02 by berard            #+#    #+#             */
/*   Updated: 2023/09/11 10:04:52 by berard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name)
{
	if (N < 1)
		return (NULL);
	Zombie*	zombieHorde = new Zombie[N];
	int	i = -1;

	while (++i < N)
	{
		zombieHorde[i].NameZombie(name);
		zombieHorde[i].announce();
	}
	return (zombieHorde);
}
