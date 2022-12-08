/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berard <berard@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 13:58:36 by berard            #+#    #+#             */
/*   Updated: 2022/12/08 15:13:15 by berard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;

	i = 0;
	if (argc == 2)
	{
		while ((argv[1][i] == ' ' || argv[1][i] == '\t') && argv[1][i] != '\0')
		{
			i++;
		}
		while(argv[1][i] != '\0')
		{
			if (argv[1][i] != ' ' && argv[1][i] != '\t')
			{
				write(1, &argv[1][i], 1);
			}
			else if (argv[1][i] == ' ' || argv[1][i] == '\t')
			{
				if (argv[1][i + 1] != ' ' && argv[1][i + 1] != '\t')
				{
					write(1, &argv[1][i], 1);
				}
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
