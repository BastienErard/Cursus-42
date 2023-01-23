/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stacks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berard <berard@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 15:55:50 by berard            #+#    #+#             */
/*   Updated: 2023/01/23 17:48:38 by berard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*ft_create_empty_stack(int argc, char *argv[])
{
	int	*stack;
	int	size;
	int	i;

	i = 0;
	size = 1;
	if (argc == 2)
		size = 0;
	while (argv[size])
		size++;
	size--;
	stack = (int *)malloc(sizeof(int) * size + 1);
	if (!stack)
		return (0);
	while (i <= size + 1)
		stack[i++] = 0;
	return (stack);
}

int	*ft_create_stack(int argc, char *argv[])
{
	t_cstack	cstack;
	int			*stack;

	cstack = (t_cstack){1, 0, 0};
	if (argc == 2)
		cstack.i = 0;
	cstack.j = cstack.i;
	while (argv[cstack.i])
	{
		cstack.i++;
		cstack.size++;
	}
	cstack.i = 0;
	stack = (int *)malloc(sizeof(int) * cstack.size + 1);
	if (!stack)
		return (0);
	while (argv[cstack.j])
	{
		stack[cstack.i] = ft_atoi(argv[cstack.j]);
		cstack.i++;
		cstack.j++;
	}
	stack[cstack.i] = 0;
	return (stack);
}
