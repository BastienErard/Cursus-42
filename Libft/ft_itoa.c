/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berard <berard@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 11:05:08 by berard            #+#    #+#             */
/*   Updated: 2022/11/02 13:00:22 by berard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strcpy(char *dst, const char *src)
{
	int	i;

	i = 0;
	while (dst[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

char	*ft_itoa(int n)
{
	char	*ptr;
	int		i;

	i = 0;
	ptr = malloc(sizeof(char) * 12);
	if (ptr == 0)
		return (NULL);
	if (n == -2147483648)
		return (ft_strcpy(ptr, "-2147483648"));
	else if (n < 0)
	{
		ptr[0] = '-';
		ft_itoa(n * -1);
	}
	else if (n >= 0 && n <= 9)
	{
		if (ptr[0] == '-')
			i++;
		ptr[i] = n + 48;
	}
	else
		return(ft_strcpy(ft_itoa(n / 10), ft_itoa(n % 10)));
	i++;
	ptr[i] = '\0';
	return (ptr);
}
