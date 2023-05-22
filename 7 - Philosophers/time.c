/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   time.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berard <berard@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 14:33:48 by berard            #+#    #+#             */
/*   Updated: 2023/05/22 11:45:13 by berard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosophers.h"

int		get_timestamp(void)
{
	static struct timeval	init_time = {0};
	struct timeval			current_time;
	int						time;

	gettimeofday(&current_time, NULL);
	if (init_time.tv_sec == 0)
		init_time = current_time;
	time = (current_time.tv_sec - init_time.tv_sec) * 1000
		+ (current_time.tv_usec - init_time.tv_usec) / 1000;
	return (time);
}
