/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tastybao <tastybao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 12:25:21 by berard            #+#    #+#             */
/*   Updated: 2023/04/18 19:42:51 by tastybao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
Allocates a block of memory for an array of elements,
each of them size bytes long, and initializes
all its bits to zero. The function returns a
pointer to the allocated memory block.
@param count Number of elements to be allocated.
@param size Size of each element in bytes.
@return Pointer to the newly allocated memory block,
or NULL if the allocation fails.
The function has the side effect of allocating a block of memory
and setting all its bits to zero using ft_bzero().
Example usage:
int *nums = (int *)ft_calloc(10, sizeof(int));
// Allocates an array of 10 integers, all set to zero.
*/
void	*ft_calloc(size_t count, size_t size)
{
	char	*ptr;

	ptr = malloc(count * size);
	if (ptr == 0)
	{
		return (NULL);
	}
	ft_bzero(ptr, count * size);
	return (ptr);
}
