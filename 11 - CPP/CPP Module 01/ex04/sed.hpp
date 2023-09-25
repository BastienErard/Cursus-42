/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berard <berard@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 18:56:20 by tastybao          #+#    #+#             */
/*   Updated: 2023/09/25 14:46:07 by berard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SED_HPP
# define SED_HPP

#include <iostream>
#include <istream>
#include <string>

class Str
{
	public	:
				Str();
				~Str();
				void	RegisterString(std::string s1, std::string s2);

	private	:
				std::string	_s1;
				std::string	_s2;
};

#endif
