/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berard <berard@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 17:40:35 by berard            #+#    #+#             */
/*   Updated: 2023/05/17 13:51:53 by berard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosophers.h"

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

int	digital(char *argv)
{
	int	i;

	i = -1;
	while (argv[++i])
		if (argv[i] < 48 || argv[i] > 57)
			return (1);
	return (0);
}

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

