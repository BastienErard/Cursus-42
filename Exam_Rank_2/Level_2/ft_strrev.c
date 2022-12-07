/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tastybao <tastybao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 17:08:00 by tastybao          #+#    #+#             */
/*   Updated: 2022/12/07 17:26:59 by tastybao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char    *ft_strrev(char *str)
{
    int     i;
    int     j;
    char    magicswap;

    i = 0;
    j = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    i--;
    while (i > j)
    {
        magicswap = str[i];
        str[i]= str[j];
        str[j] = magicswap;
        i--;
        j++;
    }
    return (str);
}

int main(void)
{
    char    tab[] = "Patate";

    printf("%s", ft_strrev(tab));
    return (0);
}