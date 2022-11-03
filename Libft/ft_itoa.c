/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berard <berard@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 11:05:08 by berard            #+#    #+#             */
/*   Updated: 2022/11/03 15:01:28 by berard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_sizemalloc(int n)
{
	int	i;

	i = 0;
	while (n > 9 || n < -9)
	{
		n = n / 10;
		i++;
	}
	if (n < 0)
	{
		i++;
	}
	return (i + 1);
}

char	*ft_itoa(int n)
{
	char	*ptr;
	int		i;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	i = ft_sizemalloc(n);
	ptr = malloc(sizeof(char) * (i + 1));
	if (ptr == 0)
		return (NULL);
	ptr[i] = '\0';
	if (n < 0)
	{
		ptr[0] = '-';
		n = n * -1;
	}
	if (n == 0)
		ptr[0] = 48;
	while (n != '\0')
	{
		ptr[i - 1] = n % 10 + 48;
		n = n / 10;
		i--;
	}
	return (ptr);
}
