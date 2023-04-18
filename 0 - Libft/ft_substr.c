/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tastybao <tastybao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 16:04:53 by berard            #+#    #+#             */
/*   Updated: 2023/04/18 19:47:37 by tastybao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
Allocates and returns a substring of the given string.
@param [s] The string to extract the substring from.
@param [start] The starting index of the substring in
the string s.
@param [len] The length of the substring to extract.
@return A pointer to the newly allocated substring, or
NULL if the allocation fails.
This function allocates memory for the substring, and copies
len characters from the string s starting
at index start. If start is greater than or equal to the length
of the string s, or if len is 0,
the function returns an empty string. If len is greater than
the remaining characters after start,
the function copies only the remaining characters.
The returned substring is null-terminated.
*/
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	int		i;

	i = 0;
	if (ft_strlen(s) <= start)
	{
		len = 0;
	}
	if (ft_strlen(s) - start < len)
	{
		len = ft_strlen(s) - start;
	}
	ptr = malloc(sizeof(char const) * (len + 1));
	if (ptr == 0)
	{
		return (NULL);
	}
	while (len > 0)
	{
		ptr[i] = s[start + i];
		i++;
		len --;
	}
	ptr[i] = '\0';
	return (ptr);
}
