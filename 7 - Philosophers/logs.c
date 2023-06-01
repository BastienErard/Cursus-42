/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   logs.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berard <berard@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 18:10:18 by berard            #+#    #+#             */
/*   Updated: 2023/06/01 18:25:46 by berard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosophers.h"

void	display_logs(t_philo *philo, int flag)
{
	if (flag == DEAD)
		printf("%d %d died\n", get_timestamp(), philo->id);
	else if (flag == EAT)
		printf("%d %d is eating\n", get_timestamp(), philo->id);
	else if (flag == SLEEP)
		printf("%d %d is sleeping\n", get_timestamp(), philo->id);
	else if (flag == THINK)
		printf("%d %d is thinking\n", get_timestamp(), philo->id);
	else if (flag == FORK)
		printf("%d %d has taken a fork\n", get_timestamp(), philo->id);
}
