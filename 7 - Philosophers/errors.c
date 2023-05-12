/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berard <berard@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 17:40:35 by berard            #+#    #+#             */
/*   Updated: 2023/05/12 14:40:45 by berard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosophers.h"

int	check_errors(int argc, char *argv[])
{
	if (argc != 5 || argc != 6)
		return (1);

}

void	display_errors(int flag)
{
	if (flag == 1)
		printf("Wrong number of arguments. Must be between 5 and 6.");
	else if (flag == 2)

}
