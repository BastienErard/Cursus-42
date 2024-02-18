/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tastybao <tastybao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 11:26:10 by tastybao          #+#    #+#             */
/*   Updated: 2024/02/17 15:42:37 by tastybao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <iostream>

template <typename nb>
void	swap(nb &x, nb &y)
{
	nb	temp = x;
	x = y;
	y = temp;
}

template <typename nb>
nb const &min(nb const &x, nb const &y)
{
	if (x < y)
		return (x);
	else
		return (y);
}

template <typename nb>
nb const &max(nb const &x, nb const &y)
{
	if (x > y)
		return (x);
	else
		return (y);
}

#endif
