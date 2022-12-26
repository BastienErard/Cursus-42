/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berard <berard@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 16:04:53 by berard            #+#    #+#             */
/*   Updated: 2022/10/31 17:43:42 by berard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	int		i;

	i = 0;
	if (ft_strlen(s) <= start)
	{
		len = 0;
	}
	if (ft_strlen(s) - start < len)
	{
		len = ft_strlen(s) - start;
	}
	ptr = malloc(sizeof(char const) * (len + 1));
	if (ptr == 0)
	{
		return (NULL);
	}
	while (len > 0)
	{
		ptr[i] = s[start + i];
		i++;
		len --;
	}
	ptr[i] = '\0';
	return (ptr);
}
