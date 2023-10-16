/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berard <berard@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 17:26:18 by berard            #+#    #+#             */
/*   Updated: 2023/10/16 14:43:50 by berard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	public :
		Dog(void);
		Dog(Dog const & src);
		~Dog(void);

		Dog & operator=(Dog const & rhs);
		void	makeSound(void) const;
		Brain	*getBrain(void) const;

	private :
		Brain	*_Brain;
};

#endif
