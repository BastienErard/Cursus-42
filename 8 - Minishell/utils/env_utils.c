/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   env_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berard <berard@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 17:01:57 by fgrasset          #+#    #+#             */
/*   Updated: 2023/04/10 17:44:17 by berard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minishell.h"

/* takes the env and adds it to the struct
	var[0] == var, var[1] == value of var */
void	init_env(t_env **envi, char **env)
{
	int	i;

	i = -1;
	*envi = NULL;
	while (env[++i])
		add_env(envi, env[i]);
}

/* creates an env element and adds it at the end of the list */
void	add_env(t_env **envi, char *env)
{
	t_env	*new;
	t_env	*tmp;

	new = malloc(sizeof(t_env));
	new->var = ft_split(env, '=');
	if (!new || !new->var)
		perror("issue malloc add_env");
	new->next = NULL;
	if (*envi == NULL)
	{
		*envi = new;
		return ;
	}
	tmp = *envi;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = new;
}

/* indexes the env to be printed with env->alpha*/
int	az_env(t_token *token)
{
	int		index;
	t_env	*first;
	t_env	*second;

	first = token->env;
	second = token->env;
	env_init(token);
	index = 1;
	while (first && second && (index <= token->env_len))
	{
		if ((first->alpha == index) && (second->alpha == index + 1))
		{
			if ((ft_strcmp(first->var[0], second->var[0]) > 0))
				index = ft_switch_int(first, second);
			else
				index++;
			first = token->env;
			second = token->env;
		}
		if (first->alpha != index)
			first = first->next;
		if (second->alpha != index + 1)
			second = second->next;
	}
	return (1);
}

/* initialise all the env->alpha */
void	env_init(t_token *token)
{
	t_env	*tmp;
	int		i;

	tmp = token->env;
	i = 1;
	while (tmp)
	{
		tmp->alpha = i;
		i++;
		tmp = tmp->next;
	}
	token->env_len = i - 1;
}
