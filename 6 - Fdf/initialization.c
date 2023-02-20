/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Initialization.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berard <berard@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 15:01:59 by berard            #+#    #+#             */
/*   Updated: 2023/02/20 17:44:58 by berard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	ft_define_size(t_data *data)
{
	data->fd = open(data->map.file, O_RDONLY);
	if (data->fd < 0)
		ft_display_error("The file cannot be opened.\n");
	data->line = get_next_line(data->fd);
	if (!data->line)
		ft_display_error("The file is empty.\n");
	data->tab = ft_split(data->line, ' ');
	if (!data->tab)
	{
		free(data->line);
		ft_display_error("The split result is NULL.\n");
	}
	while (data->tab[data->map.width])
		data->map.width++;
	ft_free_tab(data->tab);
	while (data->line)
	{
		data->map.height++;
		free(data->line);
		data->line = get_next_line(data->fd);
	}
	close (data->fd);
}

void	ft_parsing_bis(t_data *data, int y)
{
	int	x;

	x = 0;
	data->tab = ft_split(data->line, ' ');
	if (!data->tab)
		ft_free_parsing(data, y);
	while (x < data->map.width)
	{
		data->map.parse[y][x] = ft_atoi(data->tab[x]);
		x++;
	}
	ft_free_tab(data->tab);
	free(data->line);
}

void	ft_parsing(t_data *data)
{
	int	y;

	y = 0;
	data->fd = open(data->map.file, O_RDONLY);
	if (data->fd < 0)
		ft_display_error("The file cannot be opened.\n");
	data->map.parse = malloc(sizeof(int *) * data->map.height);
	if (!data->map.parse)
		ft_display_error("Error with malloc during the parsing.\n");
	while (y < data->map.height)
	{
		data->map.parse[y] = malloc(sizeof(int) * data->map.width);
		if (!data->map.parse[y])
			ft_free_parsing(data, y - 1);
		data->line = get_next_line(data->fd);
		if (!data->line)
			ft_free_parsing(data, y);
		ft_parsing_bis(data, y);
		y++;
	}
	close (data->fd);
}
