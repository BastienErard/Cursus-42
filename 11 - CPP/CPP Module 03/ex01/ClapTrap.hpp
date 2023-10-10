/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berard <berard@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 17:17:40 by tastybao          #+#    #+#             */
/*   Updated: 2023/10/09 10:53:01 by berard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
	public :
		ClapTrap(void);
		ClapTrap(std::string name);
		ClapTrap(ClapTrap const &src);
		ClapTrap(std::string name, unsigned int Hit, unsigned int Energy, unsigned int Attack);
		~ClapTrap(void);

		ClapTrap & operator=(ClapTrap const & rhs);

		void			attack(const std::string& target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
		void			setAttackDamage(unsigned int power);
		void			getStatus(void) const;
		unsigned int	getAttackDamage(void) const;
		unsigned int	getHitPoints(void) const;

	protected :
		std::string		_name;
		unsigned int	_HitPoints;
		unsigned int	_EnergyPoints;
		unsigned int	_AttackDamage;
};

#endif
