/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   threads.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tastybao <tastybao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 18:24:54 by berard            #+#    #+#             */
/*   Updated: 2023/06/12 21:48:26 by tastybao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosophers.h"

/* Starts the simu by creating the threads and waiting for them to finish. */
void	launch_simulation(t_data *data, t_philo *philo)
{
	pthread_t	*thread_id;
	int			i;

	i = -1;
	thread_id = malloc(sizeof(*thread_id) * data->n_philo);
	if (!thread_id)
		return ;
	while (++i < data->n_philo)
	{
		if (pthread_create(&thread_id[i], NULL, actions, &philo[i]) != 0)
		{
			printf("Error during pthread_create\n");
			return (free(thread_id));
		}
	}
	i = -1;
	while (++i < data->n_philo)
	{
		if (pthread_join(thread_id[i], NULL) != 0)
		{
			printf("Error during pthread_join\n");
			return (free(thread_id));
		}
	}
	free(thread_id);
}
