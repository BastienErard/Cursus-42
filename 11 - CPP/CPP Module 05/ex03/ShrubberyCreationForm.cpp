/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berard <berard@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 10:57:11 by berard            #+#    #+#             */
/*   Updated: 2024/01/12 15:01:44 by berard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : AForm()
{
	return;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137), _target(target)
{
	return;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src) : AForm(src.getName(), src.getGradeSigned(), src.getGradeExecuted()), _target(getTarget())
{
	*this = src;
	return;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	return;
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rhs)
{
	AForm::operator=(rhs);
	_target = rhs._target;
	return *this;
}

std::string	ShrubberyCreationForm::getTarget(void) const
{
	return (_target);
}

void	ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{

	if (!auditGrade(executor.getGrade()))
		throw (GradeTooLowException());
	std::ofstream outfile(getTarget()+"_shrubbery");
	outfile << "        ROFL:ROFL:LOL:ROFL:ROFL" << std::endl;
	outfile << "           _________|_____________" << std::endl;
	outfile << "LOL===[]\\-----------------------[]" << std::endl;
	outfile << " L       || || || || || || || || |/" << std::endl;
	outfile << "        -----------------------------" << std::endl;
	outfile << "          | | | | | | | | | | | | |" << std::endl;
	outfile << "         ------------------------------" << std::endl;
	outfile << std::endl;
	outfile.close();
}
