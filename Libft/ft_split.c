/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berard <berard@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 15:12:17 by berard            #+#    #+#             */
/*   Updated: 2022/11/08 15:04:04 by berard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count(char const *s, char c)
{
	int	i;
	int	word;

	i = 0;
	word = 0;
	while (s && s[i])
	{
		if (s[i] != c)
		{
			word++;
			while (s[i] != c && s[i])
				i++;
		}
		else
			i++;
	}
	return (word);
}

static int	ft_size(char const *s, char c, int i)
{
	int	t;

	t = 0;
	while (s[i] != c && s[i])
	{
		t++;
		i++;
	}
	return (t);
}

static char	**ft_free(char **final, int j)
{
	while (j-- > 0)
		free(final[j]);
	free(final);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	int		j;
	int		word;
	char	**final;
	int		size;
	int		i;

	i = 0;
	word = ft_count(s, c);
	final = (char **)malloc(sizeof(char *) * (word + 1));
	if (!final)
		return (NULL);
	j = -1;
	while (++j < word)
	{
		while (s[i] == c)
			i++;
		size = ft_size(s, c, i);
		final[j] = ft_substr(s, i, size);
		if (!final[j])
			return (ft_free(final, j));
		i += size;
	}
	final[j] = 0;
	return (final);
}
