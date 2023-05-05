/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berard <berard@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 13:31:13 by berard            #+#    #+#             */
/*   Updated: 2023/04/24 15:04:42 by berard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minishell.h"

/**
 * Exit the current shell and signal the exit status of
 * the process to the operating system.
*/
void	ft_exit(t_token *token)
{
	int	code;

	code = 0;
	if (!token->arg[0] || (exit_control(token->arg[0]) == 1 && !token->arg[1]))
	{
		if (token->arg[0])
			code = ft_atoi(token->arg[0]) % 256;
		free_env(&token->env);
		free_token(&token);
		rl_clear_history();
		ft_putstr_fd("exit\n", STDOUT_FILENO);
		exit (code);
	}
	else if (exit_control(token->arg[0]) == 0)
		exit_alpha(token);
	else
		exit_arguments();
}

/* Behaviour when there are more than two arg and the first is numerical. */
void	exit_arguments(void)
{
	ft_putstr_fd("exit\n", STDERR_FILENO);
	ft_putstr_fd("exit: too many arguments\n", STDERR_FILENO);
	g_exit_code = 1;
}

/* Behaviour when the first argument is not numerical. */
void	exit_alpha(t_token *token)
{
	ft_putstr_fd("exit\n", STDERR_FILENO);
	ft_putstr_fd("exit: ", STDERR_FILENO);
	ft_putstr_fd(token->arg[0], STDERR_FILENO);
	ft_putstr_fd(": numeric argument required\n", STDERR_FILENO);
	free_env(&token->env);
	free_token(&token);
	rl_clear_history();
	exit (255);
}

/* Checks that the argument is composed of numeric elements only. */
int	exit_control(char *arg)
{
	int	i;

	i = -1;
	while (arg[++i] != '\0')
		if (ft_isdigit(arg[i]) == 0)
			return (0);
	return (1);
}
