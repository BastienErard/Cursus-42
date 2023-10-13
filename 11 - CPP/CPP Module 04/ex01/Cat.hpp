/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berard <berard@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 17:26:21 by berard            #+#    #+#             */
/*   Updated: 2023/10/12 16:36:07 by berard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	public :
		Cat(void);
		Cat(Cat const & src);
		virtual ~Cat(void);

		Cat & operator=(Cat const & rhs);
		virtual void	makeSound(void) const;
		Brain	*getBrain(void) const;

	private :
		Brain	*_Brain;
};

#endif
