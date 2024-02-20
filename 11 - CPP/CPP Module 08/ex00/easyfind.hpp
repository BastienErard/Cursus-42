/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tastybao <tastybao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 12:11:13 by tastybao          #+#    #+#             */
/*   Updated: 2024/02/19 18:56:42 by tastybao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <list>

class NumberNotFound : public std::exception
{
	public:
		virtual const char *what() const throw()
		{
			return "Number not found in the list!";
		}
};

template <typename T>
void	easyfind(T &list, int x)
{
	typename T::iterator it = std::find(list.begin(), list.end(), x);
	if (it != list.end())
	{
		int	pos = std::distance(list.begin(), it);
		std::cout << "Found the number on the position number "<< pos << std::endl;
	}
	else
		throw NumberNotFound();
}


#endif
