/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   export_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berard <berard@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 11:21:02 by berard            #+#    #+#             */
/*   Updated: 2023/05/04 11:46:16 by berard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minishell.h"

char	*ft_strdup_pimp(const char *s1)
{
	int	i;

	i = 0;
	if (s1[i] == '\'')
		return (ft_strdup_single(s1));
	else if (s1[i] == '\"')
		return (ft_strdup_double(s1));
	else
		return (ft_strdup_all(s1));
}

char	*ft_strdup_single(const char *s1)
{
	size_t	len;
	int		i;
	int		j;
	char	*ptr;

	len = ft_strlen(s1) + 1;
	i = 0;
	j = 0;
	ptr = malloc(len * sizeof(char));
	if (ptr == (NULL))
		return (NULL);
	while (s1[i])
	{
		while (s1[i] && s1[i] == '\'')
			i++;
		if (s1[i] == '\0')
			break ;
		ptr[j] = s1[i];
		i++;
		j++;
	}
	ptr[j] = '\0';
	return (ptr);
}

char	*ft_strdup_double(const char *s1)
{
	size_t	len;
	int		i;
	int		j;
	char	*ptr;

	len = ft_strlen(s1) + 1;
	i = 0;
	j = 0;
	ptr = malloc(len * sizeof(char));
	if (ptr == (NULL))
		return (NULL);
	while (s1[i])
	{
		while (s1[i] && s1[i] == '\"')
			i++;
		if (s1[i] == '\0')
			break ;
		ptr[j] = s1[i];
		i++;
		j++;
	}
	ptr[j] = '\0';
	return (ptr);
}

char	*ft_strdup_all(const char *s1)
{
	size_t	len;
	int		i;
	int		j;
	char	*ptr;

	len = ft_strlen(s1) + 1;
	i = 0;
	j = 0;
	ptr = malloc(len * sizeof(char));
	if (ptr == (NULL))
		return (NULL);
	while (s1[i])
	{
		while (s1[i] && (s1[i] == '\'' || s1[i] == '\"'))
			i++;
		if (s1[i] == '\0')
			break ;
		ptr[j] = s1[i];
		i++;
		j++;
	}
	ptr[j] = '\0';
	return (ptr);
}
