/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berard <berard@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 10:50:00 by berard            #+#    #+#             */
/*   Updated: 2023/02/27 18:40:05 by berard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

/*	Draw pixel by pixel with a formula to get the right position. */
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

/*	Draw the background. The color is defined by an other function. */
void	ft_draw_background(t_data *data)
{
	int	width;
	int	height;
	int	color;

	height = -1;
	color = ft_color_background(data);
	while (++height < WIN_HEIGHT)
	{
		width = -1;
		while (++width < WIN_WIDTH)
			ft_put_pixel(data, width, height, color);
	}
}

/*	Function used to draw between two points. */
void	ft_line(t_data *data, int start, int end, int color)
{
	float	delta_x;
	float	delta_y;
	float	pixels_x;
	float	pixels_y;
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
		ft_put_pixel(data, -pixels_x + WIN_WIDTH / 3 + data->key.horizontal, \
					-pixels_y + WIN_HEIGHT / 3 + data->key.vertical, color);
		pixels_x += delta_x;
		pixels_y += delta_y;
		pixels--;
	}
}

/*	Function used to define which points need to be connected. */
void	ft_connect(t_data *data)
{
	int	i;
	int	h;
	int	w;

	i = 0;
	h = -1;
	while (++h < data->map.height)
	{
		w = -1;
		while (++w < data->map.width)
		{
			if (h < data->map.height - 1 && w < data->map.width - 1)
			{
				ft_line(data, i, i + 1, ft_colors(data, w, h));
				ft_line(data, i, i + data->map.width, ft_colors(data, w, h));
			}
			else if (h == data->map.height - 1 && w < data->map.width - 1)
				ft_line(data, i, i + 1, ft_colors(data, w, h));
			else if (h < data->map.height - 1 && w == data->map.width - 1)
				ft_line(data, i, i + data->map.width, ft_colors(data, w, h));
			i++;
		}
	}
	free(data->t_point);
}
