/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berard <berard@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 17:26:16 by berard            #+#    #+#             */
/*   Updated: 2023/10/12 16:04:18 by berard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal
{
	public :
			Animal(void);
			Animal(std::string type);
			Animal(Animal const & src);
			virtual ~Animal(void);

			Animal &operator=(Animal const & rhs);

			virtual void	makeSound(void) const;
			std::string		getType(void) const;

	protected :
			std::string	_type;
};

#endif
