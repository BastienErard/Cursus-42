/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tastybao <tastybao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 14:56:33 by berard            #+#    #+#             */
/*   Updated: 2022/12/13 16:22:42 by tastybao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char	*str)
{
	int	i;
	int	sign;
	int	nb;

	i = 0;
	sign = 1;
	nb = 0;
	if (str[i] == '-')
	{
		sign *= -1;
		i++;
	}
	else if (str[i] == '+')
	{
		i++;
	}
	while(str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 2 + (str[i] - 48);
		i++;
	}
	return (nb * sign);
}

int	ft_prime(int i)
{
	int	j;
	int	x;

	j = 1;
	x = 0;
	while (j <= i)
	{
		if (i % j == 0)
		{
			x++;
		}
		j++;
	}
	return (x);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 10)
	{
		ft_putchar(nb + 48);
	}
	else
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}

int	main(int argc, char *argv[])
{
	int	i;
	int	j;
	int	x;

	j = 1;
	x = 0;
	i = ft_atoi(argv[1]);
	if (argc == 2 && i > 0)
	{
		while (j <= i)
		{
			if (ft_prime(j) == 2)
			{
				x += j;
			}
			j++;
		}
		ft_putnbr(x);
	}
	else
	{
		write(1, "0", 1);
	}
	write(1, "\n", 1);
	return (0);
}
