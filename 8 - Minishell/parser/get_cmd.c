/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_cmd.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgrasset <fgrasset@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 09:05:38 by fgrasset          #+#    #+#             */
/*   Updated: 2023/05/05 09:07:41 by fgrasset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minishell.h"

/* adds what is between the single quotes to the arg at pos */
void	get_squote_cmd(t_token *new, char *input)
{
	int	j;

	j = -1;
	new->i++;
	while (input[new->i] && input[new->i] != '\'')
	{
		new->cmd[++j] = input[new->i];
		new->i++;
	}
	new->cmd[++j] = '\0';
	new->i++;
}

/* adds what is between double quotes to arg and if $env
	adds it to pos + 1 and adds rest of string to pos + 2 */
void	get_dquote_cmd(t_token *new, char *input)
{
	int	j;

	j = -1;
	new->i++;
	while (input[new->i] && input[new->i] != '"')
	{
			new->cmd[++j] = input[new->i];
			new->i++;
	}
	new->cmd[++j] = '\0';
	new->i++;
}
