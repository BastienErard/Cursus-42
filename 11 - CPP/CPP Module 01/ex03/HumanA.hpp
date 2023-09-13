/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berard <berard@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 11:37:57 by berard            #+#    #+#             */
/*   Updated: 2023/09/13 15:03:54 by berard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
	public	:
				HumanA(std::string name, Weapon& weapon);
				~HumanA();
				void	attack(void);

	private	:
			std::string	_Name;
			Weapon	&_weapon;
};

#endif
