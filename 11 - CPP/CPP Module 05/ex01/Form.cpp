/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tastybao <tastybao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 17:17:56 by berard            #+#    #+#             */
/*   Updated: 2024/01/09 14:15:44 by tastybao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void)
{
	return;
}

Form::Form(std::string name, int gradeSigned, int gradeExecuted) : _name(name), _gradeSigned(gradeSigned), _gradeExecuted(gradeExecuted)
{
	_signStatus = false;
	if (_gradeSigned > 150 || _gradeExecuted > 150)
		throw (Form::GradeTooLowException());
	else if (_gradeSigned < 1 || _gradeExecuted < 1)
		throw (Form::GradeTooHighException());
	return;
}

Form::Form(Form const & src)
{
	*this = src;
	return;
}

Form::~Form(void)
{
	return;
}

Form	&Form::operator=(Form const & rhs)
{
	_name = rhs._name;
	_signStatus = rhs._signStatus;
	_gradeSigned = rhs._gradeSigned;
	_gradeExecuted = rhs._gradeExecuted;
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
