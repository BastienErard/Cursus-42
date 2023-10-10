/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berard <berard@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 17:26:16 by berard            #+#    #+#             */
/*   Updated: 2023/10/10 17:43:31 by berard           ###   ########.fr       */
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


	protected :
			std::string	type;
			std::string sound;
};

#endif
