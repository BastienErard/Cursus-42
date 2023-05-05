/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lexer_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgrasset <fgrasset@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 14:00:19 by fgrasset          #+#    #+#             */
/*   Updated: 2023/05/05 13:55:11 by fgrasset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minishell.h"

/* returns true if char is a redirection */
int	isredi(char c)
{
	if (c == '<' || c == '>')
		return (1);
	return (0);
}

/* returns true if char is a delimiter
	if flag == s takes into account the spaces */
int	isdeli(char c, char flag)
{
	if (c == '|' || c == '<' || c == '>')
		return (1);
	if (flag == 's' && ft_isaspace(c))
		return (1);
	return (0);
}

/* returns true if input is a space, false otherwise */
int	ft_isaspace(char c)
{
	if (c == ' ' || c == '\t')
		return (1);
	return (0);
}

/* returns the index after it has eliminated the spaces */
void	space_index(t_token *new, char *input)
{
	while (input[new->i] && ft_isaspace(input[new->i]))
		new->i++;
}

/* true if quotes are correctly formated, fales otherwise */
int	check_quotes(char *input)
{
	int	i;
	int	single;
	int	dual;

	i = -1;
	single = 0;
	dual = 0;
	while (input[++i])
	{
		if (input[i] == '\'' && (dual % 2 == 0))
		{
			single++;
		}
		else if (input[i] == '"' && (single % 2 == 0))
		{
			dual++;
		}
	}
	if (single % 2 == 0 && dual % 2 == 0)
		return (1);
	g_exit_code = 1;
	return (0);
}
