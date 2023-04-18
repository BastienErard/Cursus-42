/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tastybao <tastybao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 13:23:26 by berard            #+#    #+#             */
/*   Updated: 2023/04/18 19:42:37 by tastybao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
Sets the first n bytes of the block of memory pointed
by s to zero (interpreted as '\0').
@param s Pointer to the block of memory to be zeroed.
@param n Size of the block of memory to be zeroed, in bytes.
@return This function does not return a value.
The function has the side effect of modifying the memory pointed by s,
setting its first n bytes to zero.
Example usage:
char buffer[10];
ft_bzero(buffer, sizeof(buffer)); // Sets the buffer to all zeroes
*/
void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
