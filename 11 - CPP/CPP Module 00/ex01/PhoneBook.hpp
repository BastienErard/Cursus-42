/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berard <berard@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 16:15:05 by tastybao          #+#    #+#             */
/*   Updated: 2023/09/05 15:07:25 by berard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <iomanip>
#include "Contact.hpp"

class PhoneBook
{
	public :
					PhoneBook();
					~PhoneBook();
		void		AddContact();
		void		SearchContact() const;

	private :
		Contact		_Contact[8];
		int			DisplayAllContacts(void) const;
};

#endif
