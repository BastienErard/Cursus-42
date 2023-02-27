/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berard <berard@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 19:05:50 by tastybao          #+#    #+#             */
/*   Updated: 2023/02/27 14:38:09 by berard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int	ft_colors(t_data *data, int x, int y)
{
	int	color;

	if (data->map.parse[y][x] > -2 && data->map.parse[y][x] < 2)
		color = PIXEL_BLACK;
	else if (data->map.parse[y][x] > 2 && data->map.parse[y][x] < 5)
		color = PIXEL_RED;
	else if (data->map.parse[y][x] > 5 && data->map.parse[y][x] < 10)
		color = PIXEL_GREEN;
	else if (data->map.parse[y][x] > -5 && data->map.parse[y][x] < -2)
		color = PIXEL_GOLD;
	else if (data->map.parse[y][x] > -10 && data->map.parse[y][x] < -5)
		color = PIXEL_PINK;
	else
		color = PIXEL_PURPLE;
	return (color);
}

int	ft_color_background(t_data *data)
{
	if (data->key.background == 0)
		return (PIXEL_AZURE);
	else if (data->key.background == 1)
		return (PIXEL_SEASHELL);
	else if (data->key.background == 2)
		return (PIXEL_BISQUE);
	else if (data->key.background == 3)
		return (PIXEL_MISTYROSE);
	else if (data->key.background == 4)
		(PIXEL_HONEY);
	else if (data->key.background > 4)
	{
		data->key.background = 0;
		return (PIXEL_AZURE);
	}
	else if (data->key.background < 0)
	{
		data->key.background = 4;
		return (PIXEL_HONEY);
	}
}
