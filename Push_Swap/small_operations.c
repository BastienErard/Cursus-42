/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_operations.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berard <berard@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 17:48:32 by berard            #+#    #+#             */
/*   Updated: 2023/01/23 18:07:11 by berard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_operation_two(int *a)
{
	if (a[0] > a[1])
		ft_swap_sa(a);
	return (0);
}

int	ft_operation_three(int *a)
{
	if (a[0] > a[1] && a[0] < a[2] && a[1] < a[2])
		ft_swap_sa(a);
	else if (a[0] > a[1] && a[0] > a[2] && a[1] > a[2])
	{
		ft_swap_sa(a);
		ft_reverse_rotate_rra(a);
	}
	else if (a[0] > a[1] && a[0] > a[2] && a[1] < a[2])
		ft_rotate_ra(a);
	else if (a[0] < a[1] && a[0] < a[2] && a[1] > a[2])
	{
		ft_swap_sa(a);
		ft_rotate_ra(a);
	}
	else if (a[0] < a[1] && a[0] > a[2] && a[1] > a[2])
		ft_reverse_rotate_rra(a);
	return (0);
}

int	ft_operation_four(int *a, int *b)
{
	while (a[0] != 4)
		ft_rotate_ra(a);
	ft_push_pb(a, b);
	ft_check_position(a, b);
	ft_operation_three(a);
	ft_push_pa(a, b);
	ft_rotate_ra(a);
	ft_check_position(a, b);
	return (0);
}

int	ft_operation_five(int *a, int *b)
{
	while (a[0] != 5)
		ft_rotate_ra(a);
	ft_push_pb(a, b);
	ft_check_position(a, b);
	ft_operation_four(a, b);
	ft_push_pa(a, b);
	ft_rotate_ra(a);
	ft_check_position(a, b);
	return (0);
}
