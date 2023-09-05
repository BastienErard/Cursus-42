/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berard <berard@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 16:14:57 by tastybao          #+#    #+#             */
/*   Updated: 2023/09/05 15:10:19 by berard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	return;
}

PhoneBook::~PhoneBook()
{
	return;
}

void	PhoneBook::AddContact(void)
{
	static int	Index = 0;

	_Contact[Index].NewContact();
	Index += 1;
	if (Index == 8)
		Index = 0;
	return;
}

void	PhoneBook::SearchContact(void) const
{
	int			Index;
	std::string	Input;

	if (_Contact[0].GetFName().empty())
	{
		std::cout << "There is no contact to search for." << std::endl;
		return;
	} //
	Index = DisplayAllContacts();
	std::cout << "Enter the index of the contact you want to see : ";
	std::getline(std::cin, Input);
	if (Input.length() != 1 || Input[0] < '1' || Input[0] > Index + '0')
	{
		std::cout << "Please enter a valid index." << std::endl;
		return;
	}
	Index = Input[0] - '0';
	_Contact[Index - 1].DisplayContact();
	return;
}

int	PhoneBook::DisplayAllContacts(void) const
{
	int	index;

	index = -1;
	std::cout << std::setw(10) << "index" << "|";
	std::cout << std::setw(10) << "first name" << "|";
	std::cout << std::setw(10) << "last name" << "|";
	std::cout << std::setw(10) << "nickname" << std::endl;
	while (++index < 8 && !_Contact[index].GetFName().empty())
	{
		std::cout << std::setw(10) << index + 1 << "|";
		_Contact[index].PrintIndex();
	}
	return (index);
}
