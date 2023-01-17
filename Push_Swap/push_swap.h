/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berard <berard@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 16:42:14 by berard            #+#    #+#             */
/*   Updated: 2023/01/17 15:05:56 by berard           ###   ########.fr       */
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

#endif
