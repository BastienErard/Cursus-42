/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berard <berard@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 11:14:41 by berard            #+#    #+#             */
/*   Updated: 2023/04/19 08:29:35 by berard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk_bonus.h"

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

void	man_signal(int sig)
{
	if (sig == SIGUSR1)
	{
		ft_printf("Houston, we don't have a problem 🚀.\n");
		exit(0);
	}
}

int	main(int argc, char *argv[])
{
	int					pid;
	char				*selfpid;
	struct sigaction	signal;

	if (argc != 3)
		return (ft_printf("Please use the correct PID with 1 arg behind.\n"));
	signal = (struct sigaction){0};
	sigemptyset(&signal.sa_mask);
	sigaddset(&signal.sa_mask, SIGUSR1);
	signal.sa_handler = &man_signal;
	if (sigaction(SIGUSR1, &signal, NULL) != 0)
		ft_printf("Error SIGUSR1\n");
	pid = ft_atoi(argv[1]);
	selfpid = ft_itoa(getpid());
	if (!pid || !selfpid)
		return (ft_printf("Please use the correct PID with 1 arg behind.\n"));
	ft_send_str(pid, argv[2]);
	ft_send_str(pid, selfpid);
	free(selfpid);
	while (1)
		pause();
	return (0);
}
