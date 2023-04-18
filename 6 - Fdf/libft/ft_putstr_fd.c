/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tastybao <tastybao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 14:59:12 by berard            #+#    #+#             */
/*   Updated: 2023/04/18 19:52:09 by tastybao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
Outputs a string to a file descriptor.
@param s The string to output.
@param fd The file descriptor to write to.
@return void.
This function writes the string 's' to the file descriptor 'fd'.
Example usage:
char *str = "Hello, world!";
int fd = open("output.txt", O_WRONLY | O_CREAT, 0644);
ft_putstr_fd(str, fd);
close(fd);
*/
void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		write(fd, &s[i], 1);
		i++;
	}
}
