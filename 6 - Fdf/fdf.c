/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berard <berard@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 10:25:33 by berard            #+#    #+#             */
/*   Updated: 2023/02/20 16:26:47 by berard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int	main(int argc, char *argv[])
{
	t_data	data;

	data.map.width = 0;
	data.map.height = 0;
	data.map.file = argv[1];
	if (argc != 2)
		ft_display_error("Only one argument expected (correct map path).\n");
	else
	{
		ft_define_size(&data);
		ft_parsing(&data);
	}
	return (0);
}
