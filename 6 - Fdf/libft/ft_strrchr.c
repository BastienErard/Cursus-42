/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tastybao <tastybao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 17:40:36 by berard            #+#    #+#             */
/*   Updated: 2023/04/18 19:53:45 by tastybao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
Returns a pointer to the last occurrence of
the character c in the string s.
@param [s] The string to search in.
@param [c] The character to search for.
@return A pointer to the last occurrence of
the character c in the string s, or NULL if not found.
This function searches the string s for the
last occurrence of the character c. The terminating null
character is considered part of the string,
so it can also be searched for.
*/
char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == (char)c)
		{
			return ((char *)&s[i]);
		}
		i--;
	}
	return (NULL);
}
