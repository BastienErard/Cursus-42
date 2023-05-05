/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   external_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgrasset <fgrasset@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 14:57:20 by berard            #+#    #+#             */
/*   Updated: 2023/05/03 15:25:26 by fgrasset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minishell.h"

void	check_malloc(char *str);

/* returns a double string containing the env */
char	**get_env(t_token *token)
{
	t_env	*tmp;
	char	**genv;
	int		i;

	i = 0;
	tmp = token->env;
	while (tmp)
	{
		i++;
		tmp = tmp->next;
	}
	genv = malloc(sizeof(char *) * (i + 1));
	tmp = token->env;
	i = -1;
	while (tmp)
	{
		genv[++i] = ft_strjoin(tmp->var[0], "=");
		if (tmp->var[1])
			genv[i] = ft_strjoin(genv[i], tmp->var[1]);
		tmp = tmp->next;
	}
	genv[++i] = NULL;
	return (genv);
}

/* blends it to make the arguments in one char** */
void	make_arg(t_token *token)
{
	int		i;
	int		j;

	i = 0;
	j = -1;
	while (token->arg[i])
		i++;
	token->arg_all = malloc(sizeof(char *) * (i + 2));
	check_malloc_bis(token->arg_all);
	i = -1;
	token->arg_all[++i] = malloc(sizeof(char) * (ft_strlen(token->cmd) + 1));
	check_malloc(token->arg_all[i]);
	ft_copyto(token->arg_all[0], token->cmd);
	if (token->arg[0])
	{
		while (token->arg[++j])
		{
			token->arg_all[++i] = malloc(sizeof(char) \
			* (ft_strlen(token->arg[j]) + 1));
			check_malloc(token->arg_all[i]);
			ft_copyto(token->arg_all[i], token->arg[j]);
		}
	}
	token->arg_all[++i] = NULL;
}

void	ft_copyto(char *token, char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		token[i] = str[i];
		i++;
	}
	token[i] = '\0';
}

/* check for malloc working and jsut returns */
void	check_malloc(char *str)
{
	if (!str)
	{
		perror ("Error with malloc during execution of an external");
		exit (1);
	}
}

void	check_malloc_bis(char **str)
{
	if (!str)
	{
		perror ("Error with malloc during execution of an external");
		exit (1);
	}
}
