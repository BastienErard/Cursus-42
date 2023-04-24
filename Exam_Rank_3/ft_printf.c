/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berard <berard@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 15:41:54 by berard            #+#    #+#             */
/*   Updated: 2023/04/24 16:08:19 by berard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>

void	ft_putstr(char *str, int *len)
{
	int	i;

	i = -1;
	if (!str)
		str = "(null)";
	while (str[++i] != '\0')
		len += write(1, &str[i], 1);
}

void	ft_putnbr(long long int nb, int base, int *len)
{
	char	*hexa;

	hexa = "0123456789abcdef";
	if (nb < 0)
	{
		nb *= -1;
		len += write(1, "-", 1);
	}
	if (nb >= base)
		ft_putnbr((nb / base), base, len);
	len += write(1, &hexa[nb % base], 1);
}

int	ft_printf(const char *format, ... )
{
	va_list	arg;
	int		len;
	int		i;

	len = 0;
	i = -1;
	va_start(arg, format);
	while (format[++i] != '\0')
	{
		if (format[i] == '%' && format[i + 1] == 's')
		{
			ft_putstr(va_arg(arg, char *), &len);
			i++;
		}
		else if (format[i] == '%' && format[i + 1] == 'd')
		{
			ft_putnbr(va_arg(arg, long long int), 10, &len);
			i++;
		}
		else if (format[i] == '%' && format[i + 1] == 'x')
		{
			ft_putnbr(va_arg(arg, long long int), 16, &len);
			i++;
		}
		else
			len += write(1, &format[i], 1);
	}
	va_end(arg);
	printf("Len is %d\n", len);
	return (len);
}

int	main(void)
{
	char	str[] = "this is sparta";
	int		nb	= 42;

	ft_printf("a\n");
	// ft_printf("The string is %s.\n The nb is %d.\n The hexa is %x.\n", str, nb, nb);

}
