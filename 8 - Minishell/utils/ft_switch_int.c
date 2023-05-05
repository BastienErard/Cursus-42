/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_switch_int.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgrasset <fgrasset@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 17:04:58 by fgrasset          #+#    #+#             */
/*   Updated: 2023/04/10 17:19:20 by fgrasset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minishell.h"

/* switches the value of alpha->alpha and beta->alpha
returns 1 */
int	ft_switch_int(t_env *alpha, t_env *beta)
{
	int	buf;

	buf = alpha->alpha;
	alpha->alpha = beta->alpha;
	beta->alpha = buf;
	return (1);
}
