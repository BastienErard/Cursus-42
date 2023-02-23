/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   graphic.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berard <berard@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 17:26:05 by berard            #+#    #+#             */
/*   Updated: 2023/02/23 16:20:26 by berard           ###   ########.fr       */
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
	mlx_put_image_to_window(data->mlx_ptr, data->win_ptr, \
							data->img.mlx_img, 0, 0);
	mlx_loop(data->mlx_ptr);
}
