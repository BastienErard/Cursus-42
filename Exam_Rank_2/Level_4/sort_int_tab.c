/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_int_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tastybao <tastybao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 18:13:43 by tastybao          #+#    #+#             */
/*   Updated: 2022/12/13 18:17:07 by tastybao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    sort_int_tab(int *tab, unsigned int size)
{
    unsigned int    i;
    int             magicswap;

    i = 0;
    while (i < (size - 1))
    {
        if (tab[i] > tab[i + 1])
        {
            magicswap = tab[i];
            tab[i] = tab[i + 1];
            tab[i + 1] = magicswap;
            i = 0;
        }
        else
        {
            i++;
        }
    }
}