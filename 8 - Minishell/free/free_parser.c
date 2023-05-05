/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_parser.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berard <berard@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 10:28:43 by fgrasset          #+#    #+#             */
/*   Updated: 2023/05/03 14:49:11 by berard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minishell.h"

/* frees the t_token linked list entirely */
void	free_token(t_token **head)
{
	t_token	*tmp;
	t_token	*stock;

	stock = *head;
	while (stock)
	{
		tmp = stock;
		stock = stock->next;
		free_double(tmp);
		free(tmp->cmd);
		if (tmp->end_of_file)
			free(tmp->end_of_file);
		free(tmp);
	}
	*head = NULL;
}

/* frees the t_env linked list entirely */
void	free_env(t_env **envi)
{
	t_env	*tmp;
	t_env	*stock;
	int		i;

	stock = *envi;
	while (stock)
	{
		i = -1;
		tmp = stock;
		stock = stock->next;
		while (tmp->var[++i])
			free(tmp->var[i]);
		free(tmp->var);
		free(tmp);
	}
	*envi = NULL;
}

/* function made to free double arrrays */
void	free_double(t_token *token)
{
	int	i;

	i = -1;
	if (token->arg)
	{
		while (token->arg[++i])
			free(token->arg[i]);
		free(token->arg);
	}
	i = -1;
	if (token->arg_all)
	{
		while (token->arg_all[++i])
			free(token->arg_all[i]);
		free(token->arg_all);
	}
	i = -1;
	if (token->g_env)
	{
		while (token->g_env[++i])
			free(token->g_env[i]);
		free(token->g_env);
	}
}
