/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berard <berard@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 16:46:19 by berard            #+#    #+#             */
/*   Updated: 2022/11/11 18:07:55 by berard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_params(va_list args, char input)
{
	int	len;

	len = 0;
	if (input == 'c')
		len += ft_print_char(va_arg(args, int));
	else if (input == 's')
		len += ft_print_str(va_arg(args, char *));
	// else if (input == 'p')
	// 	len += ft_print_ptr(va_arg(args, unsigned long));
	else if (input == 'd' || input == 'i')
		len += ft_print_dec(va_arg(args, int));
	else if (input == 'u')
		len += ft_print_unsidec(va_arg(args, unsigned int));
	// else if (input == 'x')
	// 	len += ft_print_nbhexmin(va_arg(args, unsigned int));
	// else if (input == 'X')
	// 	len += ft_print_nbhexmaj(va_arg(args, unsigned int));
	else if (input == '%')
		len += ft_print_percent();
	return (len);
}

int	ft_printf(const char *input, ...)
{
	va_list	args;
	int		i;
	int		len;

	i = 0;
	len = 0;
	va_start (args, input);
	while (input[i] != '\0')
	{
		if (input[i] == '%')
		{
			len += ft_params(args, input[i + 1]);
			i++;
		}
		else
			len += ft_print_char(input[i]);
		i++;
	}
	va_end (args);
	return (len);
}
