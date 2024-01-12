/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berard <berard@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 13:53:21 by berard            #+#    #+#             */
/*   Updated: 2024/01/12 15:40:06 by berard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"


int	main(void)
{
	std::cout << "This is bureaucrat grade 20 with a AForm grade 30" << std::endl;
	try
	{
		Bureaucrat	Bob = Bureaucrat("Bob", 20);
		AForm		Paper = AForm("Paper", 30, 30);
		Bob.signForm(Paper);
		std::cout << Bob << std::endl;
		std::cout << Paper << std::endl;
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl;

	std::cout << "This is a bureaucrat grade 20 with a AForm grade 165" << std::endl;
	try
	{
		Bureaucrat	Barbara = Bureaucrat("Barabara", 20);
		AForm		Taxes = AForm("Taxes", 165, 30);
		Barbara.signForm(Taxes);
		std::cout << Barbara << std::endl;
		std::cout << Taxes << std::endl;
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl;

	std::cout << "And now, let's do some increment / decrement with a higher grade for the AForm" << std::endl;
	try
	{
		Bureaucrat	John = Bureaucrat("John", 40);
		AForm		Payroll = AForm("Payroll", 1, 1);
		John.decrement(5);
		John.increment(2);
		John.increment(10);
		John.signForm(Payroll);
		if (Payroll.getSignStatus())
		{
			std::cout << John << std::endl;
			std::cout << Payroll << std::endl;
		}
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	return (0);
}
