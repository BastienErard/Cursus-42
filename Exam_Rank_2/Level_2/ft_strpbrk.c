/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpbrk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berard <berard@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 17:34:48 by berard            #+#    #+#             */
/*   Updated: 2022/12/09 17:59:29 by berard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_check(const char *str, char c)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
		{
			return (1);
		}
		i++;
	}
	return (0);
}

char	*ft_strpbrk(const char *s1, const char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0')
	{
		if (ft_check(s2, s1[i]) == 1)
		{
			return ((char *)&s1[i]);
		}
		i++;
	}
	return (NULL);
}

int	main(void)
{
	char	tab[] = "TeAst";
	char	tabo[] = "Abruti";

	printf("%s\n", ft_strpbrk(tab, tabo));
	printf("%s\n", strpbrk(tab, tabo));
	return (0);
}
