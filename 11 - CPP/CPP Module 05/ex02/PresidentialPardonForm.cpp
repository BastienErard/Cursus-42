/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berard <berard@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 10:57:11 by berard            #+#    #+#             */
/*   Updated: 2024/01/12 15:25:47 by berard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : AForm("Unknown", "Unknown", false, 30, 30)
{
	return;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", false, 25, 5), target(target)
{
	return;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & src) : Form(src.getTarget(), src.getName(), src.getState(), src.getGradeSigned(), src.getGradeExecute())
{
	*this = src;
	return;
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	return;
}

PresidentialPardonForm	&PresidentialPardonForm::operator=(PresidentialPardonForm const &rhs)
{
	AForm::operator=(rhs);
	target = rhs.target;
	return *this;
}

void	PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	if (!auditGrade(executor.getGrade()))
		throw (GradeTooLowException());
	else
		std::cout << getTarget() << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}
