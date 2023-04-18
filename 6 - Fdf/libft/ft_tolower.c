/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tastybao <tastybao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 14:10:31 by berard            #+#    #+#             */
/*   Updated: 2023/04/18 19:54:19 by tastybao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
The ft_tolower() function converts an uppercase
letter to its corresponding lowercase letter.
@param c The character to be converted.
@return The corresponding lowercase letter if the
input is an uppercase letter; otherwise, it returns
the input character as is.
There are no side effects for this function.
*/
int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
	{
		c += 32;
	}
	return (c);
}
