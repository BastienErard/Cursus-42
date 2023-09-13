/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berard <berard@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 11:37:59 by berard            #+#    #+#             */
/*   Updated: 2023/09/13 14:51:07 by berard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

class HumanB
{
	public	:
				HumanB(std::string	name);
				~HumanB();
				void	attack(void);
				void	setWeapon(Weapon Weapon);

	private	:
			std::string	_Name;
			std::string	_Weapon;
};

#endif
