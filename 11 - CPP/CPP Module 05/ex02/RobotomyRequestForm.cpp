/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berard <berard@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 10:57:11 by berard            #+#    #+#             */
/*   Updated: 2024/01/12 15:01:44 by berard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) : AForm("Unknown", "Unknown", false, 30, 30)
{
	return;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", false, 72, 45), target(target)
{
	return;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & src) : Form(src.getTarget(), src.getName(), src.getState(), src.getGradeSigned(), src.getGradeExecute())
{
	*this = src;
	return;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	return;
}

RobotomyRequestForm	&RobotomyRequestForm::operator=(RobotomyRequestForm const &rhs)
{
	AForm::operator=(rhs);
	target = rhs.target;
	return *this;
}

void	RobotomyRequestForm::execute(Bureaucrat const &executor) const
{

	if (!auditGrade(executor.getGrade()))
		throw (GradeTooLowException());

	std::cout << "*Makes some drilling noises...*" << std::endl;
	std::srand(static_cast<unsigned int>(std::time(0)));
	if ((std::srand() % 2) % 2 == 0)
		std::cout << getTarget() << " has been robotomized" << std::endl;
	else
		std::cout << getTarget() << " has failed the robotomization" << std::endl;
}
