/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors_and_free.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berard <berard@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 17:40:35 by berard            #+#    #+#             */
/*   Updated: 2023/06/13 11:05:16 by berard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosophers.h"

/* Checks the possible errors in the arg when the program starts. */
int	check_errors(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc < 5 || argc > 6)
		return (1);
	if (argv[1][0] == '0')
		return (2);
	while (argv[++i])
		if (digital(argv[i]) == 1)
			return (3);
	i = 0;
	while (argv[++i])
		if (atol(argv[i]) > 2147483647 || atol(argv[i]) < -2147483648)
			return (4);
	return (0);
}

/* Checks that the string consists of numbers only. */
int	digital(char *argv)
{
	int	i;

	i = -1;
	while (argv[++i])
		if (argv[i] < 48 || argv[i] > 57)
			return (1);
	return (0);
}

/* Displays error messages if there is a problem with the arg. */
void	display_errors(int flag)
{
	if (flag == 1)
		printf("Wrong number of arguments. Must be between 5 and 6.\n");
	else if (flag == 2)
		printf("You need at least one philosopher for the simulation.\n");
	else if (flag == 3)
		printf("Arguments must be composed exclusively of positive numbers.\n");
	else if (flag == 4)
		printf("The arguments must be contained in an int.\n");
}

/* It frees up all the memory spaces and the various threads. */
int	freedom(t_philo *philo)
{
	int	i;

	i = -1;
	while (++i < philo->nb_philos)
	{
		if (pthread_mutex_destroy(&philo[i].forks[i].fork) != 0)
		{
			printf("Error during pthread_destroy\n");
			return (EXIT_FAILURE);
		}
	}
	free(philo->manager);
	free(philo->forks);
	free(philo);
	return (EXIT_SUCCESS);
}
