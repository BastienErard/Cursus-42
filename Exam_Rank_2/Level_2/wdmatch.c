/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berard <berard@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 11:30:17 by berard            #+#    #+#             */
/*   Updated: 2022/12/08 11:41:28 by berard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;
	int	j;
	int	len;

	i = 0;
	j = 0;
	len = 0;
	if (argc == 3)
	{
		while (argv[2][j] != '\0')
		{
			if (argv[2][j] == argv[1][i])
			{
				i++;
			}
			j++;
		}
	while (argv[1][len] != '\0')
	{
		len++;
	}
	if (len == i)
	{
		i = 0;
		while (argv[1][i] != '\0')
		{
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	}
	write(1, "\n", 1);
	return (0);
}
