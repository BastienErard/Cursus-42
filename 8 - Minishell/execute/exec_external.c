/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exec_external.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berard <berard@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 11:14:27 by berard            #+#    #+#             */
/*   Updated: 2023/05/05 17:28:38 by berard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minishell.h"

/**
 * This function manages the shell's functions and, if it finds nothing,
 * indicates that the command does not exist.
*/
void	exec_external(t_token *token)
{
	char	**path;
	int		i;

	i = -1;
	token->g_env = get_env(token);
	make_arg(token);
	exec_check_path(token);
	if (access(token->cmd, X_OK) == 0)
	{
		execve(token->cmd, token->arg_all, token->g_env);
		perror("execve");
		exit (errno);
	}
	path = exec_split_path(token);
	while (path && path[++i])
		exec_ext_bis(token, path, path[i]);
	free_split(path);
	ft_putstr_fd(token->cmd, STDERR_FILENO);
	if (ft_strchr(token->cmd, '/'))
		ft_putstr_fd(": No such file or directory\n", STDERR_FILENO);
	else
		ft_putstr_fd(": command not found\n", STDERR_FILENO);
	exit (127);
}

/* Go through the chained list to find the PATH and split it. */
char	**exec_split_path(t_token *token)
{
	char	**path;

	path = NULL;
	while (token->env)
	{
		if (ft_strcmp(token->env->var[0], "PATH") == 0)
		{
			if (token->env->var[1])
				path = ft_split(token->env->var[1], ':');
			break ;
		}
		token->env = token->env->next;
	}
	return (path);
}

/**
 * Checks if PATH still exists and displays an error message if it does not
 * Replaces $? in command with the value of the exit_code.
*/
void	exec_check_path(t_token *token)
{
	int	i;

	i = -1;
	if (ft_strcmp(token->cmd, "$?") == 0)
	{
		free(token->cmd);
		token->cmd = ft_itoa(g_exit_code);
	}
	while (token->g_env[++i])
	{
		if (ft_strncmp(token->g_env[i], "PATH=", 5) == 0)
			break ;
		if (token->g_env[i + 1] == NULL)
		{
			ft_putstr_fd(token->cmd, STDERR_FILENO);
			ft_putstr_fd(": No such file or directory\n", STDERR_FILENO);
			exit (127);
		}
	}
}

/* Continuation of the exec_external function for standards purposes */
void	exec_ext_bis(t_token *token, char **path, char *arg)
{
	char	filepath[MAXPATHLEN];

	ft_strlcpy(filepath, arg, sizeof(filepath));
	ft_strlcat(filepath, "/", sizeof(filepath));
	ft_strlcat(filepath, token->cmd, sizeof(filepath));
	if (access(filepath, X_OK) == 0)
	{
		free_split(path);
		execve(filepath, token->arg_all, token->g_env);
		perror("execve");
		exit (errno);
	}
}
