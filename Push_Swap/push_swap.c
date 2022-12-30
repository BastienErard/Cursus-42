/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berard <berard@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 14:33:12 by berard            #+#    #+#             */
/*   Updated: 2022/12/30 16:27:47 by berard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char *argv[])
{
	int	*a;

	if (argc == 1)
		return (0);
	if (argc == 2)
		argv = ft_split(argv[1], ' ');
	if (ft_check_error(argc, argv) == 0)
	{
		ft_putstr_fd("Error\n", 2);
		return (0);
	}
	a = ft_create_stack(argc, argv);
	printf("%d", a[2]);
	free(argv);
	return (0);
}


//Etape à suivre :
// 1) Création des stacks (malloc, comptage des éléments, etc...)
// 2) Verification des doublons
// 3) Création des différents mouvements dans le projet
// Quicksort? Radix sort? Median avec pivot? Insertion sort?
// A priori, radix sort.
