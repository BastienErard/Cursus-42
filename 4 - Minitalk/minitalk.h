/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berard <berard@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 11:14:50 by berard            #+#    #+#             */
/*   Updated: 2022/12/22 15:15:16 by berard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# include <signal.h>
# include "Printf/ft_printf.h"
# include "Printf/Libft/libft.h"

typedef struct s_data
{
	int		i;
	int		ascii;
	char	*str;
}	t_data;

#endif
