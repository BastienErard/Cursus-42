/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berard <berard@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 10:20:58 by berard            #+#    #+#             */
/*   Updated: 2022/11/01 14:20:10 by berard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_check(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (c == set[i])
		{
			return (1);
		}
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ptr;
	int		sta;
	int		i;
	int		end;

	i = 0;
	sta = 0;
	if (s1 == 0 || set == 0)
		return (NULL);
	end = ft_strlen(s1);
	while (s1[sta] != '\0' && ft_check(s1[sta], set))
		sta++;
	while (sta < end && ft_check(s1[end - 1], set))
		end--;
	ptr = malloc(sizeof(char) * (end - sta + 1));
	if (ptr == 0)
		return (NULL);
	while (sta < end)
	{
		ptr[i] = s1[sta];
		i++;
		sta++;
	}
	ptr[i] = '\0';
	return (ptr);
}
