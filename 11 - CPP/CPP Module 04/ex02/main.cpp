/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berard <berard@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 17:24:08 by berard            #+#    #+#             */
/*   Updated: 2023/10/16 15:59:40 by berard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int	main(void)
{
	int	nb = 5;
	int	i = -1;
	const Animal	*Herd[nb];
	// Animal	test;

	while (++i < nb)
	{
		if (i % 2 == 0)
		{
			Herd[i] = new Dog;
			std::cout << std::endl;
		}
		else
		{
			Herd[i] = new Cat;
			std::cout << std::endl;
		}
	}

	std::cout << "ANIMAL AND SOUND?" << std::endl;
	std::cout << "The number 2 is " << Herd[1]->getType() << "." << std::endl;
	Herd[1]->makeSound();
	std::cout << "The number 5 is " << Herd[4]->getType() << "." << std::endl;
	Herd[4]->makeSound();
	std::cout << std::endl;

	while (i-- > 0)
	{
		delete Herd[i];
		std::cout << std::endl;
	}

	std::cout << "DEEP COPY" << std::endl;
	Cat	Peach;
	Cat	Peach_tmp;

	Peach.getBrain()->setIdeas(0, "This is an idea!");
	Peach_tmp = Peach;
	std::cout << std::endl;
	std::cout << Peach.getBrain()->getIdeas(0) << "." << std::endl;
	std::cout << Peach_tmp.getBrain()->getIdeas(0) << "." << std::endl;
	std::cout << std::endl;
	Peach.getBrain()->setIdeas(0, "Hell no!");
	std::cout << Peach.getBrain()->getIdeas(0) << "." << std::endl;
	std::cout << Peach_tmp.getBrain()->getIdeas(0) << "." << std::endl;
	std::cout << std::endl;
	return (0);
}
