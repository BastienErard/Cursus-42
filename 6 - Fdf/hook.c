/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hook.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berard <berard@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 13:40:30 by berard            #+#    #+#             */
/*   Updated: 2023/02/24 15:59:16 by berard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	ft_shutdown(t_data *data)
{
	mlx_destroy_window(data->mlx_ptr, data->win_ptr);
	ft_free_map_parse(data);
	exit (0);
}

void	ft_keyboard(int keycode, t_data *data)
{
	if (keycode == 53)
		ft_shutdown(data);
	else if (keycode == 0 || keycode == 123)
		data->key.horizontal -= MOVE;
	else if (keycode == 2 || keycode == 123)
		data->key.horizontal += MOVE;
	else if (keycode == 13 || keycode == 126)
		data->key.vertical -= MOVE;
	else if (keycode == 1 || keycode == 125)
		data->key.vertical += MOVE;
	else if (keycode == 6)
		data->key.altitude += ALTITUDE;
	else if (keycode == 7)
		data->key.altitude -= ALTITUDE;
}

void	ft_instructions(t_data *data)
{
	mlx_key_hook(data->win_ptr, ft_keyboard, data);
	// mlx_mouse_hook(data->win_ptr, ft_mouse, data);
}
