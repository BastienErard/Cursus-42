/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berard <berard@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 11:31:39 by berard            #+#    #+#             */
/*   Updated: 2022/10/28 17:39:15 by berard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (needle[0] == '\0')
	{
		return ((char *)haystack);
	}
	while (haystack[i] != '\0' && i <= len)
	{
		j = 0;
		while (haystack[i] == needle[j] || needle[j] == '\0')
		{
			if (needle[j] == '\0' && i <= len)
			{
				return (&((char *)(haystack))[i - j]);
			}
			j++;
			i++;
		}
		i = i - j;
		i++;
	}
	return (NULL);
}
