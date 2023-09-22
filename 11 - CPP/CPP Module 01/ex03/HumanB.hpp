/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tastybao <tastybao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 11:37:59 by berard            #+#    #+#             */
/*   Updated: 2023/09/22 17:51:55 by tastybao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
	public	:
				HumanB(std::string	name);
				~HumanB();
				void	attack(void);
				void	setWeapon(Weapon &Weapon);

	private	:
			std::string	_name;
			Weapon 		*_weapon;
};

#endif
