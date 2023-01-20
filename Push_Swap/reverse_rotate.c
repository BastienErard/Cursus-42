/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berard <berard@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 13:56:50 by berard            #+#    #+#             */
/*   Updated: 2023/01/20 17:20:58 by berard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_reverse_rotate_rra(int *stack_a)
{
	int	tmp;
	int	i;

	i = 0;
	while (stack_a[i])
		i++;
	i--;
	tmp = stack_a[i];
	while (i > 0)
	{
		stack_a[i] = stack_a[i - 1];
		i--;
	}
	stack_a[0] = tmp;
	ft_printf("rra\n");
}

void	ft_reverse_rotate_rrb(int *stack_b)
{
	int	tmp;
	int	i;

	i = 0;
	while (stack_b[i])
		i++;
	i--;
	tmp = stack_b[i];
	while (i > 0)
	{
		stack_b[i] = stack_b[i - 1];
		i--;
	}
	stack_b[0] = tmp;
	ft_printf("rrb\n");
}

void	ft_reverse_rotate_rrr(int *stack_a, int *stack_b)
{
	int	tmp;
	int	i;

	i = 0;
	while (stack_a[i])
		i++;
	tmp = stack_a[i - 1];
	while (--i > 0)
		stack_a[i] = stack_a[i - 1];
	stack_a[0] = tmp;
	i = 0;
	while (stack_b[i])
		i++;
	i--;
	tmp = stack_b[i - 1];
	while (--i > 0)
		stack_b[i] = stack_b[i - 1];
	stack_b[0] = tmp;
	ft_printf("rrr\n");
}
