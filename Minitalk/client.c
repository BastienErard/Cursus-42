/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berard <berard@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 11:14:41 by berard            #+#    #+#             */
/*   Updated: 2022/12/19 17:51:46 by berard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	ft_send(int pid, char *str)
{
	int	i;
	int	j;
	int	bit;

	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (j < 8)
		{
			bit = (str[i] >> j & 1);
			if (bit == 1)
			{
				kill(pid, SIGUSR1);
			}
			else if (bit == 0)
			{
				kill(pid, SIGUSR2);
			}
			printf("%d", bit);
			usleep(1000);
			j++;
		}
		i++;
	}
}

int	main(int argc, char *argv[])
{
	int	pid;

	if (argv[1])
	{
		pid = atoi(argv[1]);
		if (!pid)
		{
			printf("Please use the correct PID with only one argument.\n");
			return (0);
		}
	}
	if (argc == 3)
		ft_send(pid, argv[2]);
	else
		printf("Please use the correct PID with only one argument.\n");
	return (0);
}
