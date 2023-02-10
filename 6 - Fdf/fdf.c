/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tastybao <tastybao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 16:37:00 by berard            #+#    #+#             */
/*   Updated: 2023/02/10 18:11:01 by tastybao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "fdf.h"

int	main(int argc, char *argv[])
{

	int	fd;

	if (argc != 2)
	{
		ft_putstr_fd("Please enter the map and press Enter.\n", 2);
		return (0);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd < 1)
	{
		ft_putstr_fd("The file is corrupt\n", 2);
		return (0);
	}
return (0);
}
