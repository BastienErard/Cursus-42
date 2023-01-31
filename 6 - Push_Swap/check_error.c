/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berard <berard@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 13:39:35 by berard            #+#    #+#             */
/*   Updated: 2023/01/25 13:29:31 by berard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_check_int(char *str)
{
	long	nb;

	nb = ft_atol(str);
	if (nb > 2147483647 || nb < -2147483648)
		return (0);
	return (1);
}

int	ft_check_sign(char *str)
{
	if (str[0] == '-' || str[0] == '+')
		return (1);
	return (0);
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

int	ft_check_double(int argc, char *argv[])
{
	int	i;
	int	j;
	int	add;

	i = 1;
	if (argc == 2)
		i = 0;
	j = i;
	while (argv[i])
		i++;
	i--;
	while (j < i)
	{
		add = 0;
		while ((j + add) < i)
		{
			if (ft_atoi(argv[j]) == ft_atoi(argv[i - add]))
				return (0);
			add++;
		}
		j++;
	}
	return (1);
}
