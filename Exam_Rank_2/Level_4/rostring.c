/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berard <berard@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 13:45:58 by berard            #+#    #+#             */
/*   Updated: 2022/12/12 14:56:18 by berard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (argc > 1)
	{
		while(argv[1][i] == ' ' || argv[1][i] == '\t')
		{
			i++;
		}
		while(argv[1][i] != ' ' && argv[1][i] != '\0' && argv[1][i] != '\t')
		{
			i++;
		}
		while((argv[1][i] == ' ' || argv[1][i] == '\t') && argv[1][i] != '\0')
		{
			i++;
		}
		while(argv[1][i] != '\0')
		{
			if (argv[1][i] == ' ' || argv[1][i] == '\t')
			{
				while ((argv[1][i] == ' ' || argv[1][i] == '\t') && argv[1][i] != '\0')
				{
					i++;
				}
				if (argv[1][i] == '\0')
				{
					break;
				}
				else
				{
					write(1, " ", 1);
					j++;
				}
			}
			write(1, &argv[1][i], 1);
			i++;
		}
		i = 0;
		if (j > 1)
		{
			write(1, " ", 1);
		}
		while (argv[1][i] == ' ' || argv[1][i] == '\t')
		{
			i++;
		}
		while(argv[1][i] != ' ' && argv[1][i] != '\0' && argv[1][i] != '\t')
		{
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
