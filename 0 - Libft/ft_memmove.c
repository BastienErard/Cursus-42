/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tastybao <tastybao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 16:00:05 by berard            #+#    #+#             */
/*   Updated: 2023/04/18 19:44:41 by tastybao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
Copies a block of memory, handling overlapping regions.
@param [dst] Pointer to the destination array where the content is to be copied.
@param [src] Pointer to the source of data to be copied.
@param [len] Number of bytes to copy.
@return Pointer to the destination array.
This function copies the values of len bytes from the memory block pointed to
by src to the memory block pointed to by dst. If the regions overlap,
the function ensures that the original source values are copied before they
are overwritten. The behavior of this function is undefined if the source and
destination arrays overlap in such a way that the copy is not possible.
Example usage:
char src[10] = "0123456789";
char dst[10];
ft_memmove(dst, src+2, 7);
// Now dst should be "2345678\0"
*/
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	i = 0;
	if (dst == (NULL) && src == (NULL))
	{
		return (0);
	}
	if (dst > src)
	{
		while (len > 0)
		{
			((unsigned char *)dst)[len - 1] = ((unsigned char *)src)[len - 1];
			len --;
		}
	}
	else
	{
		while (i < len)
		{
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	return (dst);
}
