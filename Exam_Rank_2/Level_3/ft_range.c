/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berard <berard@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 11:17:17 by berard            #+#    #+#             */
/*   Updated: 2022/12/12 13:27:45 by berard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int start, int end)
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
	if (!size)
	{
		return (NULL);
	}
	tab = malloc(sizeof(int) * size);
	if (!tab)
	{
		return (NULL);
	}
	while (start <= end)
	{
		tab[i] = start;
		start++;
		i++;
	}
	return (tab);
}

int	main(void)
{
	int	start = 5;
	int	end = 10;

	printf("%d", ft_range(start, end)[8]);
	return (0);
}
