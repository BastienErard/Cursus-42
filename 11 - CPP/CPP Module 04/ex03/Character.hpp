/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tastybao <tastybao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 18:12:00 by tastybao          #+#    #+#             */
/*   Updated: 2023/10/19 17:47:21 by tastybao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter
{
	public :
		Character(void);
		Character(std::string name);
		Character(Character const &src);
		~Character(void);

		Character	&operator=(Character const &rhs);

		std::string const	&getName(void) const;
		void				equip(AMateria *m);
		void				unequip(int idx);
		void				use(int idx, ICharacter &target);

	private :
		std::string	_name;
		AMateria	*_inventory[4];
		AMateria	*_ground[4];
};

#endif
