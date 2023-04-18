/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tastybao <tastybao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 11:31:39 by berard            #+#    #+#             */
/*   Updated: 2023/04/18 19:47:13 by tastybao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
Locate the first occurrence of a substring in a string, where not more than len
characters are searched. A null-terminated character sequence is called a
string. The function locates the first occurrence of the null-terminated string
needle in the string haystack, where not more than len characters are searched.
Characters that appear after a `\0' character are not searched.
@param [haystack] The string to search in.
@param [needle] The substring to search for.
@param [len] The maximum number of characters to search.
@return Returns a pointer to the beginning of the located substring, or NULL if
the substring is not found.
This function has no side effects.
*/
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (needle[0] == '\0')
	{
		return ((char *)haystack);
	}
	while (haystack[i] != '\0' && i < len)
	{
		j = 0;
		while (haystack[i + j] == needle[j] && i + j < len)
		{
			if (needle[j + 1] == '\0')
			{
				return ((char *)&haystack[i]);
			}
			j++;
		}
		i++;
	}
	return (NULL);
}
