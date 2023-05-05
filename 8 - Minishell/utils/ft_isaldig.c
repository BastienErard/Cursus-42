/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isaldig.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tastybao <tastybao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 15:57:30 by berard            #+#    #+#             */
/*   Updated: 2023/04/18 14:56:51 by tastybao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minishell.h"

/* Check that the character is a number or a letter */
int	isaldig_char(char c)
{
	if (c < 48 || (c > 57 && c < 65) || c > 122)
		return (0);
	return (1);
}

/* Check that the string is composed of numbers or letters up to "=". */
int	aldig(char *arg)
{
	int	i;
	int	flag;

	i = -1;
	flag = 1;
	while (arg[++i] != '\0')
	{
		if (arg[i] < 48 || (arg[i] > 57 && arg[i] < 65)
			|| arg[i] > 122)
		{
			if (arg[i] == '=')
				break ;
			else
			{
				flag = 0;
				break ;
			}
		}
	}
	return (flag);
}
