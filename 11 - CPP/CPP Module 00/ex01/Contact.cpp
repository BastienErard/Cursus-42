/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berard <berard@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 16:17:10 by tastybao          #+#    #+#             */
/*   Updated: 2023/09/05 16:01:31 by berard           ###   ########.fr       */
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
		if (Input.empty())
			std::cout << "Please enter a valid " << Information << "." << std::endl;
	}
}

std::string	Contact::GetFName(void) const
{
	return (_FName);
}

void	Contact::PrintIndex(void) const
{
	std::string tmp_FName = _FName;
	std::string tmp_LName = _LName;
	std::string tmp_Nickname = _Nickname;

	if (tmp_FName.length() > 10)
		tmp_FName = tmp_FName.substr(0, 9) + ".";
	if (tmp_LName.length() > 10)
		tmp_LName = tmp_LName.substr(0, 9) + ".";
	if (tmp_Nickname.length() > 10)
		tmp_Nickname = tmp_Nickname.substr(0, 9) + ".";
	std::cout << std::setw(10) << tmp_FName << "|";
	std::cout << std::setw(10) << tmp_LName << "|";
	std::cout << std::setw(10) << tmp_Nickname << std::endl;
	return;
}

void	Contact::DisplayContact(void) const
{
	std::cout << "First name : " << _FName << std::endl;
	std::cout << "Last name : " << _LName << std::endl;
	std::cout << "Nickname : " << _Nickname << std::endl;
	std::cout << "Phone number : " << _PhoneNumber << std::endl;
	std::cout << "Darkest secret : " << _DarkestSecret << std::endl;
}
