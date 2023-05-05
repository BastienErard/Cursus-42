/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace_usd.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berard <berard@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 11:01:15 by berard            #+#    #+#             */
/*   Updated: 2023/05/05 10:44:40 by berard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minishell.h"

/**
 * This function is used to replace environment variables (a $ followed
 * by a sequence of characters) as well as $?.
 * $home should return the affiliated environment variable, while $?
 * should be substituted with the exit status of the last foreground
 * pipeline executed.
*/
void	replace_usd(t_token *token)
{
	int	i;

	i = -1;
	while (token->arg[++i])
	{
		if (token->arg[i][0] == '$' && !check_tab(token, i))
		{
			if (token->arg[i][1] == '?')
			{
				free(token->arg[i]);
				token->arg[i] = ft_itoa(g_exit_code);
			}
			else if (token->arg[i][1] != '\0')
				token->arg[i] = rep_env_usd(token, token->arg[i]);
		}
	}
}

/* Replaces $ with its value (error code or environment variable). */
char	*rep_env_usd(t_token *token, char *usd)
{
	t_env	*tmp;

	tmp = token->env;
	while (tmp)
	{
		if (ft_strcmp(usd + 1, tmp->var[0]) == 0)
			break ;
		tmp = tmp->next;
	}
	free (usd);
	if (tmp)
		usd = ft_strdup(tmp->var[1]);
	else
		usd = ft_strdup("\0");
	return (usd);
}

int	check_tab(t_token *token, int i)
{
	int	j;

	j = 0;
	while (token->flag_env[j] != -1)
	{
		if (token->flag_env[j] == i)
			return (1);
		j++;
	}
	return (0);
}
