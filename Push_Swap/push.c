/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berard <berard@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 18:05:31 by berard            #+#    #+#             */
/*   Updated: 2023/01/19 18:18:38 by berard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_push_pa(int *stack_a, int *stack_b)
{

}

void	ft_push_pb(int *stack_a, int *stack_b)
{
	int	i;
	int	j;
	int	tmp;
	int	magictmp;

	i = 1;
	j = 1;
	tmp = stack_b[0];
	stack_b[0] = stack_a[0];
	while (stack_b[j])
	{
		magicswap = stack_b[j + 1];
		stack_b[j + 1] = stack_b[j];
		j++;
	}
	while (stack_a[i])
	{
		stack_a[i - 1] = stack_a[i];
		i++;
	}
	stack_b[1] = tmp;
}
