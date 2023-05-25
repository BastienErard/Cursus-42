/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philosophers.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berard <berard@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 17:19:00 by berard            #+#    #+#             */
/*   Updated: 2023/05/25 15:10:58 by berard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILOSOPHERS_H
# define PHILOSOPHERS_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <sys/time.h>
# include <pthread.h>

// Structures

typedef struct s_data
{
	int	n_philo;
	int	t_die;
	int	t_eat;
	int	t_sleep;
	int	n_meal;
}	t_data;

typedef struct s_philo
{
	int	id;
	int	t_die;
	int	t_eat;
	int	t_sleep;
	int	n_meal;
	int	meal;
	int	last_meal;
}	t_philo;

// Main

void	init_data(t_data *data, char **argv);
t_philo	*init_philo(t_data *data, t_philo *philo);
void	init_struct_philo(t_data *data, t_philo *philo, int i);

// Check and display errors

void	display_errors(int flag);
int		check_errors(int argc, char **argv);
int		digital(char *argv);

// Time

int		get_timestamp(void);

// Threads

void	launch_simulation(t_data *data, t_philo *philo);

// Actions

void	*actions(void *args);

// Utils

int		ft_atoi(const char *str);
long	atol(const char *str);

#endif
