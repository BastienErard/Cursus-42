/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_operations.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berard <berard@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 10:56:53 by berard            #+#    #+#             */
/*   Updated: 2023/01/26 17:01:26 by berard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_operation_more(int *a, int *b)
{
	int	j;
	int	bit;
	int	size;

	j = 0;
	bit = 0;
	size = 0;
	while (a[size])
		size++;
	while (ft_correct_order(a) == 0)
	{
		j = 0;
		while (j < size && ft_correct_order(a) == 0)
		{
			j++;
			if (((a[0] >> bit) & 1) == 0)
				ft_push_pb(a, b);
			else
				ft_rotate_ra(a);
		}
		while (b[0])
			ft_push_pa(a, b);
		bit++;
	}
	return (0);
}
