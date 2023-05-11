/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philosophers.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berard <berard@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 17:18:31 by berard            #+#    #+#             */
/*   Updated: 2023/05/11 17:53:57 by berard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosophers.h"

int	main(int argc, char *argv[])
{
	int	flag;

	flag = check_errors(argc, argv**);
	if (flag != 0)
	{
		display_errors(flag);
		return (0);
	}
}
