/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berard <berard@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 13:33:23 by berard            #+#    #+#             */
/*   Updated: 2022/12/12 13:37:12 by berard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_rrange(int start, int end)
{
	int		size;
	int		i;
	int		*tab;

	i = 0;
	size = end - start;
	if (size < 0)
	{
		size *= -1;
	}
	tab = malloc(sizeof(int) * size);
	if (!tab)
	{
		return (NULL);
	}
	while (end >= start)
	{
		tab[i] = end;
		i++;
		end--;
	}
	return (tab);
}

int	main(void)
{
	int	start = 5;
	int	end = 10;

	printf("%d", ft_rrange(start, end)[1]);
	return (0);
}
