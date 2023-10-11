/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tastybao <tastybao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 17:26:16 by berard            #+#    #+#             */
/*   Updated: 2023/10/11 20:45:29 by tastybao         ###   ########.fr       */
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
			~Animal(void);

			Animal &operator=(Animal const & rhs);

			virtual void	makeSound(void);

	protected :
			std::string	_type;
			std::string _sound;
};

#endif
