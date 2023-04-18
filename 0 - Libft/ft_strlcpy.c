/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tastybao <tastybao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 17:39:41 by berard            #+#    #+#             */
/*   Updated: 2023/04/18 19:46:32 by tastybao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
Copies a string from source to destination up to a maximum of
dstsize - 1 characters, null-terminating the result.
If dstsize is 0 or src is NULL, the function returns the length
of the source string.
@param [dst] Pointer to the destination array.
@param [src] Pointer to the source string.
@param [dstsize] Maximum number of characters to copy.
@return The length of the source string.
If the destination string is smaller than the source string,
the destination string will not be null-terminated.
*/
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize == 0)
	{
		return (ft_strlen(src));
	}
	while (src[i] != '\0' && i < dstsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}
