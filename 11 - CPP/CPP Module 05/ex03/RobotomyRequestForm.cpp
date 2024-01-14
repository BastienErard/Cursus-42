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

RobotomyRequestForm::RobotomyRequestForm(void) : AForm()
{
	return;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45), _target(target)
{
	return;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & src) : AForm(src.getName(), src.getGradeSigned(), src.getGradeExecuted()), _target(getTarget())
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
	_target = rhs._target;
	return *this;
}

std::string	RobotomyRequestForm::getTarget(void) const
{
	return (_target);
}

void	RobotomyRequestForm::execute(Bureaucrat const &executor) const
{

	if (!auditGrade(executor.getGrade()))
		throw (GradeTooLowException());

	std::cout << "*Makes some drilling noises...*" << std::endl;
	std::srand(static_cast<unsigned int>(std::time(0)));
	if ((std::rand() % 2) % 2 == 0)
		std::cout << getTarget() << " has been robotomized" << std::endl;
	else
		std::cout << getTarget() << " has failed the robotomization" << std::endl;
}
