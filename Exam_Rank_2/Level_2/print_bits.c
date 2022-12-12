/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berard <berard@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 09:41:46 by berard            #+#    #+#             */
/*   Updated: 2022/12/12 09:47:28 by berard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int				i;
	unsigned char	bits;

	i = 7;
	while (i >= 0)
	{
		bits = (octet >> i & 1) + '0';
		write(1, &bits, 1);
		i--;
	}
}

int	main(void)
{
	unsigned char	c;

	c = 'A';
	print_bits(c);
	return (0);
}
