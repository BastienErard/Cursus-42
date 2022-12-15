/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berard <berard@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 10:58:36 by berard            #+#    #+#             */
/*   Updated: 2022/12/15 11:01:31 by berard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char *argv[])
{
	int	nb;
	int	i;

	i = 2;
	nb = atoi(argv[1]);
	if (argc == 2)
	{
		if (nb == 1)
		{
			printf("1");
		}
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
