/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tastybao <tastybao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 16:27:26 by berard            #+#    #+#             */
/*   Updated: 2023/04/18 19:47:08 by tastybao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
Applies a function to each character of a string and creates a new string
from the results.
@param s The string to apply the function to.
@param f The function to apply to each character of the string.
@return A pointer to the new string created from the results of applying
the function to each character of the original string.
This function allocates memory for the new string, so the caller is
responsible for freeing it when it is no longer needed.
*/
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*ptr;

	i = 0;
	ptr = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (ptr == 0)
	{
		return (NULL);
	}
	while (s[i] != '\0')
	{
		ptr[i] = f(i, s[i]);
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
