/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berard <berard@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 10:55:41 by berard            #+#    #+#             */
/*   Updated: 2024/01/24 14:24:04 by berard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base	*generate(void)
{
	std::srand(static_cast<unsigned int>(std::time(nullptr)));
	int	randomNumber = (std::rand() % 3);

	if (randomNumber == 0)
		return (new A);
	else if (randomNumber == 1)
		return (new B);
	else if (randomNumber == 2)
		return (new C);
	return (new A);
}

void	identify(Base *p)
{
	if (dynamic_cast<A *>(p))
		std::cout << "Pointer to A" << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "Pointer to B" << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << "Pointer to C" << std::endl;
	else if (p == NULL)
		std::cout << "Pointer is NULL" << std::endl;
}

void	identify(Base &p)
{
	try
	{
		(void)dynamic_cast<A &>(p);
		std::cout << "Reference to A" << std::endl;
		return;
	}
	catch (std::bad_cast &bc)
	{
	}
	try
	{
		(void)dynamic_cast<B &>(p);
		std::cout << "Reference to B" << std::endl;
		return;
	}
	catch (std::bad_cast &bc)
	{
	}
	try
	{
		(void)dynamic_cast<C &>(p);
		std::cout << "Reference to C" << std::endl;
		return;
	}
	catch (std::bad_cast &bc)
	{
	}
}

int	main(void)
{
	Base	*newBase;
	newBase = generate();
	identify(newBase);
	identify(*newBase);
	delete newBase;
	return (0);
}
