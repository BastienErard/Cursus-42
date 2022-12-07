/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tastybao <tastybao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 16:48:51 by tastybao          #+#    #+#             */
/*   Updated: 2022/12/07 17:06:33 by tastybao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char    *ft_strdup(char *src)
{
    char    *ptr;
    int     len;

    len = 0;
    while (str[len] != '\0')
    {
        len++;
    }
    ptr = malloc(sizeof(char) * len + 1)
    if (ptr == NULL)
    {
        return (NULL);
    }
    len = 0;
    while(str[len] != '\0')
    {
        ptr[len] = str[len];
        len++;
    }
    ptr[len] = '\0';
    return (ptr);
}