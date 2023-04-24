/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berard <berard@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 15:41:54 by berard            #+#    #+#             */
/*   Updated: 2023/04/24 17:37:49 by berard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

void	ft_putstr_printf(char *str, int *len)
{
	int	i;

	i = -1;
	if (!str)
		str = "(null)";
	while (str[++i] != '\0')
		*len += write(1, &str[i], 1);
}

void	ft_putnbr_printf(long long int nb, int base, int *len)
{
	char	*hexa;

	hexa = "0123456789abcdef";
	if (nb < 0)
	{
		nb *= -1;
		*len += write(1, "-", 1);
	}
	if (nb >= base)
		ft_putnbr_printf((nb / base), base, len);
	*len += write(1, &hexa[nb % base], 1);
}

int	ft_printf(const char *format, ...)
{
	va_list	arg;
	int		len;
	int		i;

	len = 0;
	i = -1;
	va_start(arg, format);
	while (format[++i] != '\0')
	{
		if (format[i] == '%' && (format[i + 1] == 's' || format[i + 1] == 'd' || format[i + 1] == 'x'))
		{
			i++;a
			if (format[i] == 's')
				ft_putstr_printf(va_arg(arg, char *), &len);
			else if (format[i] == 'd')
				ft_putnbr_printf((long long int)va_arg(arg, int), 10, &len);
			else if (format[i] == 'x')
				ft_putnbr_printf((long long int)va_arg(arg, unsigned int), 16, &len);
		}
		else
			len += write(1, &format[i], 1);
	}
	va_end(arg);
	return (len);
}
