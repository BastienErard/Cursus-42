/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berard <berard@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 16:42:14 by berard            #+#    #+#             */
/*   Updated: 2023/01/20 18:00:08 by berard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "Printf/ft_printf.h"

// Structure
typedef struct s_cstack
{
	int	i;
	int	j;
	int	size;
}	t_cstack;

// Check_error
int		ft_check_error(int argc, char *argv[]);
int		ft_check_sign(char *str);
int		ft_check_int(char *str);
int		ft_check_double(int argc, char *argv[]);

// Alternative functions
long	ft_atol(const char *str);

// Stacks
int		*ft_create_stack(int argc, char *argv[]);
int		*ft_create_empty_stack(int argc, char *argv[]);

// Moves
void	ft_swap_sa(int *stack_a);
void	ft_swap_sb(int *stack_b);
void	ft_swap_ss(int *stack_a, int *stack_b);
void	ft_push_pa(int *stack_a, int *stack_b);
void	ft_push_pb(int *stack_a, int *stack_b);
void	ft_rotate_ra(int *stack_a);
void	ft_rotate_rb(int *stack_b);
void	ft_rotate_rr(int *stack_a, int *stack_b);
void	ft_reverse_rotate_rra(int *stack_a);
void	ft_reverse_rotate_rrb(int *stack_b);
void	ft_reverse_rotate_rrr(int *stack_a, int *stack_b);

// Operations
int		ft_operations(int *stack_a, int *stack_b);
int		ft_operation_two(int *stack_a);
#endif
