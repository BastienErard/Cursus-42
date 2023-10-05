/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tastybao <tastybao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 18:06:26 by tastybao          #+#    #+#             */
/*   Updated: 2023/10/05 20:43:32 by tastybao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	public :
			Fixed(void);
			Fixed(const int n);
			Fixed (const float n);
			Fixed(Fixed const & src);
			~Fixed(void);

			Fixed &operator=(Fixed const & rhs);

			int		getRawBits(void) const;
			void	setRawBits(int const raw);
			float	toFloat(void) const;
			int		toInt(void) const;

	private :
			int	_n;
			static int const	_bits = 8;

};

std::ostream &operator<<(std::ostream &out, Fixed const & rhs);

#endif
