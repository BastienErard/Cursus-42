/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berard <berard@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 11:14:28 by berard            #+#    #+#             */
/*   Updated: 2022/12/20 17:34:54 by berard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
	{
		return (1);
	}
	return (nb * ft_recursive_power(nb, power - 1));
}

// char	*ft_str_char_join(char *str, char c)
// {
// 	char	*ptr;
// 	int		i;
// 	int		j;

// 	i = 0;
// 	j = 0;
// 	ptr = malloc(sizeof(char) * (ft_strlen(str) + 1 + 1));
// 	if (ptr == 0)
// 		return (NULL);
// 	if (!str)
// 	{
// 		str[i] = '\0';
// 	}
// 	while (str[i] != '\0')
// 	{
// 		ptr[i] = str[i];
// 		i++;
// 	}
// 	ptr[i] = c;
// 	i++;
// 	ptr[i] = '\0';
// 	return (ptr);
// }

void	man_signal(int sig)
{
	static int	i = 0;
	static int	ascii = 0;
	static char	*str;

	str = NULL;
	if (sig == SIGUSR1)
		ascii += ft_recursive_power(2, i);
	else if (sig == SIGUSR2)
		ascii += 0;
	i++;
	if (i == 8)
	{
		// if (ascii == 98)
		// {
		// 	printf("%s\n", str);
		// 	free(str);
		// }
		// else
		// 	str = ft_str_char_join(str, ascii);
		i = 0;
		write(1, &ascii, 1);
		ascii = 0;
	}
}

int	main(void)
{
	struct sigaction	signal;

	signal = (struct sigaction){0};
	signal.sa_handler = &man_signal;
	printf("This is the PID : %d\n", getpid());
	if (sigaction(SIGUSR1, &signal, NULL) != 0)
	{
		printf("Error SIGUSR1\n");
	}
	if (sigaction(SIGUSR2, &signal, NULL) != 0)
	{
		printf("Error SIGUSR2\n");
	}
	while (1)
	{
		pause();
	}
	return (0);
}
