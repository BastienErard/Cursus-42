/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tastybao <tastybao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 17:37:02 by tastybao          #+#    #+#             */
/*   Updated: 2022/12/07 18:40:23 by tastybao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_check(char *str, char c, int i)
{
    int j;

    j = 0;
    while (str[j] != '\0' && j < i)
    {
        if (str[j] == c)
        {
            return (1);
        }
        j++;
    }
    return (0);
}

int main(int argc, char *argv[])
{
    int i;
    int j;

    i = 0;
    if (argc == 3)
    {
        while(argv[1][i] != '\0')
        {
            j = 0;
            while(argv[2][j] != '\0')
            {
                if ((argv[1][i] == argv[2][j]) && (ft_check(argv[1], argv[1][i], i) == 0))
                {
                    write(1, &argv[1][i], 1);
                    break;
                }
                j++;
            }
            i++;
        }
    }
    write(1, "\n", 1);
    return (0);
}