/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tastybao <tastybao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 16:07:21 by tastybao          #+#    #+#             */
/*   Updated: 2022/12/07 16:27:02 by tastybao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_atoi(const char *str)
{
    int i;
    int sign;
    int numb;

    i = 0;
    sign = 1;
    numb = 0;
    while(str[i] == '\t' || str[i] == '\n' || str[i] == '\v' || str[i] == '\f' || str[i] == '\r' || str[i] == ' ')
    {
        i++;
    }
    if (str[i] == '-')
    {
        sign = -1;
        i++;
    }
    else if (str[i] == '+')
    {
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        numb = (numb * 10) + (str[i] - 48);
        i++;
    }
    return (numb * sign);
}

int main(void)
{
    char    tab[] = "     -32913234adsd221";

    printf("%d", ft_atoi(tab));
    return (0);
}