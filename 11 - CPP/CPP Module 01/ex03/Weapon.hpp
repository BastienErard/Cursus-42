/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tastybao <tastybao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 11:31:30 by berard            #+#    #+#             */
/*   Updated: 2023/09/22 17:15:34 by tastybao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>
#include <istream>
#include <string>

class Weapon
{
	public	:
				Weapon(std::string type);
				~Weapon();
				void				setType(std::string type);
				std::string const	&getType(void);

	private	:
				std::string	_type;
};

#endif
