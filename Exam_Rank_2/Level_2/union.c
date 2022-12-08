/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berard <berard@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 11:14:10 by berard            #+#    #+#             */
/*   Updated: 2022/12/08 11:28:27 by berard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_check(char *str, char c, int i)
{
	int	j;

	j = 0;
	while (j < i)
	{
		if (str[j] == c)
		{
			return (1);
		}
		j++;
	}
	return (0);
}

int	ft_checko(char *str, char c)
{
	int	j;

	j = 0;
	while (str[j] != '\0')
	{
		if (str[j] == c)
		{
			return (1);
		}
		j++;
	}
	return (0);
}

int	main(int argc, char *argv[])
{
	int	i;

	i = 0;
	if (argc == 3)
	{
		while (argv[1][i] != '\0')
		{
			if (ft_check(argv[1], argv[1][i], i) == 0)
			{
				write(1, &argv[1][i], 1);
			}
			i++;
		}
		i = 0;
		while (argv[2][i] != '\0')
		{
			if (ft_check(argv[2], argv[2][i], i) == 0)
			{
				if (ft_checko(argv[1], argv[2][i]) == 0)
				{
					write(1, &argv[2][i], 1);
				}
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
