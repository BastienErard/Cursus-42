/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berard <berard@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 16:05:17 by berard            #+#    #+#             */
/*   Updated: 2023/02/27 14:38:45 by berard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	ft_convert_fx(t_data *data, int x, int y, int i)
{
	data->t_point[i].fx = (x * cosf(data->alpha) + \
							y * cosf(data->alpha + 2) + \
							(data->map.parse[y][x] * data->key.altitude) * \
							cosf(data->alpha - 2));
	data->t_point[i].fx *= -data->size;
}

void	ft_convert_fy(t_data *data, int x, int y, int i)
{
	data->t_point[i].fy = (x * sinf(data->alpha) + \
							y * sinf(data->alpha + 2) + \
							(data->map.parse[y][x] * data->key.altitude) * \
							sinf(data->alpha - 2));
	data->t_point[i].fy *= -data->size;
}

void	ft_convert(t_data *data)
{
	int	i;
	int	x;
	int	y;

	i = 0;
	y = 0;
	data->t_point = malloc(sizeof(t_point) * \
							(data->map.height * data->map.width));
	if (!data->t_point)
	{
		ft_free_map_parse(data);
		ft_display_error("Error with malloc during convert.\n");
	}
	while (y < data->map.height)
	{
		x = -1;
		while (++x < data->map.width)
		{
			ft_convert_fx(data, x, y, i);
			ft_convert_fy(data, x, y, i);
			i++;
		}
		y++;
	}
}
