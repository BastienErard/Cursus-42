/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berard <berard@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 11:24:37 by berard            #+#    #+#             */
/*   Updated: 2023/09/08 15:24:16 by berard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	int	Size = 0;
	Zombie*	Zombie = zombieHorde(Size, "Test");

	delete [] Zombie;
	return (0);
}
