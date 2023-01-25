/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berard <berard@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 11:55:16 by berard            #+#    #+#             */
/*   Updated: 2023/01/25 13:29:40 by berard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rotate_ra(int *stack_a)
{
	int	i;
	int	tmp;

	i = 1;
	tmp = stack_a[0];
	while (stack_a[i])
	{
		stack_a[i - 1] = stack_a[i];
		i++;
	}
	stack_a[i - 1] = tmp;
	ft_printf("ra\n");
}

void	ft_rotate_rb(int *stack_b)
{
	int	i;
	int	tmp;

	i = 1;
	tmp = stack_b[0];
	while (stack_b[i])
	{
		stack_b[i - 1] = stack_b[i];
		i++;
	}
	stack_b[i - 1] = tmp;
	ft_printf("rb\n");
}

void	ft_rotate_rr(int *stack_a, int *stack_b)
{
	int	i;
	int	tmp;

	i = 1;
	tmp = stack_a[0];
	while (stack_a[i])
	{
		stack_a[i - 1] = stack_a[i];
		i++;
	}
	stack_a[i - 1] = tmp;
	i = 1;
	tmp = stack_b[0];
	while (stack_b[i])
	{
		stack_b[i - 1] = stack_b[i];
		i++;
	}
	stack_b[i - 1] = tmp;
	ft_printf("rr\n");
}
