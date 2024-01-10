/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berard <berard@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 13:53:21 by berard            #+#    #+#             */
/*   Updated: 2024/01/10 11:28:36 by berard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void)
{
	std::cout << "This is bureaucrat grade 20 with a form grade 30" << std::endl;
	try
	{
		Bureaucrat	Bob = Bureaucrat("Bob", 124);
		Form		Paper = Form("Paper", 30, 30);
		Bob.signForm(Paper);
		std::cout << Bob << std::endl;
		std::cout << Paper << std::endl;
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl;

	std::cout << "This is a bureaucrat grade 20 with a form grade 165" << std::endl;
	try
	{
		Bureaucrat	Barbara = Bureaucrat("Barabara", 20);
		Form		Taxes = Form("Taxes", 165, 30);
		Barbara.signForm(Taxes);
		std::cout << Barbara << std::endl;
		std::cout << Taxes << std::endl;
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl;

	std::cout << "And now, let's do some increment / decrement with a higher grade for the Form" << std::endl;
	try
	{
		Bureaucrat	John = Bureaucrat("John", 20);
		Form		Payroll = Form("Payroll", 1, 1);
		John.decrement(5);
		John.increment(2);
		John.increment(10);
		std::cout << John << std::endl;
		std::cout << Payroll << std::endl;
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	return (0);
}
