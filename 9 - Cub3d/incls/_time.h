/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _time.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thomas <thfavre@student.42lausanne.ch>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 01:02:38 by thomas            #+#    #+#             */
/*   Updated: 2023/07/27 01:02:39 by thomas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _TIME_H
# define _TIME_H

# include "data.h"

double	get_delta_time(void);
int		get_avrage_fps(float dt);
void	draw_fps(t_data *data);

#endif
