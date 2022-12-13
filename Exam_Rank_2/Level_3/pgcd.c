/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tastybao <tastybao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 17:17:39 by tastybao          #+#    #+#             */
/*   Updated: 2022/12/13 17:32:09 by tastybao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
    int first;
    int second;
    int div;

    first = atoi(argv[1]);
    second = atoi(argv[2]);
    if (argc == 3)
    {
        if (first > second)
        {
            div = second;
        }
        else
        {
            div = first;
        }
        while (div > 0)
        {
            if (first % div == 0 && second % div == 0)
            {
                printf("%d\n", div);
                return (0);
            }
            div--;
        }
    }
    else
        write(1, "\n", 1);
    return (0);   
}