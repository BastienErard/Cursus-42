/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berard <berard@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 16:48:17 by berard            #+#    #+#             */
/*   Updated: 2022/11/12 15:53:54 by berard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <ctype.h>
# include <string.h>
# include <stdarg.h>
# include "Libft/libft.h"

int	ft_printf(const char *input, ...);
int	ft_print_c(int c);
int	ft_print_s(char *str);
int	ft_print_percent(void);
int	ft_print_iu(int n);
int	ft_print_unsidec(unsigned int n);

#endif
