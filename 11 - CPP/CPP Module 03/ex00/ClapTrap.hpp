/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tastybao <tastybao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 17:17:40 by tastybao          #+#    #+#             */
/*   Updated: 2023/10/06 18:58:55 by tastybao         ###   ########.fr       */
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
		~ClapTrap(void);

		ClapTrap &operator=(ClapTrap const & rhs);

		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		void	getStatus(void) const;

	private :
		std::string	_name;
		std::string	_HitPoints;
		std::string	_EnergyPoints;
		std::string	_AttackDamage;
};

#endif
