/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_int_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berard <berard@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 11:08:31 by berard            #+#    #+#             */
/*   Updated: 2022/12/15 11:10:51 by berard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void sort_int_tab(int *tab, unsigned int size);
{
	unsigned int	i;
	int				magicswap;

	i = 0;
	while(i < (size - 1))
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
