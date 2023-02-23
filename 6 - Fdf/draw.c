/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tastybao <tastybao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 10:50:00 by berard            #+#    #+#             */
/*   Updated: 2023/02/23 22:43:03 by tastybao         ###   ########.fr       */
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

void	ft_draw_line(t_data *data, float x0, float y0, float x1, float y1, int color)
{
	float	delta_x;
	float	delta_y;
	float	pixel_x;
	float	pixel_y;
	float	step;
	// int		pixels;
	int		i;

	delta_x = x1 - x0;
	delta_y = y1 - y0;
	// pixels = sqrt((delta_x * delta_x) + (delta_y * delta_y));
	if (fabsf(delta_x) >= fabsf(delta_y))
		step = fabsf(delta_x);
	else
		step = fabsf(delta_y);
	// delta_x /= pixels;
	// delta_y /= pixels;
	delta_x = delta_x / step;
	delta_y = delta_y / step;
	pixel_x = x0;
	pixel_y = y0;
	while (i < step)
	{
		ft_put_pixel(data, pixel_x + WIN_WIDTH / 2, pixel_y + WIN_HEIGHT / 2, color);
		pixel_x += delta_x;
		pixel_y += delta_y;
		// pixels--;
		i++;
	}
}