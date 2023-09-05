/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berard <berard@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 16:17:08 by tastybao          #+#    #+#             */
/*   Updated: 2023/09/05 15:07:32 by berard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

class Contact
{
	public :
					Contact();
					~Contact();
		void		NewContact(void);
		void		PrintIndex(void) const;
		std::string	GetFName(void) const;
		void		DisplayContact(void) const;


	private :
		std::string	_FName;
		std::string	_LName;
		std::string	_Nickname;
		std::string _PhoneNumber;
		std::string	_DarkestSecret;
		void	AddInformations(std::string Information);
};

#endif
