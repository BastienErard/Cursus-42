/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tastybao <tastybao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 16:39:19 by tastybao          #+#    #+#             */
/*   Updated: 2023/02/25 19:17:40 by tastybao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H

# include "libft/libft.h"
# include "minilibx/mlx.h"
# include <math.h>

// Macro
# define WIN_WIDTH 1920
# define WIN_HEIGHT 1080
# define PIXEL_BLACK 0x0
# define PIXEL_RED 0xff0000
# define PIXEL_AZURE 0xf0ffff
# define PIXEL_GREEN 0xff00
# define PIXEL_GOLD 0xffd700
# define PIXEL_PINK 0xffc0cb
# define MOVE 5
# define ALTITUDE 1
# define ROTATE 0.1
# define ZOOM 1

// Structures

typedef struct s_key
{
	int		horizontal;
	int		vertical;
	int		altitude;
} 	t_key;

typedef struct s_point
{
	float	fy;
	float	fx;
}	t_point;

typedef struct s_map
{
	char	*file;
	int		width;
	int		height;
	int		**parse;
}	t_map;

typedef struct s_img
{
	void	*mlx_img;
	char	*addr;
	int		bpp;
	int		line_len;
	int		endian;
}	t_img;

typedef struct s_data
{
	float	alpha;
	int		size;
	char	**tab;
	void	*mlx_ptr;
	void	*win_ptr;
	t_map	map;
	t_img	img;
	t_point	*t_point;
	t_key	key
}	t_data;

// Main
void	ft_struct_value(t_data *data);

// Display error & free
void	ft_display_error(char *str);
void	ft_free_tab(char *tab[]);
void	ft_free_parsing(t_data *data, int y);
void	ft_free_map_parse(t_data *data);
void	ft_free_mlx(t_data *data, int flag);

// Size & parsing
void	ft_define_size(t_data *data);
void	ft_parsing(t_data *data);
void	ft_parsing_bis(t_data *data, char *line, int y);

// Convert
void	ft_convert(t_data *data);
void	ft_convert_fx(t_data *data, int x, int y, int i);
void	ft_convert_fy(t_data *data, int x, int y, int i);

// Graphic
void	ft_initialization(t_data *data);
void	ft_render(t_data *data);

// Draw
void	ft_put_pixel(t_data *data, int x, int y, int color);
void	ft_draw_background(t_data *data);
void	ft_connect(t_data *data);
void	ft_line(t_data *data, int start, int end, int color);

// hook
void	ft_instructions(t_data *data);
void	ft_keyboard(int keycode, t_data *data);
void	ft_shutdown(t_data *data);
void	ft_mouse(int button, int x, int y, t_data *data);

// colors
// int		ft_colors(t_data *data, int color); A verifier
#endif
