/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_operations.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berard <berard@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 17:48:32 by berard            #+#    #+#             */
/*   Updated: 2023/01/25 13:29:42 by berard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_correct_order(int *a)
{
	int	i;

	i = 0;
	while (a[i])
	{
		if (a[i] > a[i + 1] && a[i + 1])
			return (0);
		i++;
	}
	return (1);
}

int	ft_operation_two(int *a)
{
	if (a[0] == 2)
		ft_swap_sa(a);
	return (0);
}

int	ft_operation_three(int *a)
{
	if (a[0] == 2 && a[1] == 1 && a[2] == 3)
		ft_swap_sa(a);
	else if (a[0] == 3 && a[1] == 2 && a[2] == 1)
	{
		ft_swap_sa(a);
		ft_reverse_rotate_rra(a);
	}
	else if (a[0] == 3 && a[1] == 1 && a[2] == 2)
		ft_rotate_ra(a);
	else if (a[0] == 1 && a[1] == 3 && a[2] == 2)
	{
		ft_swap_sa(a);
		ft_rotate_ra(a);
	}
	else if (a[0] == 2 && a[1] == 3 && a[2] == 1)
		ft_reverse_rotate_rra(a);
	return (0);
}

int	ft_operation_four(int *a, int *b)
{
	if (ft_correct_order(a) == 1)
		return (0);
	while (a[0] != 4)
	{
		if (a[1] == 4)
			ft_rotate_ra(a);
		else
			ft_reverse_rotate_rra(a);
	}
	ft_push_pb(a, b);
	ft_operation_three(a);
	ft_push_pa(a, b);
	ft_rotate_ra(a);
	return (0);
}

int	ft_operation_five(int *a, int *b)
{
	if (ft_correct_order(a) == 1)
		return (0);
	while (a[0] != 5)
	{
		if (a[1] == 5 || a[2] == 5)
			ft_rotate_ra(a);
		else
			ft_reverse_rotate_rra(a);
	}
	ft_push_pb(a, b);
	ft_operation_four(a, b);
	ft_push_pa(a, b);
	ft_rotate_ra(a);
	return (0);
}
