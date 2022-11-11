/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsidec.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berard <berard@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 16:35:21 by berard            #+#    #+#             */
/*   Updated: 2022/11/11 17:07:56 by berard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_strlen_printf(unsigned int n)
{
	int	i;

	i = 0;
	while (n != '\0')
	{
		n = n / 10;
		i++;
	}
	return (i);
}

int	ft_print_unsidec(unsigned int n)
{
	int	i;

	i = 0;
	if (n >= 0 && n <= 9)
		return (ft_print_char(n + 48));
	else if (n < 0)
	{
		ft_print_char('-');
		i++;
		ft_print_unsidec(n * -1);
	}
	else
	{
		ft_print_unsidec(n / 10);
		ft_print_unsidec(n % 10);
	}
	i += ft_strlen_printf(n);
	return (i);
}
