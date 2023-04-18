/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tastybao <tastybao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 16:05:13 by berard            #+#    #+#             */
/*   Updated: 2023/04/18 19:45:08 by tastybao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
Outputs the string s followed by a newline character to the file descriptor fd.
@param s The string to output.
@param fd The file descriptor to write to.
@return None.
This function writes the characters of the string s to the file descriptor fd
using the ft_putchar_fd function. It then writes a newline character to the same
file descriptor using ft_putchar_fd.
*/
void	ft_putendl_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		write(fd, &s[i], 1);
		i++;
	}
	write(fd, "\n", 1);
}
