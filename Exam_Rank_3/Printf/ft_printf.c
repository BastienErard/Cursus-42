/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tastybao <tastybao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 17:03:59 by tastybao          #+#    #+#             */
/*   Updated: 2023/04/23 17:27:16 by tastybao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>

void	ft_putstr(char *arg, int *len)
{
	int	i;

	i = -1;
	if (arg == NULL)
		arg = "(NULL)";
	while (arg[++i] != '\0')
		*len += write(1, &arg[i], 1);
}

void	ft_putnbr(long long int nb, int base, int *len)
{
	char	*hexa = "0123456789abcdef";

	if (nb < 0)
	{
		nb = nb * -1;
		*len += write(1, "-", 1);
	}
	if (nb >= base)
		ft_putnbr((nb / base), base, len);
	*len += write(1, &hexa[nb % base], 1);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int	len;
	int	i;

	len = 0;
	i = -1;
	va_start (args, format);
	while (format[++i] != '\0')
	{
		if (format[i] == '%' && format[i + 1] == 's')
		{
			ft_putstr(va_arg(args, char *), &len);
			i++;
		}
		else if (format[i] == '%' && format[i + 1] == 'd')
		{
			ft_putnbr(va_arg(args, long long int), 10, &len);
			i++;
		}
		else if (format[i] == '%' && format[i + 1] == 'x')
		{
			ft_putnbr(va_arg(args, long long int), 16, &len);
			i++;
		}
		else
			len += write(1, &format[i], 1);
	}
	va_end(args);
	return (len);
}

int	main(void)
{
	char	arg[] = "super";
	int		nb = 321312;
	long long int		hexa = 42;

	ft_printf("This is a test for s %s\n", arg);
	printf("This is real %s\n", arg);
	ft_printf("This is a number for nb %d\n", nb);
	ft_printf("This is an hexa for hexa %x\n", hexa);

	return (0);
}


