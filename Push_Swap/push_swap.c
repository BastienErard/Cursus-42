/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berard <berard@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 14:33:12 by berard            #+#    #+#             */
/*   Updated: 2023/01/30 11:02:52 by berard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_operations(int *stack_a, int *stack_b)
{
	int	size;

	size = 0;
	while (stack_a[size])
		size++;
	if (size == 1)
		return (0);
	else if (size == 2)
		ft_operation_two(stack_a);
	else if (size == 3)
		ft_operation_three(stack_a);
	else if (size == 4)
		ft_operation_four(stack_a, stack_b);
	else if (size == 5)
		ft_operation_five(stack_a, stack_b);
	else
		ft_operation_more(stack_a, stack_b);
	return (0);
}

int	main(int argc, char *argv[])
{
	int	*stack_a;
	int	*stack_b;

	if (argc == 1 || argv[1] == NULL)
		return (0);
	if (argc == 2)
		argv = ft_split(argv[1], ' ');
	if (ft_check_error(argc, argv) == 0 || ft_check_double(argc, argv) == 0)
	{
		ft_putstr_fd("Error\n", 2);
		if (argc == 2)
			ft_free_argv(argv);
		return (0);
	}
	stack_a = ft_create_stack(argc, argv);
	stack_b = ft_create_empty_stack(argc, argv);
	ft_operations(stack_a, stack_b);
	if (argc == 2)
		ft_free_argv(argv);
	free(stack_a);
	free(stack_b);
	return (0);
}
