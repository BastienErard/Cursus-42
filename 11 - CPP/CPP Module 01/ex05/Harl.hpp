/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berard <berard@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 14:32:26 by berard            #+#    #+#             */
/*   Updated: 2023/09/28 15:03:48 by berard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>
#include <istream>
#include <iomanip>
#include <string>

class Harl
{
	public :
			Harl();
			~Harl();
			void	complain(std::string level);

	private :
			void	_debug(void);
			void	_info(void);
			void	_warning(void);
			void	_error(void);
};

#endif
