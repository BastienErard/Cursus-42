/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lexer.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berard <berard@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 11:14:39 by fgrasset          #+#    #+#             */
/*   Updated: 2023/05/08 10:10:03 by berard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minishell.h"

/* cut the input in words and add them to the linked list */
int	sequencer(t_token **head, char *input, t_env *envi, int index)
{
	t_token	*new;

	new = malloc(sizeof(t_token));
	initialize_sequence(new, envi, index);
	if (input == NULL || input[new->i] == '\0')
	{
		perror("The input is empty");
		return (0);
	}
	space_index(new, input);
	while (input[new->i] && input[new->i] != '|')
	{
		if (isredi(input[new->i]))
			get_redirection(new, input);
		get_cmd(new, input);
		get_arg(new, input);
	}
	add_last(head, new);
	return (new->i);
}

/* adds the cmd (first word) to the linked list */
void	get_cmd(t_token *new, char *input)
{
	int		j;

	j = -1;
	new->cmd = malloc(sizeof(char) * word_len(input, new->i));
	if (!new->cmd)
		perror("Issue malloc get_cmd");
	if (input[new->i] == '\'')
		get_squote_cmd(new, input);
	else if (input[new->i] == '"')
		get_dquote_cmd(new, input);
	else
	{
		while (input[new->i] && !ft_isaspace(input[new->i])
			&& input[new->i] != '|')
		{
			new->cmd[++j] = input[new->i];
			new->i++;
		}
		new->cmd[++j] = '\0';
	}
	new->type = COMMAND;
	new->next = NULL;
	space_index(new, input);
}

/* adds the fdwrite or fdread depending
on the redirection needed to the token */
void	get_redirection(t_token *new, char *input)
{
	if (input[new->i] == '<')
	{
		new->i++;
		if (input[new->i] == '<')
			rr_left(new, input);
		else
			r_left(new, input);
	}
	else if (input[new->i] == '>')
	{
		new->i++;
		if (input[new->i] == '>')
			rr_right(new, input);
		else
			r_right(new, input);
	}
	space_index(new, input);
	new->pos--;
}

/* adds the arg going with the cmd to token */
void	get_arg(t_token *new, char *input)
{
	new->pos = 0;
	new->arg = malloc(sizeof(char) * 100);
	if (!new->arg)
		perror("Issue malloc get_arg");
	while (input[new->i] && input[new->i] != '|')
	{
		space_index(new, input);
		if (input[new->i] == '\'')
			get_squote(new, input);
		else if (input[new->i] == '"')
			get_dquote(new, input);
		else if (isredi(input[new->i]))
			get_redirection(new, input);
		else
			get_word(new, input);
		new->pos++;
	}
	new->arg[new->pos] = NULL;
}

/* returns the length of the next word to be malloc*/
int	word_len(char *input, int i)
{
	int	len;

	len = 0;
	while (input[i] && !isdeli(input[i], '!'))
	{
		len++;
		i++;
	}
	return (len + 1);
}
