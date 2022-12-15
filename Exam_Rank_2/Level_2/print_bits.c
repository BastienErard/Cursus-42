/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berard <berard@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 11:37:41 by berard            #+#    #+#             */
/*   Updated: 2022/12/15 11:44:52 by berard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_bits(unsigned char octet)
{
	unsigned char	oct;
	int				i;

	i = 7;
	while (i >= 0)
	{
		oct = (octet >> i & 1) + '0';
		write(1, &oct, 1);
		i--;
	}
}

int	main(void)
{
	unsigned char	c = 'a';

	print_bits(c);
	return (0);
}
