/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tastybao <tastybao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 18:56:20 by tastybao          #+#    #+#             */
/*   Updated: 2023/09/27 17:45:52 by tastybao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SED_HPP
# define SED_HPP

#include <iostream>
#include <istream>
#include <fstream>
#include <string>

class Str
{
	public	:
				Str();
				~Str();
				void	RegisterStr(std::string s1, std::string s2);
				std::string	GetS1(void);
				std::string	GetS2(void);

	private	:
				std::string	_s1;
				std::string	_s2;
};

#endif
