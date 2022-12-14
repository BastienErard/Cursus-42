/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berard <berard@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 11:26:03 by berard            #+#    #+#             */
/*   Updated: 2022/12/14 13:07:20 by berard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_malloc(int nbr)
{
	int	i;

	i = 0;
	if (nbr < 0)
	{
		i++;
	}
	while (nbr != '\0')
	{
		nbr = nbr / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*ptr;
	int		i;
	int		size;

	i = 0;
	size = ft_malloc(n);
	if (n == -2147483647)
	{
		ptr = malloc(sizeof(char) * 12);
		ptr[0] = '-';
		ptr[1] = '2';
		ptr[2] = '1';
		ptr[3] = '4';
		ptr[4] = '7';
		ptr[5] = '4';
		ptr[6] = '8';
		ptr[7] = '3';
		ptr[8] = '6';
		ptr[9] = '4';
		ptr[10] = '7';
		ptr[11] = '\0';
		return (ptr);
	}
	ptr = malloc(sizeof(char) * size + 1);
	if (!ptr)
	{
		return (NULL);
	}
	ptr[size] = '\0';
	if (n < 0)
	{
		ptr[0] = '-';
		n = n * -1;
	}
	if (n == 0)
	{
		ptr[0] = '0';
		return (ptr);
	}
	while (n)
	{
		ptr[size - 1] = n % 10 + 48;
		n = n / 10;
		size--;
	}
	return (ptr);
}

// int	main(void)
// {
// 	int	i = -32321;

// 	printf("%d\n", i);
// 	printf("%d\n", ft_malloc(i));
// 	printf("%s\n", ft_itoa(i));
// 	return (0);
// }
