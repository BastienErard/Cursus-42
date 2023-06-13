/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   logs_and_forks.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berard <berard@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 18:10:18 by berard            #+#    #+#             */
/*   Updated: 2023/06/13 11:35:28 by berard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosophers.h"

/* Displays various messages on the terminal. */
void	display_logs(t_philo *philo, int flag)
{
	pthread_mutex_lock(&philo->manager->manager);
	if (!philo->manager->alive || philo->manager->stop)
	{
		philo->stop = true;
		pthread_mutex_unlock(&philo->manager->manager);
		return ;
	}
	if (flag == DEAD)
	{
		philo->manager->alive = false;
		printf("\033[1;31m%d\t%d died💀\n", get_timestamp(), philo->id);
	}
	else if (flag == EAT)
		printf("\033[0;32m%d\t%d is eating🍝\n", get_timestamp(), philo->id);
	else if (flag == SLEEP)
		printf("\033[0;34m%d\t%d is sleeping💤\n", get_timestamp(), philo->id);
	else if (flag == THINK)
		printf("\033[0;33m%d\t%d is thinking🤔\n", get_timestamp(), philo->id);
	else if (flag == FORK)
		printf("\033[0;35m%d\t%d has taken a fork🍴\n", get_timestamp(), philo->id);
	printf("\033[0m");
	pthread_mutex_unlock(&philo->manager->manager);
}

/* Take the forks using the mutex beforehand. */
bool	grab_fork(t_philo *philo, t_forks *forks)
{
	pthread_mutex_lock(&forks->fork);
	if (!forks->taken)
	{
		forks->taken = true;
		pthread_mutex_unlock(&forks->fork);
		display_logs(philo, FORK);
		return (true);
	}
	pthread_mutex_unlock(&forks->fork);
	return (false);
}

/* Releases used forks. */
void	free_fork(t_forks *forks)
{
	pthread_mutex_lock(&forks->fork);
	forks->taken = false;
	pthread_mutex_unlock(&forks->fork);
}
