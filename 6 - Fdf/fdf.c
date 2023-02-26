/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tastybao <tastybao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 10:25:33 by berard            #+#    #+#             */
/*   Updated: 2023/02/26 19:07:36 by tastybao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	ft_struct_value(t_data *data)
{
	data->map.width = 0;
	data->map.height = 0;
	data->alpha = 19.3;
	data->size = 40;
	data->key.horizontal = 0;
	data->key.vertical = 0;
	data->key.altitude = 1;
}

int	main(int argc, char *argv[])
{
	t_data	data;

	data.map.file = argv[1];
	if (argc != 2)
		ft_display_error("Only one argument expected (correct map path).\n");
	ft_struct_value(&data); // OK
	ft_define_size(&data); // OK
	ft_parsing(&data); // OK
	ft_initialization(&data);
	return (0);
}
