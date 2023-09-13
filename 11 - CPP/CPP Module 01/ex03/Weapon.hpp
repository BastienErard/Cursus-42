/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berard <berard@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 11:31:30 by berard            #+#    #+#             */
/*   Updated: 2023/09/13 15:03:26 by berard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>
#include <string>
#include "HumanA.hpp"
#include "HumanB.hpp"

class Weapon
{
	public	:
				Weapon(std::string type);
				~Weapon();
				void			setType(std::string type);
				std::string		&getType(void) const;

	private	:
				std::string	_type;
};

#endif
