/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berard <berard@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 16:37:00 by berard            #+#    #+#             */
/*   Updated: 2023/02/13 17:08:26 by berard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

// typedef struct	s_data {
// 	void	*img;
// 	char	*addr;
// 	int		bits_per_pixel;
// 	int		line_length;
// 	int		endian;
// }				t_data;

// void	my_mlx_pixel_put(t_data *data, int x, int y, int color)
// {
// 	char	*dst;

// 	dst = data->addr + (y * data->line_length + x * (data->bits_per_pixel / 8));
// 	*(unsigned int*)dst = color;
// }

// int	main(void)
// {
// 	void	*mlx;
// 	void	*mlx_win;
// 	t_data	img;

// 	mlx = mlx_init();
// 	mlx_win = mlx_new_window(mlx, 1920, 1080, "Hello world!");
// 	img.img = mlx_new_image(mlx, 1920, 1080);
// 	img.addr = mlx_get_data_addr(img.img, &img.bits_per_pixel, &img.line_length,
// 								&img.endian);
// 	my_mlx_pixel_put(&img, 5, 5, 0x00FF0000);
// 	mlx_put_image_to_window(mlx, mlx_win, img.img, 0, 0);
// 	mlx_loop(mlx);
// }


void	my_mlx_pixel_put(t_data *data, int x, int y, int color)
{
	char	*dst;

	dst = data->addr + (y * data->line_length + x * (data->bits_per_pixel / 8));
	*(unsigned int*)dst = color;
}

int	funky_color(int y, int color)
{
	if (y <= 20)
		color = 0x00999933;
	else if (y > 20 && y <= 40)
		color = 0x0000FF66;
	else if (y > 40 && y <= 60)
		color = 0x0000FF66;
	else if (y > 60 && y <= 80)
		color = 0x0099FF00;
	else
		color = 0x0099FFFF;
	return (color);
}

void	draw_a_line_y(t_data *data, int x, int start, int end, int color)
{
	int	y;

	y = start;
	while (y <= end)
	{
		color = funky_color(y, color);
		my_mlx_pixel_put(data, x, y, color);
		y++;
	}
}

void	draw_a_line_x(t_data *data, int start, int y, int end, int color)
{
	while (start <= end)
	{
		color = funky_color(start, color);
		my_mlx_pixel_put(data, start, y, color);
		start++;
	}
}

void	draw_a_triangle(t_data *data, int x, int y, int end, int color)
{
	float	t;
	int		base;

	t = 0;
	while (y <= end)
	{
		my_mlx_pixel_put(data, (x-t), y, color);
		my_mlx_pixel_put(data, (x+t), y, color);
		y++;
		t += 0.5;
	}
	base = x-t;
	while (base <= x+t)
	{
		my_mlx_pixel_put(data, base, y, color);
		base++;
	}
}

int	main(void)
{
	void	*mlx;
	void	*mlx_win;
	t_data	img;

	mlx = mlx_init();
	mlx_win = mlx_new_window(mlx, 1920, 1080, "Hello world!");
	img.img = mlx_new_image(mlx, 1920, 1080);
	img.addr = mlx_get_data_addr(img.img, &img.bits_per_pixel, &img.line_length,
								&img.endian);
	// my_mlx_pixel_put(&img, 30, 30, 0x00FF0000);
	draw_a_triangle(&img, 100, 5, 200, 0x00FF0000);
	// draw_a_line_y(&img, 5, 5, 100, 0x00FF0000);
	// draw_a_line_x(&img, 5, 100, 100, 0x00FF0000);
	mlx_put_image_to_window(mlx, mlx_win, img.img, 0, 0);
	mlx_loop(mlx);
}
