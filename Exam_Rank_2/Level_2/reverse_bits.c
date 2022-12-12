/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berard <berard@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 09:47:49 by berard            #+#    #+#             */
/*   Updated: 2022/12/12 09:59:18 by berard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned char	reverse_bits(unsigned char octet)
{
	unsigned char		oct;
	int					i;

	i = 8;
	oct = 0;
	while (i > 0)
	{
		oct = oct * 2 + (octet % 2);
		octet = octet / 2;
		i--;
	}
	return (oct);
}

unsigned char	reverse_bito(unsigned char octet)
{
	int		i = 8;
	unsigned char	res = 0;

	while (i > 0)
	{
		res = res * 2 + (octet % 2);
		octet = octet / 2;
		i--;
	}
	return (res);
}

unsigned char reverse_biti(unsigned char b)
{
	unsigned char	r = 0;
	unsigned		byte_len = 8;

	while (byte_len--)
	{
		r = (r << 1) | (b & 1);
		b >>= 1;
	}
	return (r);
}

int	main(void)
{
	unsigned char	c;

	c = 'A';
	printf("%u\n", reverse_bits(c));
	printf("%u\n", reverse_bito(c));
	printf("%u\n", reverse_biti(c));
	return (0);
}
