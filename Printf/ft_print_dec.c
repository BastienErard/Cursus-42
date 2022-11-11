/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_dec.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berard <berard@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 14:08:52 by berard            #+#    #+#             */
/*   Updated: 2022/11/11 16:45:58 by berard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_strlen_printf(int n)
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

int	ft_print_dec(int n)
{
	int	i;

	i = 0;
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (11);
	}
	else if (n >= 0 && n <= 9)
		return (ft_print_char(n + 48));
	else if (n < 0)
	{
		ft_print_char('-');
		i++;
		ft_print_dec(n * -1);
	}
	else
	{
		ft_print_dec(n / 10);
		ft_print_dec(n % 10);
	}
	i += ft_strlen_printf(n);
	return (i);
}
