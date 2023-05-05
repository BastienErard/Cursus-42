/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   heredoc.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabien <fabien@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 14:34:25 by fgrasset          #+#    #+#             */
/*   Updated: 2023/05/03 19:42:12 by fabien           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minishell.h"

/* creates the heredoc and executes it */
void	heredoc(t_token *new, char *input)
{
	char	*here;
	int		heredoc;

	(void)input;
	heredoc = open(".heredoc.txt", O_CREAT | O_RDWR | O_TRUNC, 0666);
	if (!heredoc)
	{
		perror("error creating heredoc file");
		return ;
	}
	here = readline(">");
	while (here && !iscontained(here, new->end_of_file))
	{
		write(heredoc, here, ft_strlen(here));
		write(heredoc, "\n", 1);
		free(here);
		here = readline(">");
	}
	close(heredoc);
	free(here);
	new->fdread = open(".heredoc.txt", O_RDONLY);
}

/* returns true if EOF is contained in the string */
int	iscontained(char *here, char *eof)
{
	if (isword(here, eof, 0))
		return (1);
	return (0);
}

/* returns true if the word is found */
int	isword(char *here, char *eof, int index)
{
	int	i;

	i = -1;
	while (eof[++i])
	{
		if (eof[i] == here[index])
			index++;
		else
			return (0);
	}
	return (1);
}
