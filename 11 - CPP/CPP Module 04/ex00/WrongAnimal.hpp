/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berard <berard@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 17:26:26 by berard            #+#    #+#             */
/*   Updated: 2023/10/12 15:46:06 by berard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
	public :
			WrongAnimal(void);
			WrongAnimal(std::string type);
			WrongAnimal(WrongAnimal const & src);
			virtual ~WrongAnimal(void);

			WrongAnimal &operator=(WrongAnimal const & rhs);

			void	makeSound(void) const;
			std::string		getType(void) const;

	protected :
			std::string	_type;
};

#endif
