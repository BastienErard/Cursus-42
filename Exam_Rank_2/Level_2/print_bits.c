/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berard <berard@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 17:59:43 by berard            #+#    #+#             */
/*   Updated: 2022/12/09 18:05:57 by berard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int				i;
	unsigned char 	bits;

	i = 7;
	while (i >= 0)
	{
		bits = ((octet >> i & 1) + '0');
		write(1, &bits, 1);
		i--;
	}
}

// void print_bitss(unsigned char octet)
// {
// 	int	i = 8;
// 	unsigned char 	bit;

// 	while (i--)
// 	{
// 		bit = (octet >> i & 1) + '0';
// 		write(1, &bit, 1);
// 	}
// }

int	main(void)
{
	char	c;

	c = 'a';
	print_bits(c);
	// printf("\n");
	// print_bitss(c);
	return (0);
}
