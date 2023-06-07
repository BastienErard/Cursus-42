/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   logs_and_forks.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tastybao <tastybao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 18:10:18 by berard            #+#    #+#             */
/*   Updated: 2023/06/07 11:49:43 by tastybao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosophers.h"

/* Displays various messages on the terminal. */
void	display_logs(t_philo *philo, int flag)
{
	if (flag == DEAD)
		printf("%d %d died\n", get_timestamp(), philo->id);
	else if (flag == EAT)
		printf("%d %d is eating\n", get_timestamp(), philo->id);
	else if (flag == SLEEP)
		printf("%d %d is sleeping\n", get_timestamp(), philo->id);
	else if (flag == THINK)
		printf("%d %d is thinking\n", get_timestamp(), philo->id);
	else if (flag == FORK)
		printf("%d %d has taken a fork\n", get_timestamp(), philo->id);
}

bool	grab_fork(t_philo *philo, t_forks *forks)
{
	pthread_mutex_lock(&forks->fork);
	if (!forks->taken)
	{
		forks->taken = true;
		display_logs(philo, FORK);
		pthread_mutex_unlock(&forks->fork);
		return (true);
	}
	pthread_mutex_unlock(&forks->fork);
	return (false);
}

void	free_fork(t_forks *forks)
{
	pthread_mutex_lock(&forks->fork);
	forks->taken = false;
	pthread_mutex_unlock(&forks->fork);
}
