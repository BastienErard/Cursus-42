/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berard <berard@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 10:50:00 by berard            #+#    #+#             */
/*   Updated: 2023/02/23 16:49:36 by berard           ###   ########.fr       */
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

