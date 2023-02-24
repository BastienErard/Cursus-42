/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hook.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berard <berard@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 13:40:30 by berard            #+#    #+#             */
/*   Updated: 2023/02/24 14:15:29 by berard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int		ft_shutdown(t_data *data, int keycode)
{
	if (keycode == 53)
	{
		mlx_destroy_window(data->mlx_ptr, data->win_ptr);
		ft_free_map_parse(data);
		return (0);
	}
	return (0);
}

void	ft_instructions(t_data *data)
{
	mlx_key_hook(data->win_ptr, 17, 0, ft_shutdown, data);
	// mlx_mouse_hook(data->win_ptr, ft_mouse, data);
	// mlx_key_hook(data->win_ptr, ft_keyboard, data);
}
