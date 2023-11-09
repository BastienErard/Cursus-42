/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berard <berard@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 13:53:23 by berard            #+#    #+#             */
/*   Updated: 2023/11/09 16:48:20 by berard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void)
{
	return;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{
	return;
}

Bureaucrat::Bureaucrat(Bureaucrat const & src)
{
	*this = src;
	return;
}

Bureaucrat::~Bureaucrat(void)
{
	return;
}

Bureaucrat	&Bureaucrat::operator=(Bureaucrat const & rhs)
{
	_grade = rhs._grade;
	return *this;
}

void	Bureaucrat::increment(int n)
{
	_grade -= n;
	if (_grade < 1)
		throw(Bureaucrat::GradeTooHighException());
}

void	Bureaucrat::decrement(int n)
{
	_grade += n;
	if (_grade > 150)
		throw (Bureaucrat::GradeTooLowException());
}

std::string	Bureaucrat::getName(void) const
{
	return (_name);
}

int		Bureaucrat::getGrade(void) const
{
	return (_grade);
}


std::ostream 	&operator<<(std::ostream &out, Bureaucrat const & rhs)
{
	out << rhs.getName() << " bureaucrat grade " << rhs.getGrade();
	return (out);
}
