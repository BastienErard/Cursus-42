/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tastybao <tastybao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 09:18:29 by berard            #+#    #+#             */
/*   Updated: 2023/04/18 19:49:54 by tastybao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
Converts a string of digits to its integer representation.
The function ignores leading whitespace characters,
followed by an optional sign character ('+' or '-'),
and converts subsequent digits to an integer value. The
function returns the converted integer value.
@param str The string to be converted to an integer.
@return The integer value corresponding to the input string.
The function has no side effects.
Example usage:
const char *str = " -1234 ";
int result = ft_atoi(str); // Returns -1234
*/
int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	nb;

	i = 0;
	sign = 1;
	nb = 0;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == '\r' || str[i] == ' ')
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = ((nb * 10) + (str[i] - 48));
		i++;
	}
	nb = nb * sign;
	return (nb);
}
