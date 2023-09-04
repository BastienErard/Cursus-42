/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tastybao <tastybao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 16:17:08 by tastybao          #+#    #+#             */
/*   Updated: 2023/09/04 15:33:53 by tastybao         ###   ########.fr       */
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

	private :
		std::string	_FName;
		std::string	_LName;
		std::string	_Nickname;
		std::string _PhoneNumber;
		std::string	_DarkestSecret;
		void	AddInformations(std::string Information);
};

#endif
