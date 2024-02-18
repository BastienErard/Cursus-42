/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tastybao <tastybao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 21:30:27 by tastybao          #+#    #+#             */
/*   Updated: 2024/02/18 18:56:52 by tastybao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>

template <typename T>
class Array
{
	class IndexIsOutOfBounds : public std::exception
	{
		public :
			virtual const char *what() const throw()
			{
				return ("Index is out of bounds! Please try again!");
			}
	};

	public :
		Array<T>(void);
		Array<T>(unsigned int const n);
		Array<T>(Array const & src);
		~Array<T>(void);

		Array<T>	&operator=(Array const & rhs);
		T	&operator[](unsigned int const i);

		unsigned int	size() const;

	private :
		T*				_array;
		unsigned int	_size;
};

#endif
