/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   graphic.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tastybao <tastybao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 17:26:05 by berard            #+#    #+#             */
/*   Updated: 2023/02/23 22:40:40 by tastybao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	ft_initialization(t_data *data)
{
	data->mlx_ptr = mlx_init();
	if (data->mlx_ptr == NULL)
		ft_free_mlx(data, 1);
	data->win_ptr = mlx_new_window(data->mlx_ptr, \
							WIN_WIDTH, WIN_HEIGHT, "Fil de fer mon ami!");
	if (data->win_ptr == NULL)
		ft_free_mlx(data, 2);
	data->img.mlx_img = mlx_new_image(data->mlx_ptr, WIN_WIDTH, WIN_HEIGHT);
	if (data->img.mlx_img == NULL)
		ft_free_mlx(data, 3);
	data->img.addr = mlx_get_data_addr(data->img.mlx_img, &data->img.bpp, \
								&data->img.line_len, &data->img.endian);
	ft_draw_background(data);
	ft_draw_line(data, data->t_point[0].fx, data->t_point[0].fy, data->t_point[1].fx, data->t_point[1].fy, PIXEL_RED);
	ft_draw_line(data, data->t_point[1].fx, data->t_point[1].fy, data->t_point[2].fx, data->t_point[2].fy, PIXEL_RED);
	ft_draw_line(data, data->t_point[2].fx, data->t_point[2].fy, data->t_point[3].fx, data->t_point[3].fy, PIXEL_RED);
	ft_draw_line(data, data->t_point[3].fx, data->t_point[3].fy, data->t_point[4].fx, data->t_point[4].fy, PIXEL_RED);
	ft_draw_line(data, data->t_point[4].fx, data->t_point[4].fy, data->t_point[5].fx, data->t_point[5].fy, PIXEL_RED);
	ft_draw_line(data, data->t_point[5].fx, data->t_point[5].fy, data->t_point[6].fx, data->t_point[6].fy, PIXEL_RED);
	ft_draw_line(data, data->t_point[6].fx, data->t_point[6].fy, data->t_point[7].fx, data->t_point[7].fy, PIXEL_RED);
	ft_draw_line(data, data->t_point[7].fx, data->t_point[7].fy, data->t_point[8].fx, data->t_point[8].fy, PIXEL_RED);
	ft_draw_line(data, data->t_point[8].fx, data->t_point[8].fy, data->t_point[9].fx, data->t_point[9].fy, PIXEL_RED);
	ft_draw_line(data, data->t_point[9].fx, data->t_point[9].fy, data->t_point[10].fx, data->t_point[10].fy, PIXEL_RED);
	mlx_put_image_to_window(data->mlx_ptr, data->win_ptr, \
							data->img.mlx_img, 0, 0);
	mlx_loop(data->mlx_ptr);
}
