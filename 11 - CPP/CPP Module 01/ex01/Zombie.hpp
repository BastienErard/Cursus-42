/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berard <berard@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 11:25:24 by berard            #+#    #+#             */
/*   Updated: 2023/09/08 14:34:32 by berard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie
{
	public :
		Zombie(void);
		~Zombie(void);
		void	NameZombie(std::string name);
		void	announce(void);

	private :
		std::string	_name;
};

Zombie*	zombieHorde(int N, std::string name);

#endif
