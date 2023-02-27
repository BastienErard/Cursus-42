/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hook.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berard <berard@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 13:40:30 by berard            #+#    #+#             */
/*   Updated: 2023/02/27 18:40:17 by berard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

/*	Function used when the window is closed. */
void	ft_shutdown(t_data *data)
{
	mlx_destroy_window(data->mlx_ptr, data->win_ptr);
	ft_free_map_parse(data);
	exit (0);
}

/*	Different actions that can be performed with the keyboard. */
void	ft_keyboard(int keycode, t_data *data)
{
	if (keycode == 53)
		ft_shutdown(data);
	else if (keycode == 0 || keycode == 123)
		data->key.horizontal -= MOVE;
	else if (keycode == 2 || keycode == 124)
		data->key.horizontal += MOVE;
	else if (keycode == 13 || keycode == 126)
		data->key.vertical -= MOVE;
	else if (keycode == 1 || keycode == 125)
		data->key.vertical += MOVE;
	else if (keycode == 32)
		data->key.altitude += ALTITUDE;
	else if (keycode == 37)
		data->key.altitude -= ALTITUDE;
	else if (keycode == 15)
		data->alpha += ROTATE;
	else if (keycode == 17)
		data->alpha -= ROTATE;
	else if (keycode == 6)
		data->size += ZOOM;
	else if (keycode == 7)
		data->size -= ZOOM;
}

/*	Different actions that can be performed with the mouse. */
void	ft_mouse(int button, int x, int y, t_data *data)
{
	(void) x;
	(void) y;
	if (button == 4)
		data->size += ZOOM;
	else if (button == 5)
		data->size -= ZOOM;
	else if (button == 1)
		data->key.background += 1;
	else if (button == 2)
		data->key.background -= 1;
}

/*	The various possible actions described above. */
void	ft_instructions(t_data *data)
{
	mlx_key_hook(data->win_ptr, ft_keyboard, data);
	mlx_mouse_hook(data->win_ptr, ft_mouse, data);
	mlx_hook(data->win_ptr, 17, 0, ft_shutdown, data);
}
