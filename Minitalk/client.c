/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berard <berard@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 11:14:41 by berard            #+#    #+#             */
/*   Updated: 2022/12/19 14:10:35 by berard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

int	main(int argc, char *argv[])
{
	int	pid;

	pid = ft_atoi(argv[1]);
	if (argc == 3)
	{

	}
	else
	{
		printf("Please use the correct PID with only one other argument.");
	}
	return (0);
}
