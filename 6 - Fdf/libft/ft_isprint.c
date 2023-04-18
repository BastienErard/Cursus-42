/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tastybao <tastybao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 13:43:17 by berard            #+#    #+#             */
/*   Updated: 2023/04/18 19:50:48 by tastybao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
Checks whether a given character is a printable character, i.e.,
whether its value is between 32 and 126 (inclusive).
@param c The character to be checked.
@return 1 if the character is a printable character, 0 otherwise.
The function has no side effects.
*/
int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
	{
		return (1);
	}
	return (0);
}
