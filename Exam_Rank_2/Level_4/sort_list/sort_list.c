/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berard <berard@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 17:42:47 by berard            #+#    #+#             */
/*   Updated: 2022/12/14 17:44:49 by berard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

t_list	*sort_list(t_list* lst, int (*cmp)(int, int));
{
	int		magicswap;
	t_list	*tmp;

	tmp = lst;
	while(lst->next != NULL)
	{
		if(((*cmp)(lst->data, lst->next->data)) == 0)
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
	return(lst);
}
