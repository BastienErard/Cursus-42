/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tastybao <tastybao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 19:17:08 by tastybao          #+#    #+#             */
/*   Updated: 2024/02/17 21:23:16 by tastybao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template <typename T>
void	iter(T *array, size_t const length, void (*print)(T &))
{
	size_t	i = -1;
	while (++i < length)
		print(array[i]);
	return ;
}

template <typename T>
void	print(T &member)
{
	std::cout << member << std::endl;
	return ;
}

#endif
