/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berard <berard@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 11:02:19 by berard            #+#    #+#             */
/*   Updated: 2022/12/12 11:17:03 by berard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb <= 9)
	{
		ft_putchar(nb + 48);
	}
	else
	{
		ft_putchar(nb / 10);
		ft_putchar(nb % 10);
	}
}

int	main(int argc, char *argv[])
{
	int	i;
	(void)argv;

	i = 0;
	if (argc == 1)
	{
		write(1, "0", 1);
		return (0);
	}
	while (i < argc)
	{
		i++;
	}
	ft_putnbr(i - 1);
	return (0);
}
