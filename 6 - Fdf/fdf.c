/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berard <berard@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 10:25:33 by berard            #+#    #+#             */
/*   Updated: 2023/02/27 18:40:14 by berard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

/*	Initialise values of variables contained in structures */
void	ft_struct_value(t_data *data)
{
	data->map.width = 0;
	data->map.height = 0;
	data->alpha = 19.3;
	data->size = 40;
	data->key.horizontal = 0;
	data->key.vertical = 0;
	data->key.altitude = 1;
	data->key.background = 0;
}

/*	Main deliberately minimalist */
int	main(int argc, char *argv[])
{
	t_data	data;

	data.map.file = argv[1];
	if (argc != 2)
		ft_display_error("Only one argument expected (correct map path).\n");
	ft_struct_value(&data);
	ft_define_size(&data);
	ft_parsing(&data);
	ft_initialization(&data);
	return (0);
}
