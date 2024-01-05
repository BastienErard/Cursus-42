/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berard <berard@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 13:53:21 by berard            #+#    #+#             */
/*   Updated: 2024/01/05 15:46:16 by berard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void)
{
	std::cout << "This is a normal bureaucrat" << std::endl;

	try
	{
		Bureaucrat	Bob = Bureaucrat("Bob", 124);
		std::cout << Bob << std::endl;
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl;
	std::cout << "This is a wrong grade" << std::endl;

	try
	{
		Bureaucrat	Barbara = Bureaucrat("Barabara", 154);
		std::cout << Barbara << std::endl;
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl;
	std::cout << "And now, let's do some increment / decrement" << std::endl;

	try
	{
		Bureaucrat	John = Bureaucrat("John", 143);
		John.decrement(5);
		John.increment(2);
		John.increment(10);
		std::cout << John << std::endl;
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	return (0);
}
