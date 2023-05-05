/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   echo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgrasset <fgrasset@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 14:08:12 by berard            #+#    #+#             */
/*   Updated: 2023/05/04 17:54:35 by fgrasset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minishell.h"

/**
 * ECHO outputs text to the terminal. The -n option is used to prevent
 * the output from ending with a newline character.
 */
int	echo(t_token *token)
{
	int	i;
	int	flag;

	i = 0;
	flag = 0;
	if (token->arg[i] && ft_strcmp(token->arg[i], "-n") == 0)
	{
		flag = 1;
		i++;
	}
	while (token->arg[i])
	{
		ft_putstr_fd(token->arg[i], STDOUT_FILENO);
		if (token->arg[i + 1] && token->arg[i])
			ft_putstr_fd(" ", STDOUT_FILENO);
		i++;
	}
	if (flag == 0)
		ft_putstr_fd("\n", STDOUT_FILENO);
	return (EXIT_SUCCESS);
}
