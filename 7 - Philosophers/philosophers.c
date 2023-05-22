/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philosophers.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berard <berard@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 17:18:31 by berard            #+#    #+#             */
/*   Updated: 2023/05/22 17:29:13 by berard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosophers.h"

void	init_data(t_data *data, char **argv)
{
	data->n_philo = ft_atoi(argv[1]);
	data->t_die = ft_atoi(argv[2]);
	data->t_eat = ft_atoi(argv[3]);
	data->t_sleep = ft_atoi(argv[4]);
	if (argv[5])
		data->n_meal = ft_atoi(argv[5]);
	get_timestamp();
}

int	main(int argc, char *argv[])
{
	t_data	data;
	int		flag;

	flag = check_errors(argc, argv);
	if (flag != 0)
	{
		display_errors(flag);
		return (0);
	}
	init_data(&data, argv);
	// init_philo(&data);
	return (0);
}
