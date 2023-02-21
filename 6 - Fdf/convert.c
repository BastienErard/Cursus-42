/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berard <berard@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 16:05:17 by berard            #+#    #+#             */
/*   Updated: 2023/02/21 18:02:19 by berard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	ft_convert_three(t_data *data)
{
	int	y;
	int	x;
	int	i;

	i = 0;
	y = 0;
	data->t_axis = malloc(sizeof(t_axis) * \
						(data->map.height * data->map.width));
	if (!data->t_axis)
	{
		ft_free_map_parse(data);
		ft_display_error("Error with malloc during convert three.\n");
	}
	while (y < data->map.height)
	{
		x = 0;
		while (x < data->map.width)
		{
			data->t_axis[i] = ((t_axis){y, x, data->map.parse[y][x]});
			i++;
			x++;
		}
		y++;
	}
	ft_free_map_parse(data);
}
