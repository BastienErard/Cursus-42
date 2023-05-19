/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philosophers.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berard <berard@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 17:18:31 by berard            #+#    #+#             */
/*   Updated: 2023/05/19 15:49:10 by berard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosophers.h"

void	initialization(t_philo *philo, char **argv)
{
	philo->n_philo = ft_atoi(argv[1]);
	philo->t_die = ft_atoi(argv[2]);
	philo->t_eat = ft_atoi(argv[3]);
	philo->t_sleep = ft_atoi(argv[4]);
	if (argv[5])
		philo->n_meal = ft_atoi(argv[5]);
}

int	main(int argc, char *argv[])
{
	t_philo	philo;
	int		flag;

	flag = check_errors(argc, argv);
	if (flag != 0)
	{
		display_errors(flag);
		return (0);
	}
	initialization(&philo, argv);
	get_timestamp();
	sleep(1);
	printf("This is value %d\n", get_timestamp());
	return (0);
}
