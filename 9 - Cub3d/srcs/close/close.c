/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   close.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thomas <thfavre@student.42lausanne.ch>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 14:56:56 by thomas            #+#    #+#             */
/*   Updated: 2023/07/27 00:45:59 by thomas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "data.h"

void	*free_map(char **map);
void	free_textures(void *mlx, t_textures *textures);

int	on_close(t_data *data)
{
	free(data->game2d.walls);
	free_map(data->map);
	free_textures(data->mlx, &data->textures);
	free(data->mlx);
	exit(0);
	return (0);
}
