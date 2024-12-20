/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tastybao <tastybao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 10:23:42 by berard            #+#    #+#             */
/*   Updated: 2023/04/18 19:51:05 by tastybao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
Locates the first occurrence of a character in a block of memory.
@param s A pointer to the block of memory to be searched.
@param c The character to be located.
@param n The number of bytes to be searched.
@return A pointer to the first occurrence of the character,
or NULL if the character is not found.
The function has no side effects.
Example usage:
char str[] = "hello";
char *ptr = ft_memchr(str, 'l', 5);
if (ptr != NULL)
{
perl
Copy code
printf("The character 'l' was found at position %ld\n", ptr - str);
}
else
{
bash
Copy code
printf("The character 'l' was not found\n");
}
*/
void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s)[i] == (unsigned char) c)
		{
			return ((unsigned char *)&s[i]);
		}
		i++;
	}
	return (NULL);
}
