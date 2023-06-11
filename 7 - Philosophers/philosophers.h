/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philosophers.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tastybao <tastybao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 17:19:00 by berard            #+#    #+#             */
/*   Updated: 2023/06/11 11:21:07 by tastybao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILOSOPHERS_H
# define PHILOSOPHERS_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <sys/time.h>
# include <pthread.h>
# include <stdbool.h>

// Macro

# define DEAD 1
# define EAT 2
# define SLEEP 3
# define THINK 4
# define FORK 5

// Structures

typedef struct s_manager
{
	pthread_mutex_t	manager;
	bool			alive;
	int				full;
}	t_manager;

typedef struct s_forks
{
	pthread_mutex_t	fork;
	bool			taken;
}	t_forks;

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
	int			id;
	int			nb_philos;
	int			t_die;
	int			t_eat;
	int			t_sleep;
	int			n_meal;
	int			meal;
	int			last_meal;
	int			hand;
	bool		alive;
	bool		stop;
	t_forks		*forks;
	// t_manager	*manager;
}	t_philo;

// Main

void	init_data(t_data *data, char **argv);
t_philo	*init_philo(t_data *data, t_philo *philo);
void	init_struct_philo(t_data *data, t_philo *philo, int i, t_forks *fork);
// void	init_manager(t_manager *manager);

// Check and display errors

void	display_errors(int flag);
int		check_errors(int argc, char **argv);
int		digital(char *argv);
int		freedom(t_philo *philo);

// Time

int		get_timestamp(void);

// Threads

void	launch_simulation(t_data *data, t_philo *philo);

// Actions

void	*actions(void *args);
void	dead_or_alive(t_philo *philo);
void	sleepy(t_philo *philo);
void	think(t_philo *philo);
void	eat(t_philo *philo);

// Utils

int		ft_atoi(const char *str);
long	atol(const char *str);

// Logs and forks

void	display_logs(t_philo *philo, int flag);
bool	grab_fork(t_philo *philo, t_forks *forks);
void	free_fork(t_forks *forks);

#endif
