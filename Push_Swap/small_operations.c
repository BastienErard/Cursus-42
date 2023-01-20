/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_operations.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berard <berard@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 17:48:32 by berard            #+#    #+#             */
/*   Updated: 2023/01/20 17:57:34 by berard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_operation_two(int *stack_a)
{
	int	i;

	i = 0;
	if (stack_a[0] < stack_a[1])
		ft_swap_sa(stack_a);
	return (0);
}
