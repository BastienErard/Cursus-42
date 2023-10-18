/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berard <berard@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 13:24:22 by berard            #+#    #+#             */
/*   Updated: 2023/10/18 13:25:36 by berard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
	public :
		Cure(void);
		Cure(Cure const &src);
		~Cure(void);

		Cure	&operator=(Cure const &rhs);
		AMateria	*clone(void) const;
		void		use(ICharacter &target);
};

#endif
