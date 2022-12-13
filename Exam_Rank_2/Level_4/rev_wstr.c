/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tastybao <tastybao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 18:27:55 by tastybao          #+#    #+#             */
/*   Updated: 2022/12/13 18:57:11 by tastybao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char *argv[])
{
    int i;
    int tmp;

    i = 0;
    if (argc == 2)
    {
        while (argv[1][i] != '\0')
        {
            i++;
        }
        i--;
        while(i > 0)
        {
            while((argv[1][i] == ' ' || argv[1][i] == '\t') && i != 0)
            {
                i--;
            }
            while(argv[1][i] != ' ' && argv[1][i] != '\t' && i != 0)
            {
                i--;
            }
            tmp = i;
            if (i <= 0)
            {
                i = 0;
            }
            else
            {
                i++;
            }
            while (argv[1][i] != ' ' && argv[1][i] != '\t' && argv[1][i] != '\0')
            {
                write(1, &argv[1][i], 1);
                i++;
            }
            i = tmp;
            if (i != 0)
            {
                write(1, " ", 1);
            }
        }
    }
    write(1, "\n", 1);
    return (0);
}
