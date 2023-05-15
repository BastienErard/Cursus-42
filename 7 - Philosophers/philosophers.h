/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philosophers.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berard <berard@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 17:19:00 by berard            #+#    #+#             */
/*   Updated: 2023/05/15 11:31:01 by berard           ###   ########.fr       */
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

typedef struct s_philo
{
	int	n_philo;
	int	t_die;
	int	t_eat;
	int	t_sleep;
	int	n_meal;
}	t_philo;

// Main

void	initialization(t_philo *philo, char **argv);

// Check and display errors

void	display_errors(int flag);
int		check_errors(int argc, char **argv);
int		digital(char *argv);
long	atol(const char *str);

// Utils

int		ft_atoi(const char *str);

#endif
