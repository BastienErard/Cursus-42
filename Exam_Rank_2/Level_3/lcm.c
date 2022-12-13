/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lcm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tastybao <tastybao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 16:32:41 by tastybao          #+#    #+#             */
/*   Updated: 2022/12/13 17:16:38 by tastybao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int    lcm(unsigned int a, unsigned int b)
{
    unsigned int nb;

    if (a == 0 || b == 0)
    {
        return (0);
    }
    if (a > b)
    {
        nb = b;
    }
    else
    {
        nb = a;
    }
    while(1)
    {
        if (nb % a == 0 && nb % b == 0)
        {
            return (nb);
        }
        nb++;
    }
    return (0);
}

int main(void)
{
    unsigned int    a = 27;
    unsigned int    b = 32;

    printf("%d\n", lcm(a, b));
    return (0);
}