/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tastybao <tastybao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 14:06:48 by berard            #+#    #+#             */
/*   Updated: 2023/04/18 19:44:33 by tastybao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
Copies n bytes from the memory area src to the memory area dst.
The memory areas must not overlap.
@param dst The pointer to the destination buffer to copy to.
@param src The pointer to the source buffer to copy from.
@param n The number of bytes to copy.
@return A pointer to the destination buffer (dst).
There are no side effects for this function.
Example usage:
char src[] = "Hello, world!";
char dst[20];
ft_memcpy(dst, src, sizeof(src));
printf("%s", dst);
Output: "Hello, world!"
*/
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (dest == (NULL) && src == (NULL))
	{
		return (0);
	}
	while (i < n)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dest);
}
