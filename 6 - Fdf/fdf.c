/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berard <berard@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 10:25:33 by berard            #+#    #+#             */
/*   Updated: 2023/02/22 17:33:41 by berard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	ft_struct_value(t_data *data)
{
	data->alpha = 120;
	data->size = 1;
	data->map.width = 0;
	data->map.height = 0;
}

int	main(int argc, char *argv[])
{
	t_data	data;

	data.map.file = argv[1];
	if (argc != 2)
		ft_display_error("Only one argument expected (correct map path).\n");
	ft_struct_value(&data);
	ft_define_size(&data);
	ft_parsing(&data);
	ft_convert(&data);
	ft_initialization(&data);
	printf("Everything worked\n");
	return (0);
}
