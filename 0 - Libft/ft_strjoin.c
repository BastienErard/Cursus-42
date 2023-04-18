/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tastybao <tastybao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 17:43:55 by berard            #+#    #+#             */
/*   Updated: 2023/04/18 19:46:18 by tastybao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
Concatenates two strings s1 and s2 into a new string allocated in memory.
@param s1 The first string to concatenate.
@param s2 The second string to concatenate.
@return The new string resulting from the concatenation of s1 and s2, or NULL
if the allocation fails. This function allocates memory
for a new string that contains
the characters of s1 followed by the characters of s2.
If either s1 or s2 is NULL, an empty string will be used instead.
If the allocation fails, NULL will be returned.
Example usage:
char *s1 = "Hello";
char *s2 = " world!";
char *result = ft_strjoin(s1, s2);
printf("%s", result); // Output: "Hello world!"
free(result); // Remember to free the memory allocated by ft_strjoin
*/
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;
	int		i;
	int		j;

	i = 0;
	j = 0;
	ptr = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (ptr == 0)
	{
		return (NULL);
	}
	while (s1[i] != '\0')
	{
		ptr[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		ptr[i + j] = s2[j];
		j++;
	}
	ptr[i + j] = '\0';
	return (ptr);
}
