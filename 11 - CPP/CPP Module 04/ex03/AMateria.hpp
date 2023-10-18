/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tastybao <tastybao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 19:07:01 by tastybao          #+#    #+#             */
/*   Updated: 2023/10/18 18:05:26 by tastybao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

class AMateria
{
	protected :
		std::string	type;

	public :
		AMateria(void);
		AMateria(std::string const &type);
		AMateria(AMateria const &src);
		virtual ~AMateria(void);

		AMateria	&operator=(AMateria const &rhs);

		std::string const	&getType(void) const;
		virtual AMateria*	clone(void) const = 0;
		virtual void		use(ICharacter &target);

};

#endif
