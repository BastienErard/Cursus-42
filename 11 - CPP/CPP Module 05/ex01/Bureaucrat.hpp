/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berard <berard@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 13:53:25 by berard            #+#    #+#             */
/*   Updated: 2024/01/10 11:37:01 by berard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <stdexcept>
#include "Form.hpp"

class Form;

class Bureaucrat
{
	class GradeTooHighException : public std::exception
	{
		public :
			virtual const char *what() const throw()
			{
				return ("Grade is too high!");
			}
	};

	class GradeTooLowException : public std::exception
	{
		public :
			virtual const char *what() const throw()
			{
				return ("Grade is too low!");
			}
	};

	public :
			Bureaucrat(std::string name, int grade);
			Bureaucrat(Bureaucrat const & src);
			~Bureaucrat(void);

			Bureaucrat &operator=(Bureaucrat const & rhs);
			void	increment(int n);
			void	decrement(int n);
			void	signForm(Form &form);

			std::string	getName(void) const;
			int			getGrade(void) const;

	private :
			Bureaucrat(void);
			const std::string	_name;
			int					_grade;

};

std::ostream &operator<<(std::ostream &out, Bureaucrat const & rhs);

#endif
