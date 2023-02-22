/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_and_free.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berard <berard@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 11:36:19 by berard            #+#    #+#             */
/*   Updated: 2023/02/22 15:31:28 by berard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	ft_display_error(char *str)
{
	ft_putstr_fd(str, 2);
	exit(1);
}

void	ft_free_tab(char *tab[])
{
	int	i;

	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);
}

void	ft_free_parsing(t_data *data, int y)
{
	while (y >= 0)
	{
		free (data->map.parse[y]);
		y--;
	}
	free(data->map.parse);
	ft_display_error("Error during the parsing.\n");
}

void	ft_free_map_parse(t_data *data)
{
	int	i;

	i = data->map.height - 1;
	while (i >= 0)
	{
		free(data->map.parse[i]);
		i--;
	}
	free(data->map.parse);
}
