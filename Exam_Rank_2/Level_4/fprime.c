/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berard <berard@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 09:47:34 by berard            #+#    #+#             */
/*   Updated: 2022/12/14 11:25:50 by berard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	nb;

	i = 0;
	nb = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10 + (str[i] - 48);
		i++;
	}
	return (nb);
}

int	main(int argc, char *argv[])
{
	int	nb;
	int	i;

	i = 1;
	nb = ft_atoi(argv[1]);
	if (argc == 2)
	{
		if (nb == 1)
		{
			printf("1");
		}
		i++;
		while (nb >= i)
		{
			if (nb % i == 0)
			{
				printf("%d", i);
				if (nb == i)
				{
					break;
				}
				printf("*");
				nb = nb / i;
				i = 1;
			}
			i++;
		}
	}
	printf("\n");
	return (0);
}
