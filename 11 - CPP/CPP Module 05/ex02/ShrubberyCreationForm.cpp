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

ShrubberyCreationForm::ShrubberyCreationForm(void) : AForm("Unknown", "Unknown", false, 30, 30)
{
	return;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", false, 145, 137), target(target)
{
	return;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src) : Form(src.getTarget(), src.getName(), src.getState(), src.getGradeSigned(), src.getGradeExecute())
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
	target = rhs.target;
	return *this;
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
