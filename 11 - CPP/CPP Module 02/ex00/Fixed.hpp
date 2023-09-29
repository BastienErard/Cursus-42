/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berard <berard@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 17:14:45 by berard            #+#    #+#             */
/*   Updated: 2023/09/29 17:29:24 by berard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
	public :
		Fixed();
		~Fixed();
		int		getRawBits(void) const;
		void	setRawBits(int const raw);

	private :
		int	_x;
		static const int	_fractio;
};

#endif
