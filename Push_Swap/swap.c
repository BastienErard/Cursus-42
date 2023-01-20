/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berard <berard@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 15:38:26 by berard            #+#    #+#             */
/*   Updated: 2023/01/20 17:53:27 by berard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swap_sa(int *stack_a)
{
	int	tmp;

	tmp = stack_a[0];
	stack_a[0] = stack_a[1];
	stack_a[1] = tmp;
	ft_printf("sa\n");
}

void	ft_swap_sb(int *stack_b)
{
	int	tmp;

	tmp = stack_b[0];
	stack_b[0] = stack_b[1];
	stack_b[1] = tmp;
	ft_printf("sb\n");
}

void	ft_swap_ss(int *stack_a, int *stack_b)
{
	int	tmp_a;
	int	tmp_b;

	tmp_a = stack_a[0];
	stack_a[0] = stack_a[1];
	stack_a[1] = tmp_a;
	tmp_b = stack_b[0];
	stack_b[0] = stack_b[1];
	stack_b[1] = tmp_b;
	ft_printf("ss\n");
}
