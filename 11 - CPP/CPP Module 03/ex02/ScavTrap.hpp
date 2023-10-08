/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tastybao <tastybao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 19:51:03 by tastybao          #+#    #+#             */
/*   Updated: 2023/10/08 20:45:02 by tastybao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public	:
			ScavTrap(void);
			ScavTrap(std::string name);
			ScavTrap(ScavTrap const &src);
			~ScavTrap(void);

			ScavTrap & operator=(ScavTrap const & rhs);
			void	guardGate(void);
			void	attack(const std::string& target);
};

#endif

