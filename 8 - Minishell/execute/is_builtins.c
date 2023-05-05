/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_builtins.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgrasset <fgrasset@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 17:44:33 by berard            #+#    #+#             */
/*   Updated: 2023/05/05 14:06:32 by fgrasset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minishell.h"

/**
 * Check if it is a built-in function using strcmp.
 * Return an integer that is used as a flag.
*/
int	is_builtins(t_token *token)
{
	if (!token->cmd)
	{
		ft_putstr_fd("minishell: command not found\n", 2);
		return (127);
	}
	if (ft_strcmp(token->cmd, "echo") == 0
		|| ft_strcmp(token->cmd, "pwd") == 0
		|| ft_strcmp(token->cmd, "exit") == 0
		|| ft_strcmp(token->cmd, "cd") == 0
		|| ft_strcmp(token->cmd, "env") == 0
		|| ft_strcmp(token->cmd, "unset") == 0
		|| ft_strcmp(token->cmd, "export") == 0)
		return (1);
	return (0);
}
