/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berard <berard@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 17:17:56 by berard            #+#    #+#             */
/*   Updated: 2024/01/10 11:45:13 by berard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void) : _name("Unknown"), _signStatus(false), _gradeSigned(30), _gradeExecuted(30)
{
	return;
}

Form::Form(std::string name, int gradeSigned, int gradeExecuted) : _name(name), _signStatus(false), _gradeSigned(gradeSigned), _gradeExecuted(gradeExecuted)
{
	if (_gradeSigned > 150 || _gradeExecuted > 150)
		throw (Form::GradeTooLowException());
	else if (_gradeSigned < 1 || _gradeExecuted < 1)
		throw (Form::GradeTooHighException());
	return;
}

Form::Form(Form const & src) : _name(src._name), _signStatus(src._signStatus), _gradeSigned(src._gradeSigned), _gradeExecuted(src._gradeExecuted)
{
	return;
}

Form::~Form(void)
{
	return;
}

Form	&Form::operator=(Form const & rhs)
{
	_signStatus = rhs._signStatus;
	return *this;
}

void	Form::beSigned(Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() <= getGradeSigned())
		_signStatus = true;
	else
		throw (Form::GradeTooLowException());
	return ;
}

std::string	Form::getName(void) const
{
	return (_name);
}

bool	Form::getSignStatus(void) const
{
	return (_signStatus);
}

int		Form::getGradeSigned(void) const
{
	return (_gradeSigned);
}

int		Form::getGradeExecuted(void) const
{
	return (_gradeExecuted);
}

std::ostream 	&operator<<(std::ostream &out, Form const & rhs)
{
	out << "Name of the form: " << rhs.getName() << std::endl;
	out << "Needed grade to sign: " << rhs.getGradeSigned() << std::endl;
	out << "Needed grade to execute: " << rhs.getGradeExecuted() << std::endl;
	if (rhs.getSignStatus())
		out << "Form has been signed" << std::endl;
	else
		out << "Form is not signed" << std::endl;
	return (out);
}
