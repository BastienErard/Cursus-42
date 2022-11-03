/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berard <berard@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 15:12:17 by berard            #+#    #+#             */
/*   Updated: 2022/11/03 18:22:20 by berard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_countword(char const *s, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		while(s[i] == c)
			i++;
		while (s[i] != c)
			i++;
		j++;
		i++;
		while(s[i] == c)
			i++;
	}
	return (j);
}

char	**ft_split(char const *s, char c)
{
	char	**ptr;
	int		i;
	int		j;
	int		x;

	j = 0;
	i = ft_countword(s, c);
	ptr = malloc(sizeof(char *) * (i + 1));
	if (ptr == 0)
	{
		return(NULL);
	}
	ptr[i][0] = '\0';
	i = 0;
	while (s[j] != '\0')
	{
		x = 0;

		while(s[j] == c)
		j++;

		char *word;
		word = malloc(wordlen);
		while (s[j] != c)
		{
			word[x] = s[j];
			j++;
			x++;
		}
		ptr[i] = word;
		i++;
	}
	return (ptr);
}

/*int	main(void)
{
	char	*tab = "  Super spectacle   ce soir!    ";
	char	c = ' ';

	printf("%d", ft_countword(tab, c));
	return (0);
}*/








/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berard <berard@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 15:12:17 by berard            #+#    #+#             */
/*   Updated: 2022/11/03 18:02:25 by berard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_countword(char const *s, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		while(s[i] == c)
			i++;
		while (s[i] != c)
			i++;
		j++;
		i++;
		while(s[i] == c)
			i++;
	}
	return (j);
}

char	**ft_split(char const *s, char c)
{
	char	**ptr;
	int		i;
	int		j;
	int		x;

	j = 0;
	i = ft_countword(s, c);
	ptr = malloc(sizeof(char *) * (i + 1));
	if (ptr == 0)
	{
		return(NULL);
	}
	ptr[i][0] = '\0';
	i = 0;
	while (s[j] != '\0')
	{
		x = 0;
		while(s[j] == c)
		j++;
		while (s[j] != c)
		{
			ptr[i][x] = s[j];
			j++;
			x++;
		}
		i++;
	}
	return (ptr);
}

/*int	main(void)
{
	char	*tab = "  Super spectacle   ce soir!    ";
	char	c = ' ';

	printf("%d", ft_countword(tab, c));
	return (0);
}*/
