/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cd.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berard <berard@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 16:00:44 by berard            #+#    #+#             */
/*   Updated: 2023/04/24 14:59:34 by berard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minishell.h"

/* Change the current working directory to a specified directory. */
int	cd(t_token *token)
{
	char	tmp[MAXPATHLEN];
	char	*path;

	path = ft_strdup(getcwd(tmp, MAXPATHLEN));
	if (!token->arg[0] || ft_strcmp(token->arg[0], "~") == 0)
	{
		while (token->env)
		{
			if (ft_strcmp(token->env->var[0], "HOME") == 0)
				break ;
			if (!token->env->next)
			{
				ft_putstr_fd("cd: HOME not set\n", STDERR_FILENO);
				return (EXIT_FAILURE);
			}
			token->env = token->env->next;
		}
		if (chdir(token->env->var[1]) != 0)
			return (cd_failed(token));
	}
	else
		if (chdir(token->arg[0]) != 0)
			return (cd_failed(token));
	cd_changepwd(token, path);
	return (EXIT_SUCCESS);
}

/* Prints an error message when the path or file is wrong. */
int	cd_failed(t_token *token)
{
	ft_putstr_fd("cd: ", STDERR_FILENO);
	ft_putstr_fd(token->arg[0], STDERR_FILENO);
	ft_putstr_fd(": ", STDERR_FILENO);
	ft_putstr_fd(": No such file or directory\n", STDERR_FILENO);
	return (EXIT_FAILURE);
}

void	cd_changepwd(t_token *token, char *path)
{
	char	newpath[MAXPATHLEN];
	int		flag;

	flag = 0;
	while (token->env)
	{
		if (ft_strcmp(token->env->var[0], "OLDPWD") == 0)
		{
			free (token->env->var[1]);
			token->env->var[1] = path;
			flag = 1;
		}
		else if (ft_strcmp(token->env->var[0], "PWD") == 0)
		{
			free(token->env->var[1]);
			token->env->var[1] = ft_strdup(getcwd(newpath, MAXPATHLEN));
		}
		token->env = token->env->next;
	}
	if (flag == 0)
		free(path);
}
