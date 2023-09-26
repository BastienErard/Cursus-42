/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tastybao <tastybao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 11:40:41 by berard            #+#    #+#             */
/*   Updated: 2023/09/26 18:52:15 by tastybao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"

Str::Str()
{
	return;
}

Str::~Str()
{
	return;
}

void	Str::RegisterStr(std::string s1, std::string s2)
{
	_s1 = s1;
	_s2 = s2;
	return;
}

std::string	Str::GetS1(void)
{
	return (_s1);
}

std::string	Str::GetS2(void)
{
	return (_s2);
}

