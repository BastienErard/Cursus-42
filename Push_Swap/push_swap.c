/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berard <berard@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 14:33:12 by berard            #+#    #+#             */
/*   Updated: 2022/12/30 14:23:33 by berard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char *argv[])
{
	if (argc == 1)
		return (0);
	if (argc == 2)
		argv = ft_split(argv[1], ' ');
	if (ft_check_error(argc, argv) == 0)
	{
		ft_putstr_fd("Error\n", 2);
		return (0);
	}
	printf("Super");
	// free(argv);
	return (0);
}
