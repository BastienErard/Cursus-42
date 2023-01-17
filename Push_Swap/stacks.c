/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stacks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berard <berard@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 15:55:50 by berard            #+#    #+#             */
/*   Updated: 2023/01/17 15:38:45 by berard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
	stack = (int *)malloc(sizeof(int) * cstack.size);
	if (!stack)
		return (0);
	while (argv[cstack.j])
	{
		stack[cstack.i] = ft_atoi(argv[cstack.j]);
		cstack.i++;
		cstack.j++;
	}
	return (stack);
}
