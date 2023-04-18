/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tastybao <tastybao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 13:31:49 by berard            #+#    #+#             */
/*   Updated: 2023/04/18 19:52:35 by tastybao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
Returns a newly allocated string which is a duplicate of the given string.
@param s1 The string to duplicate.
@return A pointer to the newly allocated duplicated string,
or NULL if allocation failed.
This function allocates a new memory block and copies the contents of
the given string into it. The new string will be null-terminated, and can
be modified or freed without affecting the original string.
*/
char	*ft_strdup(const char *s1)
{
	int		i;
	int		j;
	char	*dest;

	i = ft_strlen(s1) + 1;
	j = 0;
	dest = malloc(sizeof(char) * i);
	if (dest == 0)
	{
		return (NULL);
	}
	while (s1[j] != '\0')
	{
		dest[j] = s1[j];
		j++;
	}
	dest[j] = '\0';
	return (dest);
}
