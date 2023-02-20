/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berard <berard@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 16:39:19 by tastybao          #+#    #+#             */
/*   Updated: 2023/02/20 17:46:56 by berard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H

# include "libft/libft.h"
# include "minilibx/mlx.h"
# include <math.h>

// Macro
# define WINDOW_WIDTH 1920
# define WINDOW_HEIGHT 1080
# define PIXEL_RED 0xff0000
# define PIXEL_AZURE 0xf0ffff
# define PIXEL_GREEN 0xff00
# define MLX_ERROR 1

// Structures

typedef struct s_map
{
	char	*file;
	int		width;
	int		height;
	int		**parse;
}	t_map;

typedef struct s_data
{
	int		fd;
	char	*line;
	char	**tab;
	void	*mlx_ptr;
	void	*win_ptr;
	t_map	map;
	t_img	img;
}	t_data;

typedef struct s_img
{
	void	*mlx_img;
	char	*addr;
	int		bpp;
	int		line_len;
	int		endian;
}	t_img;

// Display error & free
void	ft_display_error(char *str);
void	ft_free_tab(char *tab[]);
void	ft_free_parsing(t_data *data, int y);
void	ft_free_map_parse(t_data *data);

// Initialization
void	ft_define_size(t_data *data);
void	ft_parsing(t_data *data);
void	ft_parsing_bis(t_data *data, int y);

#endif
