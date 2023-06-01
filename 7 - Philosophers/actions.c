/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   actions.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berard <berard@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 18:25:01 by berard            #+#    #+#             */
/*   Updated: 2023/06/01 18:12:00 by berard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosophers.h"

void	*actions(void *args)
{
	t_philo	*philo;

	philo = (t_philo *)args;
	philo->last_meal = get_timestamp();
	while (philo->alive)
	{
		dead_or_alive(philo);
	}
	return (NULL);
}

/* Check whether the philosopher is already dead or whether he is due to die. */
void	dead_or_alive(t_philo *philo)
{
	if (!philo->alive)
		return ;
	if (philo->last_meal + philo->t_die < get_timestamp())
	{
		philo->alive = false;
		display_logs(philo, DEAD);
	}
}

// void	*actions(void *args)
// {
// 	t_philo	*philo;

// 	philo = (t_philo *)args;
// 	printf("This is philo number %d and fork number %d and total is %d\n", philo->id, philo->forks[philo->id - 1].taken, philo->nb_philos);
// 	return (NULL);
// }
