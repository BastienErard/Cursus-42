/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berard <berard@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 09:25:36 by berard            #+#    #+#             */
/*   Updated: 2024/01/24 10:47:52 by berard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

#include <iostream>
#include <string>
#include <cstdint>
#include "Data.hpp"

class Serializer
{
	public :
		static uintptr_t	serialize(Data *ptr);
		static Data			*deserialize(uintptr_t raw);
	private :
		Serializer(void);
		Serializer(Serializer const &src);
		~Serializer(void);

		Serializer	&operator=(Serializer const & rhs);
};

#endif
