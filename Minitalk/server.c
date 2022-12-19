/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berard <berard@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 11:14:28 by berard            #+#    #+#             */
/*   Updated: 2022/12/19 18:04:13 by berard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	man_signal(int sig)
{
	int	i;

	i = 0;
	while (i < 8)
	{
		if (sig == SIGUSR1)
		{
			printf("1\n");
		}
		else if (sig == SIGUSR2)
		{
			printf("2\n");
		}
		i++;
	}
}

int	main(void)
{
	struct sigaction	signal;

	signal.sa_handler = &man_signal;
	printf("This is the PID : %d\n", getpid());
	if (sigaction(SIGUSR1, &signal, NULL) != 0)
	{
		printf("Error SIGUSR1\n");
	}
	if (sigaction(SIGUSR2, &signal, NULL) != 0)
	{
		printf("Error SIGUSR2\n");
	}
	while (1)
	{
		pause();
	}
	return (0);
}
