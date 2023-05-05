/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exec_builtins.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berard <berard@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 14:15:21 by tastybao          #+#    #+#             */
/*   Updated: 2023/04/06 16:54:39 by berard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minishell.h"

/**
 * This function goes through the different functions "builtins" to
 * find the right one with the use of ft_strcmp.
*/
int	exec_builtins(t_token *token)
{
	if (ft_strcmp(token->cmd, "echo") == 0)
		g_exit_code = echo(token);
	else if (ft_strcmp(token->cmd, "pwd") == 0)
		g_exit_code = pwd();
	else if (ft_strcmp(token->cmd, "exit") == 0)
		ft_exit(token);
	else if (ft_strcmp(token->cmd, "cd") == 0)
		g_exit_code = cd(token);
	else if (ft_strcmp(token->cmd, "env") == 0)
		g_exit_code = ft_env(token);
	else if (ft_strcmp(token->cmd, "unset") == 0)
		g_exit_code = unset(token);
	else if (ft_strcmp(token->cmd, "export") == 0)
		g_exit_code = export(token);
	return (g_exit_code);
}
