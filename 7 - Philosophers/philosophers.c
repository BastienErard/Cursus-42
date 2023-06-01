/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philosophers.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berard <berard@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 17:18:31 by berard            #+#    #+#             */
/*   Updated: 2023/06/01 17:40:27 by berard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosophers.h"

/* Initialize the structure of a philosopher with all available elements. */
void	init_struct_philo(t_data *data, t_philo *philo, int i, t_forks *forks)
{
	forks[i].taken = false;
	pthread_mutex_init(&forks[i].fork, NULL);
	philo->forks = forks;
	philo->id = i + 1;
	philo->nb_philos = data->n_philo;
	philo->t_die = data->t_die;
	philo->t_eat = data->t_eat;
	philo->t_sleep = data->t_sleep;
	philo->n_meal = data->n_meal;
	philo->meal = 0;
	philo->last_meal = 0;
	philo->alive = true;
}

/* Initializee one structure per philosopher. */
t_philo	*init_philo(t_data *data, t_philo *philo)
{
	int		i;
	t_forks	*forks;

	i = -1;
	philo = malloc(sizeof(*philo) * data->n_philo);
	if (!philo)
		return (NULL);
	forks = malloc(sizeof(*forks) * data->n_philo);
	if (!forks)
	{
		free(philo);
		return (NULL);
	}
	while (++i < data->n_philo)
		init_struct_philo(data, &philo[i], i, forks);
	return (philo);
}

/* Initializes the data with the elements given as arguments. */
void	init_data(t_data *data, char **argv)
{
	data->n_philo = ft_atoi(argv[1]);
	data->t_die = ft_atoi(argv[2]);
	data->t_eat = ft_atoi(argv[3]);
	data->t_sleep = ft_atoi(argv[4]);
	if (argv[5])
		data->n_meal = ft_atoi(argv[5]);
	else
		data->n_meal = 0;
}

int	main(int argc, char *argv[])
{
	t_data	data;
	t_philo	*philo;
	int		flag;

	flag = check_errors(argc, argv);
	philo = NULL;
	if (flag != 0)
	{
		display_errors(flag);
		return (EXIT_FAILURE);
	}
	init_data(&data, argv);
	philo = init_philo(&data, philo);
	if (!philo)
		return (EXIT_FAILURE);
	launch_simulation(&data, philo);
	return (freedom(philo));
}
