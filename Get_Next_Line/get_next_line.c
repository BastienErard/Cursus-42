/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berard <berard@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 17:00:31 by berard            #+#    #+#             */
/*   Updated: 2022/11/16 18:07:39 by berard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_read_stash(int fd, char *stash)
{
	char	*buffy;
	int		byties;

	buffy = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (buffy == 0)
		return (NULL);
	byties = 1;
	while (byties != 0 || byties != BUFFER_SIZE)
	{
		byties = read(fd, buffy, BUFFER_SIZE);
		if (byties < 0)
			return (NULL);
		stash = ft_strjoin(stash, buffy);
	}
	free(buffy);
	return (stash);
}

char	*get_next_line(int fd)
{
	static char	*stash;
	char		*line;

	if (fd < 0 || BUFFER_SIZE < 1 || read(fd, 0, 0) < 0)
		return (NULL);
	stash = ft_read_stash(fd, stash);
	if (stash == NULL)
		return (NULL);
	return (line);
}
