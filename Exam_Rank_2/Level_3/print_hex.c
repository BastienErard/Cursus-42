/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tastybao <tastybao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 17:35:13 by tastybao          #+#    #+#             */
/*   Updated: 2022/12/13 17:45:05 by tastybao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_atoi(char *str)
{
    int i;
    int nb;

    i = 0;
    nb = 0;
    while (str[i] >= '0' && str[i] <= '9')
    {
        nb = nb * 10 + str[i] - 48;
        i++;
    }
    return (nb);
}

void    ft_hex(int i)
{
    if (i > 16)
    {
        ft_hex(i / 16);
    }
    write(1, &"0123456789abcdef"[i % 16], 1);
}

int main(int argc, char *argv[])
{
    int i;

    i = ft_atoi(argv[1]);
    if (argc == 2)
    {
       ft_hex(i); 
    }
    write(1, "\n", 1);
    return (0);
}