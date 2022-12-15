/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berard <berard@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 11:41:41 by berard            #+#    #+#             */
/*   Updated: 2022/12/15 11:46:37 by berard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char	reverse_bits(unsigned char octet)
{
	unsigned char	oct;
	int				i;

	i = 8;
	while (i > 0)
	{
		oct = octet * 2 + (octet % 2);
		octet = octet / 2;
		i--;
	}
	return (oct);
}
