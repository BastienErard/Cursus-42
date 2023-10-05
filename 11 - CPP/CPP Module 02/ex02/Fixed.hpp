/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tastybao <tastybao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 22:57:50 by tastybao          #+#    #+#             */
/*   Updated: 2023/10/05 23:13:08 by tastybao         ###   ########.fr       */
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

			Fixed 				&operator=(Fixed const & rhs);

			bool				operator>(const Fixed &n) const;
			bool				operator<(const Fixed &n) const;
			bool				operator>=(const Fixed &n) const;
			bool				operator<=(const Fixed &n) const;
			bool				operator==(const Fixed &n) const;
			bool				operator!=(const Fixed &n) const;

			Fixed				operator+(const Fixed &n) const;
			Fixed				operator-(const Fixed &n) const;
			Fixed				operator*(const Fixed &n) const;
			Fixed				operator/(const Fixed &n) const;

			Fixed				&operator++(void);
			Fixed				operator++(int);
			Fixed				&operator--(void);
			Fixed				operator--(int);

			static Fixed		&min(Fixed &a, Fixed &b);
			static const Fixed	&min(const Fixed &a, const Fixed &b);
			static Fixed		&max(Fixed &a, Fixed &b);
			static const Fixed	&max(const Fixed &a, const Fixed &b);

			int					getRawBits(void) const;
			void				setRawBits(int const raw);
			float				toFloat(void) const;
			int					toInt(void) const;

	private :
			int	_n;
			static int const	_bits = 8;
};

std::ostream &operator<<(std::ostream &out, Fixed const & rhs);

#endif
