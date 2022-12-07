/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tastybao <tastybao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 18:40:43 by tastybao          #+#    #+#             */
/*   Updated: 2022/12/07 18:47:08 by tastybao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int is_power_of_2(unsigned int n)
{
    unsigned int i;

    i = 1;
    while (i <= n)
    {
        if (i == n)
        {
            return (1);
        }
        i = i * 2;
    }
    return (0);
}

int main(void)
{
    unsigned int    n;

    n = 167772216;
    printf("%d", is_power_of_2(n));
    return (0);
    }