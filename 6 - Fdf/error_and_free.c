/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_and_free.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berard <berard@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 11:36:19 by berard            #+#    #+#             */
/*   Updated: 2023/02/27 17:42:40 by berard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

/*	Displays error messages on the error output*/
void	ft_display_error(char *str)
{
	ft_putstr_fd(str, 2);
	exit(1);
}

/*	Free the *tab[] resulting from the fonction split */
void	ft_free_tab(char *tab[])
{
	int	i;

	i = -1;
	while (tab[++i])
		free(tab[i]);
	free(tab);
}

/*	Free the parsed map and display an error message.
	Only if there is an error during the parsing */
void	ft_free_parsing(t_data *data, int y)
{
	while (y >= 0)
	{
		free (data->map.parse[y]);
		y--;
	}
	free(data->map.parse);
	ft_display_error("Error during the parsing.\n");
}

/*	Free the parsed map when shutdown or if there is an error */
void	ft_free_map_parse(t_data *data)
{
	int	y;

	y = data->map.height - 1;
	while (y >= 0)
	{
		free(data->map.parse[y]);
		y--;
	}
	free(data->map.parse);
}

/*	Free everything that needs to be free
	in case of an error with the minilibx */
void	ft_free_mlx(t_data *data, int flag)
{
	if (flag == 1)
	{
		ft_free_map_parse(data);
		ft_display_error("MLX_ERROR\n");
	}
	else if (flag == 2)
	{
		ft_free_map_parse(data);
		free(data->mlx_ptr);
		ft_display_error("MLX ERROR.\n");
	}
	else
	{
		ft_free_map_parse(data);
		free(data->mlx_ptr);
		free(data->win_ptr);
		ft_display_error("MLX ERROR.\n");
	}
}
