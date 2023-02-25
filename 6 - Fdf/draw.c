/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tastybao <tastybao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 10:50:00 by berard            #+#    #+#             */
/*   Updated: 2023/02/25 19:18:24 by tastybao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	ft_put_pixel(t_data *data, int x, int y, int color)
{
	char	*pxl;

	if (x >= 0 && x < WIN_WIDTH && y >= 0 && y < WIN_HEIGHT)
	{
		pxl = data->img.addr + (y * data->img.line_len + x * \
								(data->img.bpp / 8));
		*(unsigned int *)pxl = color;
	}
}

void	ft_draw_background(t_data *data)
{
	int	width;
	int	height;

	height = 0;
	while (height < WIN_HEIGHT)
	{
		width = 0;
		while (width < WIN_WIDTH)
		{
			ft_put_pixel(data, width, height, PIXEL_AZURE);
			width++;
		}
		height++;
	}
}

void	ft_line(t_data *data, int start, int end, int color)
{
	double	delta_x;
	double	delta_y;
	double	pixels_x;
	double	pixels_y;
	int		pixels;

	delta_x = data->t_point[end].fx - data->t_point[start].fx;
	delta_y = data->t_point[end].fy - data->t_point[start].fy;
	pixels = sqrt((delta_x * delta_x) + (delta_y * delta_y));
	delta_x /= pixels;
	delta_y /= pixels;
	pixels_x = data->t_point[start].fx;
	pixels_y = data->t_point[start].fy;
	while (pixels)
	{
		ft_put_pixel(data, -pixels_x + WIN_WIDTH / 2 + data->key.horizontal, -pixels_y + WIN_HEIGHT / 2 + data->key.vertical, color);
		pixels_x += delta_x;
		pixels_y += delta_y;
		pixels--;
	}
}

void	ft_connect(t_data *data)
{
	int	i;
	int	height;
	int	width;

	i = 0;
	height = 0;
	while (height < data->map.height)
	{
		width = -1;
		while (++width < data->map.width)
		{
			if (height < data->map.height - 1 && width < data->map.width - 1)
			{
				ft_line(data, i, i + 1, PIXEL_RED);
				ft_line(data, i, i + data->map.width, PIXEL_RED);
			}
			else if (height == data->map.height - 1 && width < data->map.width - 1)
				ft_line(data, i, i + 1, PIXEL_RED); // remplacement par colors? A voir...
			else if (height < data->map.height - 1 && width == data->map.width - 1)
				ft_line(data, i, i + data->map.width, PIXEL_RED); // remplacement par colors? A voir...
			i++;
		}
		height++;
	}
	free(data->t_point);
}
