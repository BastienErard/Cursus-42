/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berard <berard@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 17:24:08 by berard            #+#    #+#             */
/*   Updated: 2023/10/13 14:55:30 by berard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int	main(void)
{
	const Animal	*Meta = new Animal();
	const Animal	*Snoopy = new Dog();
	const Animal	*Peach = new Cat();

	std::cout << "Snoopy is a " << Snoopy->getType() << "." << std::endl;
	std::cout << "Peach is a " << Peach->getType() << "." << std::endl;
	Snoopy->makeSound();
	Peach->makeSound();
	Meta->makeSound();

	delete Snoopy;
	delete Peach;
	delete Meta;

	std::cout << std::endl;
	return (0);
}
