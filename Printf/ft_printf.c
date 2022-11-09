/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berard <berard@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 16:46:19 by berard            #+#    #+#             */
/*   Updated: 2022/11/09 18:14:42 by berard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *input, ...)
{
	va_list	args;
	int		i;
	int		len;

	i = 0;
	len = 0;
	while (input[i] != '\0')
	{
		if (input[i] == '%')
		{

		}
		i++;
	}
	va_end (args);
	return (len);
}
