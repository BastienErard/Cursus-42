/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   export.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berard <berard@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 13:17:43 by berard            #+#    #+#             */
/*   Updated: 2023/05/01 16:32:12 by berard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minishell.h"

/* Defines environment variables that can be used by processes. */
int	export(t_token *token)
{
	int	i;
	int	flag;

	i = -1;
	flag = 0;
	if (!token->arg[0])
		return (export_print(token));
	while (token->arg[++i])
	{
		if (ft_isalpha(token->arg[i][0]) != 0 && aldig(token->arg[i]) != 0)
			export_parsing(token, token->arg[i]);
		else
			flag = export_error(token->arg[i]);
	}
	if (flag != 0)
		return (EXIT_FAILURE);
	return (EXIT_SUCCESS);
}

/* Splits a string in two by taking as delimiter the first equal. */
void	export_parsing(t_token *token, char *arg)
{
	char	**parse;
	char	tmp[1024];
	int		i;

	i = -1;
	parse = malloc(sizeof(char *) * 3);
	if (!parse)
		return ;
	while (arg[++i] != '\0' && arg[i] != '=')
		tmp[i] = arg[i];
	tmp[i] = '\0';
	parse[0] = ft_strdup(tmp);
	if (ft_strchr(arg, '=') && arg[i + 1] == '\0')
		parse[1] = ft_strdup("");
	else if (ft_strchr(arg, '=') && arg[i + 1] != '\0')
		parse[1] = ft_strdup_pimp(&arg[i + 1]);
	else
		parse[1] = NULL;
	parse[2] = NULL;
	export_compare(token, parse);
}

/**
* Compares the current environment with the value entered via export.
* If the value does not exist, adds a new link.
* Otherwise, replaces the current value.
*/
void	export_compare(t_token *token, char **parse)
{
	int		flag;
	t_env	*tmp;

	flag = 0;
	tmp = token->env;
	while (tmp)
	{
		if (ft_strcmp(tmp->var[0], parse[0]) == 0)
		{
			if (parse[1])
			{
				free (tmp->var[1]);
				tmp->var[1] = ft_strdup(parse[1]);
			}
			free_split(parse);
			flag = 1;
			break ;
		}
		tmp = tmp->next;
	}
	if (flag == 0)
		export_add_list(token, parse);
}

/* Prints the entire environment in alphabetical order (via az_env). */
int	export_print(t_token *token)
{
	int		index;
	t_env	*tmp;

	index = az_env(token);
	tmp = token->env;
	while (tmp && (index <= token->env_len))
	{
		if (tmp->alpha == index)
		{
			ft_putstr_fd("declare -x ", STDOUT_FILENO);
			ft_putstr_fd(tmp->var[0], STDOUT_FILENO);
			if (tmp->var[1] != NULL)
			{
				ft_putstr_fd("=\"", STDOUT_FILENO);
				ft_putstr_fd(tmp->var[1], STDOUT_FILENO);
				ft_putstr_fd("\"", STDOUT_FILENO);
			}
			ft_putstr_fd("\n", STDOUT_FILENO);
			index++;
			tmp = token->env;
		}
		else
			tmp = tmp->next;
	}
	return (EXIT_SUCCESS);
}

/* Prints an error message when the identifier is invalid. */
int	export_error(char *arg)
{
	ft_putstr_fd("export: `", STDERR_FILENO);
	ft_putstr_fd(arg, STDERR_FILENO);
	ft_putstr_fd("': not a valid identifier\n", STDERR_FILENO);
	return (EXIT_FAILURE);
}
