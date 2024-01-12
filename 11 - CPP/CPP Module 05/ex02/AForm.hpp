/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berard <berard@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 17:17:48 by berard            #+#    #+#             */
/*   Updated: 2024/01/12 14:48:27 by berard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

#include "Bureaucrat.hpp"
#include <string>

class Bureaucrat;

class AForm
{
	class GradeTooHighException : public std::exception
	{
		public :
			virtual const char *what() const throw()
			{
				return ("Grade is too high to sign or execute!");
			}
	};

	class GradeTooLowException : public std::exception
	{
		public :
			virtual const char *what() const throw()
			{
				return ("Grade is too low to sign or execute!");
			}
	};

	public :
		AForm(std::string name, int gradeSigned, int gradeExecuted);
		AForm(AForm const & src);
		virtual ~AForm(void);

		AForm &operator=(AForm const & rhs);

		void		beSigned(Bureaucrat &bureaucrat);

		std::string	getName(void) const;
		bool		getSignStatus(void) const;
		int			getGradeSigned(void) const;
		int			getGradeExecuted(void) const;
		std::string	getTarget(void) const; // test

	protected :
		virtual void	execute(Bureaucrat const &executor) const = 0;
		bool			auditGrade(const int grade) const; // test
		std::string		target; // test

	private :
		AForm(void);
		const std::string	_name;
		bool				_signStatus;
		const int			_gradeSigned;
		const int			_gradeExecuted;

};

std::ostream &operator<<(std::ostream &out, AForm const & rhs);

#endif
