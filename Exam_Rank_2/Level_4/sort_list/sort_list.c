/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berard <berard@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 10:50:44 by berard            #+#    #+#             */
/*   Updated: 2022/12/15 10:52:50 by berard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

t_list	*sort_list(t_list* lst, int (*cmp)(int, int));
{
	t_list	*tmp;
	int		magicswap;

	tmp = lst;
	while(lst->next != NULL)
	{
		if (((*cmp)(lst->data, lst->next->data)) == 0)
		{
			magicswap = lst->data;
			lst->data = lst->next->data;
			lst->next->data = magicswap;
			lst = tmp;
		}
		else
		{
			lst = lst->next;
		}
	}
	lst = tmp;
	return (lst);
}
