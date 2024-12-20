/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berard <berard@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 15:13:55 by berard            #+#    #+#             */
/*   Updated: 2022/12/08 15:41:53 by berard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;

	i = 0;
	if (argc == 2)
	{
		while((argv[1][i] == ' ' || argv[1][i] == '\t') && argv[1][i] != '\0')
		{
			i++;
		}
		while(argv[1][i] != '\0')
		{
			if(argv[1][i] != ' ' && argv[1][i] != '\t')
			{
				write(1, &argv[1][i], 1);
			}
			else if(argv[1][i] == ' ' || argv[1][i] == '\t')
			{
				while((argv[1][i] == ' ' || argv[1][i] == '\t') && argv[1][i] != '\0')
				{
					i++;
				}
				i--;
				if(argv[1][i + 1] != '\0')
				{
					write(1, "   ", 3);
				}
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
