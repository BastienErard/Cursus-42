/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berard <berard@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 16:42:14 by berard            #+#    #+#             */
/*   Updated: 2022/12/30 14:23:43 by berard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "Printf/ft_printf.h"

// Check_error
int		ft_check_error(int argc, char *argv[]);
int		ft_check_sign(char *str);
int		ft_check_int(char *str);

// Alternative functions
long	ft_atol(const char *str);

#endif
