/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tastybao <tastybao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 16:17:10 by tastybao          #+#    #+#             */
/*   Updated: 2023/09/04 15:56:09 by tastybao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

Contact::Contact()
{
	return;
}

Contact::~Contact()
{
	return;
}

void	Contact::NewContact(void)
{
	int			Index;
	std::string	Information;

	Index = 0;
	while (Index != 5)
	{
		if (Index == 0)
			Information = "first name";
		else if (Index == 1)
			Information = "last name";
		else if (Index == 2)
			Information = "nickname";
		else if (Index == 3)
			Information = "phone number";
		else if (Index == 4)
			Information = "darkest secret";
		AddInformations(Information);
		Index++;
	}
	return;
}

void	Contact::AddInformations(std::string Information)
{
	std::string	Input;

	std::cout << Input;
	while (Input.empty())
	{
		std::cout << "Enter the " << Information << " of the contact : ";
		std::getline(std::cin, Input);
		if (Information == "first name")
			_FName = Input;
		else if (Information == "last name")
			_LName = Input;
		else if (Information == "nickname")
			_Nickname = Input;
		else if (Information == "phone number")
			_PhoneNumber = Input;
		else if (Information == "darkest secret")
			_DarkestSecret = Input;
	}
}
