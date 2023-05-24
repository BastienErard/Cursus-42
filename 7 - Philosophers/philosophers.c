/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philosophers.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berard <berard@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 17:18:31 by berard            #+#    #+#             */
/*   Updated: 2023/05/24 18:24:46 by berard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosophers.h"

void	init_struct_philo(t_data *data, t_philo *philo, int i)
{
	philo->id = i + 1;
	philo->t_die = data->t_die;
	philo->t_eat = data->t_eat;
	philo->t_sleep = data->t_sleep;
	philo->n_meal = data->n_meal;
	philo->meal = 0;
	philo->last_meal = 0;
}

t_philo	*init_philo(t_data *data)
{
	t_philo	*philo;
	int		i;

	i = -1;
	philo = malloc(sizeof(*philo) * data->n_philo);
	if (!philo)
		return (NULL);
	while (++i < data->n_philo)
		init_struct_philo(data, &philo[i], i);
	return (philo);
}

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
	get_timestamp();
}

int	main(int argc, char *argv[])
{
	t_data	data;
	t_philo	*philo;
	int		flag;

	flag = check_errors(argc, argv);
	if (flag != 0)
	{
		display_errors(flag);
		return (0);
	}
	init_data(&data, argv);
	philo = init_philo(&data);
	if (!philo)
		return (1);
	free(philo);
	return (0);
}
