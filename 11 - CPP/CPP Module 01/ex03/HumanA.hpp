/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tastybao <tastybao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 11:37:57 by berard            #+#    #+#             */
/*   Updated: 2023/09/22 17:12:19 by tastybao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
	public	:
				HumanA(std::string name, Weapon &weapon);
				~HumanA();
				void	attack(void);
				void	setWeapon(Weapon weapon);

	private	:
			std::string	_name;
			Weapon	&_weapon;
};

#endif
