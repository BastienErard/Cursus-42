/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tastybao <tastybao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 13:53:21 by berard            #+#    #+#             */
/*   Updated: 2024/01/14 14:56:08 by tastybao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"


int	main(void)
{
	Intern		basicIntern;
	AForm		*SCF;
	AForm		*RRF;
	AForm		*PPF;
	AForm		*WOW;

	std::cout << "Let's begin with existing forms" << std::endl;
	std::cout << std::endl;

	try {
		Bureaucrat	bob = Bureaucrat("Bob", 1);
		SCF = basicIntern.makeForm("ShrubberyCreationForm", "garden");
		RRF = basicIntern.makeForm("RobotomyRequestForm", "target_robot");
		PPF = basicIntern.makeForm("PresidentialPardonForm", "criminal");

		std::cout << std::endl;
		std::cout << "Here is a little check that everything works" << std::endl;
		std::cout << std::endl;

		bob.signForm(*PPF);
		bob.executeForm(*PPF);
		delete SCF;
		delete RRF;
		delete PPF;

	} catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl;
	std::cout << "Intern makes mistakes sometimes" << std::endl;
	std::cout << std::endl;
	try
	{
		WOW = basicIntern.makeForm("WOW", "haha");
		if (WOW)
		{
			delete WOW;
		}
	} catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	return (0);
}
