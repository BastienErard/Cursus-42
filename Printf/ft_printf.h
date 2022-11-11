/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berard <berard@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 16:48:17 by berard            #+#    #+#             */
/*   Updated: 2022/11/11 18:07:26 by berard           ###   ########.fr       */
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

int	ft_printf(const char *input, ...);
int	ft_print_char(int c);
int	ft_print_str(char *str);
int	ft_print_percent(void);
int	ft_print_dec(int n);
int	ft_print_unsidec(unsigned int n);

#endif
