/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berard <berard@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 17:17:48 by berard            #+#    #+#             */
/*   Updated: 2024/01/10 17:13:45 by berard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include "Bureaucrat.hpp"
#include <string>

class Bureaucrat;

class Form
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
		Form(std::string name, int gradeSigned, int gradeExecuted);
		Form(Form const & src);
		~Form(void);

		Form &operator=(Form const & rhs);

		void		beSigned(Bureaucrat &bureaucrat);

		std::string	getName(void) const;
		bool		getSignStatus(void) const;
		int			getGradeSigned(void) const;
		int			getGradeExecuted(void) const;

	private :
		Form(void);
		const std::string	_name;
		bool				_signStatus;
		const int			_gradeSigned;
		const int			_gradeExecuted;

};

std::ostream &operator<<(std::ostream &out, Form const & rhs);

#endif
