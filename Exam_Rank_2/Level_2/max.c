/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tastybao <tastybao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 19:18:47 by tastybao          #+#    #+#             */
/*   Updated: 2022/12/07 19:32:02 by tastybao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int max(int *tab, unsigned int len)
{
    unsigned int i;
    int result;

    i = 0;
    result = tab[i];
    while (i < len)
    {
        if (result < tab[i])
        {
            result = tab[i];
        }
        i++;
    }
    return (result);
}
