/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unset.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berard <berard@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 14:55:02 by berard            #+#    #+#             */
/*   Updated: 2023/04/24 15:17:24 by berard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minishell.h"

/**
* Used to unset or delete shell variables and functions.
* When a variable or function is unset, its value and attributes are
* removed, making it undefined in the current shell session.
*/
int	unset(t_token *token)
{
	int		i;
	int		exit_code;
	t_env	*tmp;

	exit_code = 0;
	i = -1;
	while (token->arg[++i])
	{
		tmp = token->env;
		while (tmp)
		{
			if (ft_strcmp(token->arg[i], tmp->var[0]) == 0)
			{
				unset_free_slot(&token->env, tmp);
				break ;
			}
			tmp = tmp->next;
		}
		exit_code += unset_check(token->arg[i]);
	}
	if (exit_code != 0)
		return (EXIT_FAILURE);
	return (EXIT_SUCCESS);
}

/* Removes an environment variable from the chained list. */
void	unset_free_slot(t_env **head, t_env *slot)
{
	int		i;
	t_env	*prev;

	if (slot == *head)
	{
		*head = slot->next;
	}
	else
	{
		prev = *head;
		while (prev->next != slot)
			prev = prev->next;
		prev->next = slot->next;
	}
	i = -1;
	while (slot->var[++i])
		free(slot->var[i]);
	free(slot->var);
	free(slot);
}

/* Checks the validity of the argument going with unset. */
int	unset_check(char *arg)
{
	int	i;

	i = -1;
	while (arg[++i] != '\0')
	{
		if (ft_isalpha(arg[0]) == 0 || isaldig_char(arg[i]) == 0)
		{
			ft_putstr_fd("unset: ", STDERR_FILENO);
			ft_putstr_fd("`", STDERR_FILENO);
			ft_putstr_fd(arg, STDERR_FILENO);
			ft_putstr_fd("': not a valid identifier\n", STDERR_FILENO);
			return (EXIT_FAILURE);
		}
	}
	return (EXIT_SUCCESS);
}
