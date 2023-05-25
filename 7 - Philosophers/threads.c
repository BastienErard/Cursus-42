/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   threads.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berard <berard@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 18:24:54 by berard            #+#    #+#             */
/*   Updated: 2023/05/25 15:21:55 by berard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosophers.h"

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
