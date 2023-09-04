/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tastybao <tastybao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 16:14:57 by tastybao          #+#    #+#             */
/*   Updated: 2023/09/04 15:56:09 by tastybao         ###   ########.fr       */
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
