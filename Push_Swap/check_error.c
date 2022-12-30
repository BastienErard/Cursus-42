/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berard <berard@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 13:39:35 by berard            #+#    #+#             */
/*   Updated: 2022/12/30 16:22:10 by berard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_check_int(char *str)
{
	long	i;

	i = ft_atol(str);
	if (i > 2147483647 || i < -2147483648)
		return (0);
	return (1);
}

int	ft_check_sign(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (str[i] == '-' || str[i] == '+')
	{
		i++;
		j++;
	}
	if (str[i] < '0' || str[i] > '9')
	{
		ft_putstr_fd("Error\n", 2);
		exit(0);
	}
	return (j);
}

int	ft_check_error(int argc, char *argv[])
{
	int	i;
	int	j;

	i = 1;
	if (argc == 2)
		i = 0;
	while (argv[i])
	{
		j = 0;
		if (ft_check_sign(argv[i]) == 1)
			j++;
		if (argv[i][j] == '\0')
			return (0);
		while (argv[i][j] != '\0')
		{
			if (ft_isdigit(argv[i][j]) == 0)
				return (0);
			j++;
		}
		if (ft_check_int(argv[i]) == 0)
			return (0);
		i++;
	}
	return (1);
}
