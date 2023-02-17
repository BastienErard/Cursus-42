/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Initialization.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berard <berard@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 15:01:59 by berard            #+#    #+#             */
/*   Updated: 2023/02/17 18:11:23 by berard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	ft_define_size(t_data *data)
{
	int		fd;
	char	*line;
	char	**tab;

	fd = open(data->map_file, O_RDONLY);
	if (fd < 0)
		ft_display_error("The file cannot be opened.\n");
	line = get_next_line(fd);
	if (!line)
		ft_display_error("The file is empty.\n");
	tab = ft_split(line, ' ');
	while (tab[data->map_width])
		data->map_width++;
	ft_free_tab(tab);
	while (line)
	{
		data->map_height++;
		free(line);
		line = get_next_line(fd);
	}
	close (fd);
}

void	ft_check_size(t_data *data)
{
	int		fd;
	int		i;
	char	*line;
	char	**tab;

	fd = open(data->map_file, O_RDONLY);
	line = get_next_line(fd);
	while (line)
	{
		tab = ft_split(line, ' ');
		i = 0;
		while (tab[i])
			i++;
		if (i != data->map_width)
		{
			ft_free_tab(tab);
			free(line);
			ft_display_error("The map is not rectangular.\n");
		}
		ft_free_tab(tab);
		free(line);
		line = get_next_line(fd);
	}
	close(fd);
}

// void	ft_parsing(t_data *data)
// {
// 	int	fd;
// 	int	x;
// 	int	y;

// 	fd = open(data->map_file, O_RDONLY);
// 	line = get_next_line(fd);
// 	data->tab_int =
// 	while ()
// }

// En cours - faire deux malloc pour gérer le x et y et remplir ensuite via atoi
