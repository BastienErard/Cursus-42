/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berard <berard@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 18:05:31 by berard            #+#    #+#             */
/*   Updated: 2023/01/23 17:49:12 by berard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_push_pa(int *stack_a, int *stack_b)
{
	int	i;
	int	j;
	int	tmp;

	i = 1;
	j = 1;
	tmp = stack_a[0];
	stack_a[0] = stack_b[0];
	while (stack_a[j])
		j++;
	j--;
	while (j > 0)
	{
		stack_a[j + 1] = stack_a[j];
		j--;
	}
	while (stack_b[i])
	{
		stack_b[i - 1] = stack_b[i];
		i++;
	}
	stack_a[1] = tmp;
	stack_b[i - 1] = 0;
	ft_printf("pa\n");
}

void	ft_push_pb(int *stack_a, int *stack_b)
{
	int	i;
	int	j;
	int	tmp;

	i = 1;
	j = 1;
	tmp = stack_b[0];
	stack_b[0] = stack_a[0];
	while (stack_b[j])
		j++;
	j--;
	while (j > 0)
	{
		stack_b[j + 1] = stack_b[j];
		j--;
	}
	while (stack_a[i])
	{
		stack_a[i - 1] = stack_a[i];
		i++;
	}
	stack_b[1] = tmp;
	stack_a[i - 1] = 0;
	ft_printf("pb\n");
}
