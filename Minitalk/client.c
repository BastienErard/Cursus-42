/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berard <berard@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 11:14:41 by berard            #+#    #+#             */
/*   Updated: 2022/12/28 10:07:56 by berard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	ft_send_end(int pid, char c)
{
	int	j;
	int	bit;

	j = 0;
	while (j < 8)
	{
		bit = (c >> j & 1);
		if (bit == 1)
			kill(pid, SIGUSR1);
		else if (bit == 0)
			kill(pid, SIGUSR2);
		usleep(50);
		j++;
	}
}

void	ft_send_str(int pid, char *str)
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
				kill(pid, SIGUSR1);
			else if (bit == 0)
				kill(pid, SIGUSR2);
			usleep(50);
			j++;
		}
		i++;
	}
	ft_send_end(pid, 0);
}

int	main(int argc, char *argv[])
{
	int	pid;

	if (argv[1])
	{
		pid = ft_atoi(argv[1]);
		if (!pid)
		{
			ft_printf("Please use the correct PID with only 1 argument behind.\n");
			return (0);
		}
	}
	if (argc == 3)
		ft_send_str(pid, argv[2]);
	else
		ft_printf("Please use the correct PID with only 1 argument behind.\n");
	return (0);
}
