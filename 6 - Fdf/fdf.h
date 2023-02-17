/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berard <berard@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 16:39:19 by tastybao          #+#    #+#             */
/*   Updated: 2023/02/17 18:02:03 by berard           ###   ########.fr       */
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
typedef struct s_data
{
	int		map_width;
	int		map_height;
	int		**tab_int;
	char	*map_file;
	void	*mlx_ptr;
	void	*win_ptr;
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

// Initialization
void	ft_define_size(t_data *data);
void	ft_check_size(t_data *data);
void	ft_parsing(t_data *data);

#endif
