/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tastybao <tastybao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 13:23:44 by tastybao          #+#    #+#             */
/*   Updated: 2024/01/14 15:18:03 by tastybao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void)
{
	return;
}

Intern::Intern(Intern const &src)
{
	(void) src;
	*this = src;
	return;
}

Intern::~Intern(void)
{
	return;
}

Intern	&Intern::operator=(Intern const & rhs)
{
	(void) rhs;
	return *this;
}

AForm	*Intern::makePPF(std::string target)
{
	return (new PresidentialPardonForm(target));
}

AForm	*Intern::makeRRF(std::string target)
{
	return (new RobotomyRequestForm(target));
}

AForm	*Intern::makeSCF(std::string target)
{
	return (new ShrubberyCreationForm(target));
}

AForm	*Intern::makeForm(std::string name, std::string target)
{
	AForm		*newForm = NULL;
	AForm		*ptrFunctions[] = {makePPF(target), makeRRF(target), makeSCF(target)};
	std::string	existingForms[] = {"PresidentialPardonForm", "RobotomyRequestForm", "ShrubberyCreationForm"};

	int i = -1;
	while (++i < 3)
	{
		if (name == existingForms[i])
		{
			std::cout << "Intern creates " << existingForms[i] << std::endl;
			newForm = ptrFunctions[i];
			while (i != 2)
			{
				i++;
				delete ptrFunctions[i];
			}
			break;
		}
		delete ptrFunctions[i];
	}
	if (!newForm)
		throw(Intern::FormUnknowned());
	return newForm;
}
