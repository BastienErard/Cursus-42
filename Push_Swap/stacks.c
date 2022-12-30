/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stacks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berard <berard@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 15:55:50 by berard            #+#    #+#             */
/*   Updated: 2022/12/30 16:26:10 by berard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*ft_create_stack(int argc, char *argv[])
{
	int	i;
	int	j;
	int	size;
	int	*stack;

	i = 1;
	size = 0;
	if (argc == 2)
		i = 0;
	j = i;
	while (argv[i])
	{
		i++;
		size++;
	}
	i = 0;
	stack = (int *)malloc(sizeof(int) * size);
	if (!stack)
		return (0);
	while (argv[j])
	{
		stack[i] = ft_atoi(argv[j]);
		i++;
		j++;
	}
	return (stack);
}
