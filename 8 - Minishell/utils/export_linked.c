/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   export_linked.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berard <berard@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 15:08:42 by berard            #+#    #+#             */
/*   Updated: 2023/04/20 14:44:09 by berard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minishell.h"

/* Appends a new element to a linked list with a value taken from parse. */
void	export_add_list(t_token *token, char **parse)
{
	t_env	*new;

	new = malloc(sizeof(t_env));
	if (!new)
		return ;
	new->var = parse;
	new->next = NULL;
	export_add_last(&token->env, new);
}

/* adds the element to the end of the linked list */
void	export_add_last(t_env **head, t_env *new)
{
	t_env	*tmp;

	if (*head == NULL)
	{
		*head = new;
		return ;
	}
	tmp = export_get_last(*head);
	tmp->next = new;
}

/* returns the last element of the t_env list*/
t_env	*export_get_last(t_env *head)
{
	t_env	*tmp;

	if (!head)
		return (NULL);
	tmp = head;
	while (tmp->next)
	{
		tmp = tmp->next;
	}
	return (tmp);
}
