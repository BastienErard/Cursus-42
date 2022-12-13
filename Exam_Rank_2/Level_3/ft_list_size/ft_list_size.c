/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tastybao <tastybao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 18:00:15 by tastybao          #+#    #+#             */
/*   Updated: 2022/12/13 18:27:25 by tastybao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int ft_list_size(t_list *begin_list)
{
    if (begin_list == 0)
    {
        return (0);
    }
    else
    {
        return (1 + ft_list_size(begin_list->next));
    }
}