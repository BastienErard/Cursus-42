/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berard <berard@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 18:17:17 by berard            #+#    #+#             */
/*   Updated: 2022/10/31 16:04:43 by berard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dst[j] != '\0' && j < dstsize)
	{
		j++;
	}
	while (src[i] != '\0' && i + j + 1 < dstsize)
	{
		dst[j + i] = src[i];
		i++;
	}
	if (j != dstsize)
	{
	dst[j + i] = '\0';
	}
	return (j + ft_strlen(src));
}
