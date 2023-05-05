/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgrasset <fgrasset@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 16:23:22 by berard            #+#    #+#             */
/*   Updated: 2023/05/05 10:14:21 by fgrasset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minishell.h"

/**
 * Takes the input and parses it to then call the
 * appropriate functions to execute the needed commands
 *
 * @param [*input] the input to parse.
 * @param [*envi] our own environment.
 *
 * @return returns nothing but calls the needed function
 * to execute the parsing
 */
void	parser(char	*input, t_env *envi)
{
	t_token	*head;
	int		i;

	i = 0;
	head = NULL;
	if (!check_quotes(input))
	{
		perror("Issue with the quotes");
		return ;
	}
	while (input[i])
	{
		i = sequencer(&head, input, envi, i);
		if (input[i] == '|')
			i++;
	}
	if (!head->error)
	{
		replace_usd(head);
		execution(head);
	}
	free_token(&head);
}

/* initializes all the element of the linked list */
void	initialize_sequence(t_token *new, t_env *envi, int index)
{
	new->cmd = NULL;
	new->arg = NULL;
	new->next = NULL;
	new->flag_env[0] = -1;
	new->error = 0;
	new->flag = 1;
	new->fdread = 1;
	new->fdwrite = 1;
	new->env = envi;
	new->i = index;
	new->arg_all = NULL;
	new->end_of_file = NULL;
	new->g_env = NULL;
}
