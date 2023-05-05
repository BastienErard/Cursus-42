/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   execution.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berard <berard@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 16:22:25 by berard            #+#    #+#             */
/*   Updated: 2023/05/01 10:31:17 by berard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minishell.h"

/* Check if there is one command or multiple. */
void	execution(t_token *token)
{
	if (!token->next)
		exec_cmd(token);
	else
		exec_cmds(token);
}
