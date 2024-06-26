/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berard <berard@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 11:40:41 by berard            #+#    #+#             */
/*   Updated: 2023/09/28 13:27:21 by berard           ###   ########.fr       */
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

std::string	Str::ReplaceStr(void)
{
	size_t	pos;
	std::string	newLine;

	pos = 0;
	while ((pos = line.find(_s1)) != std::string::npos)
	{
		newLine += line.substr(0, pos);
		newLine += _s2;
		line.erase(0, pos + _s1.length());
	}
	return (newLine + line);
}
