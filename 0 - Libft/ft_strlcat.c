/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tastybao <tastybao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 18:17:17 by berard            #+#    #+#             */
/*   Updated: 2023/04/18 19:46:26 by tastybao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
Appends the NUL-terminated string src to the end of dst
(dst must have enough space to hold both dst and src).
The size of dst must be passed as a parameter to prevent buffer overflows.
@param [dst] Pointer to the destination string.
@param [src] Pointer to the string to be appended.
@param [dstsize] The size of the destination buffer.
@return Returns the length of the concatenated string
(initial length of dst + length of src).
This function has no side effects.
*/
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dst[j] != '\0' && j < dstsize)
	{
		j++;
	}
	while (src[i] != '\0' && i + j + 1 < dstsize)
	{
		dst[j + i] = src[i];
		i++;
	}
	if (j != dstsize)
	{
	dst[j + i] = '\0';
	}
	return (j + ft_strlen(src));
}
