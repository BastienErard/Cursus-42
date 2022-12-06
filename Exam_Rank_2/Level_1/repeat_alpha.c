/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berard <berard@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 15:38:50 by berard            #+#    #+#             */
/*   Updated: 2022/12/06 15:54:12 by berard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;
	int	j;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i] != '\0')
		{
			if (argv[1][i] >= 97 && argv[1][i] <= 122)
			{
				j = 97;
				while (j <= argv[1][i])
				{
					write(1, &argv[1][i], 1);
					j++;
				}
			}
			else if (argv[1][i] >= 65 && argv[1][i] <= 90)
			{
				j = 65;
				while (j <= argv[1][i])
				{
					write(1, &argv[1][i], 1);
					j++;
				}
			}
			else
				{
					write(1, &argv[1][i], 1);
				}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
