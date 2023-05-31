/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   actions.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berard <berard@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 18:25:01 by berard            #+#    #+#             */
/*   Updated: 2023/05/31 17:50:29 by berard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosophers.h"

void	*actions(void *args)
{
	t_philo	*philo;

	philo = (t_philo *)args;
	printf("This is philo number %d and fork number %d and total is %d\n", philo->id, philo->fork[philo->id - 1].taken, philo->nb_philos);
	return (NULL);
}
