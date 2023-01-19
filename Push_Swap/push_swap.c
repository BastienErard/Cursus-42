/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berard <berard@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 14:33:12 by berard            #+#    #+#             */
/*   Updated: 2023/01/19 15:53:00 by berard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char *argv[])
{
	int	*a;
	int	*b;

	if (argc == 1)
		return (0);
	if (argc == 2)
		argv = ft_split(argv[1], ' ');
	if (ft_check_error(argc, argv) == 0 || ft_check_double(argc, argv) == 0)
	{
		ft_putstr_fd("Error\n", 2);
		return (0);
	}
	a = ft_create_stack(argc, argv);
	printf("%d\n", a[1]);
	ft_move_sa(a);
	printf("%d\n", a[1]);
	b = ft_create_empty_stack(argc, argv);
	printf("%d\n", b[3]);
	if (argc == 2)
		free(argv);
	free(a);
	free(b);
	return (0);
}

//Etape à suivre :
// 1) Création des stacks (malloc, comptage des éléments, etc...)
// 2) Verification des doublons
// 3) Création des différents mouvements dans le projet
// Quicksort? Radix sort? Median avec pivot? Insertion sort?
// A priori, radix sort.
