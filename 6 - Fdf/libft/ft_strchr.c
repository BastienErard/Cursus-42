/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tastybao <tastybao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 16:48:21 by berard            #+#    #+#             */
/*   Updated: 2023/04/18 19:52:27 by tastybao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
Searches for the first occurrence of a character in a string.
@param [s] The string to search in.
@param [c] The character to search for.
@return A pointer to the first occurrence of the character in the string,
or NULL if the character is not found.
This function searches for the first occurrence of the character c (converted
to a char) in the string s. The terminating null character is considered to
be part of the string, so the function will return a pointer to it if c is
'\0'.
*/
char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
		{
			return ((char *)&s[i]);
		}
		i++;
	}
	if ('\0' == (char)c)
	{
		return ((char *)&s[i]);
	}
	return (0);
}
