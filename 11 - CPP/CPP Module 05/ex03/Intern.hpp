/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tastybao <tastybao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 13:23:24 by tastybao          #+#    #+#             */
/*   Updated: 2024/01/14 13:58:54 by tastybao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
	public :
		Intern(void);
		Intern(Intern const &src);
		~Intern(void);

		Intern	&operator=(Intern const & rhs);

		AForm	*makeForm(std::string name, std::string target);

	class FormUnknowned : public std::exception
	{
		public :
			virtual const char *what() const throw()
			{
				return ("The form asked is unknowned in this company");
			}
	};
	private :
		AForm	*makePPF(std::string target);
		AForm	*makeRRF(std::string target);
		AForm	*makeSCF(std::string target);

};

#endif
