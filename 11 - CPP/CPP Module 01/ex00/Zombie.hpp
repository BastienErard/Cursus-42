/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tastybao <tastybao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 10:43:21 by tastybao          #+#    #+#             */
/*   Updated: 2023/09/07 18:03:27 by tastybao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <istream>

class Zombie
{
	public :
		Zombie(std::string name);
		~Zombie(void);
		void	announce(void);

	private :
		std::string	_name;
};

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

#endif

