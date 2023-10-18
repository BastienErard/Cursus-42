/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berard <berard@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 11:44:53 by berard            #+#    #+#             */
/*   Updated: 2023/10/18 13:24:04 by berard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{
	public :
		Ice(void);
		Ice(Ice const &src);
		~Ice(void);

		Ice	&operator=(Ice const &rhs);
		AMateria	*clone(void) const;
		void		use(ICharacter &target);
};

#endif
