/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berard <berard@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 17:13:01 by berard            #+#    #+#             */
/*   Updated: 2022/12/09 17:34:35 by berard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_check(const char *str, char c)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

size_t	ft_strspn(const char *s, const char *accept)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (ft_check(accept, s[i]) == 1)
		{
			return (i);
		}
		i++;
	}
	return (i);
}

int	main(void)
{
	char	tab[] = "123679";
	char	tabo[] = "312678";

	printf("%zu\n", ft_strspn(tab, tabo));
	printf("%lu\n", strspn(tab, tabo));
	return (0);
}
