/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berard <berard@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 17:26:18 by berard            #+#    #+#             */
/*   Updated: 2023/10/16 11:41:16 by berard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include ""

class Dog : public Animal
{
	public :
		Dog(void);
		Dog(std::string type);
		Dog(Dog const & src);
		virtual ~Dog(void);

		Dog & operator=(Dog const & rhs);
		virtual void	makeSound(void) const;
};

#endif
