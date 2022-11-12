/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_di.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berard <berard@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 14:08:52 by berard            #+#    #+#             */
/*   Updated: 2022/11/12 16:04:23 by berard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_di(int n)
{
	char	*str;
	int		i;

	str = ft_itoa(n);
	ft_putstr_fd(str, 1);
	i = ft_strlen(str);
	free (str);
	return (i);
}
