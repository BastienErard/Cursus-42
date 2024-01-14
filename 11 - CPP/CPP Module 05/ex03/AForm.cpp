/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tastybao <tastybao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 17:17:56 by berard            #+#    #+#             */
/*   Updated: 2024/01/14 13:26:50 by tastybao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(void) : _name("Unknown"), _signStatus(false), _gradeSigned(30), _gradeExecuted(30)
{
	return;
}

AForm::AForm(std::string name, int gradeSigned, int gradeExecuted) : _name(name), _signStatus(false), _gradeSigned(gradeSigned), _gradeExecuted(gradeExecuted)
{
	if (_gradeSigned > 150 || _gradeExecuted > 150)
		throw (AForm::GradeTooLowException());
	else if (_gradeSigned < 1 || _gradeExecuted < 1)
		throw (AForm::GradeTooHighException());
	return;
}

AForm::AForm(AForm const & src) : _name(src._name), _signStatus(src._signStatus), _gradeSigned(src._gradeSigned), _gradeExecuted(src._gradeExecuted)
{
	return;
}

AForm::~AForm(void)
{
	return;
}

AForm	&AForm::operator=(AForm const & rhs)
{
	_signStatus = rhs._signStatus;
	return *this;
}

void	AForm::beSigned(Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() <= getGradeSigned())
		_signStatus = true;
	else
		throw (AForm::GradeTooLowException());
	return ;
}

std::string	AForm::getName(void) const
{
	return (_name);
}

bool	AForm::getSignStatus(void) const
{
	return (_signStatus);
}

int		AForm::getGradeSigned(void) const
{
	return (_gradeSigned);
}

int		AForm::getGradeExecuted(void) const
{
	return (_gradeExecuted);
}

bool	AForm::auditGrade(const int grade) const
{
	if (getSignStatus() && grade <= getGradeExecuted())
		return true;
	else
		return false;
}

std::ostream 	&operator<<(std::ostream &out, AForm const & rhs)
{
	out << "Name of the AForm: " << rhs.getName() << std::endl;
	out << "Needed grade to sign: " << rhs.getGradeSigned() << std::endl;
	out << "Needed grade to execute: " << rhs.getGradeExecuted() << std::endl;
	if (rhs.getSignStatus())
		out << "AForm has been signed" << std::endl;
	else
		out << "AForm is not signed" << std::endl;
	return (out);
}
