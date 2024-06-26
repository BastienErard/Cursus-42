/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tastybao <tastybao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 13:53:21 by berard            #+#    #+#             */
/*   Updated: 2024/01/14 13:19:31 by tastybao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"


int	main(void)
{

	std::cout << "Let's do the exercice with Bob, the senior employee" << std::endl;
	try
	{
		Bureaucrat	bob = Bureaucrat("Bob", 1);
		ShrubberyCreationForm	shrubbery = ShrubberyCreationForm("Home");
		RobotomyRequestForm		robotomy = RobotomyRequestForm("Depot");
		PresidentialPardonForm	presidential = PresidentialPardonForm("Garden");

		std::cout << std::endl;

		bob.signForm(shrubbery);
		bob.signForm(robotomy);
		bob.signForm(presidential);

		std::cout << std::endl;

		bob.executeForm(shrubbery);
		std::cout << std::endl;

		bob.executeForm(robotomy);
		std::cout << std::endl;

		bob.executeForm(presidential);
		std::cout << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}
