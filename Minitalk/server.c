/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berard <berard@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 11:14:28 by berard            #+#    #+#             */
/*   Updated: 2022/12/21 17:40:55 by berard           ###   ########.fr       */
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

char	*ft_str_char_join(char *str, char c)
{
	char	*ptr;
	int		i;

	i = 0;
	ptr = malloc(sizeof(char) * (ft_strlen(str) + 1 + 1));
	if (ptr == 0)
		return (NULL);
	while (str[i] != '\0')
	{
		ptr[i] = str[i];
		i++;
	}
	ptr[i] = c;
	i++;
	ptr[i] = '\0';
	free(str);
	return (ptr);
}

void	man_signal(int sig)
{
	static int	i = 0;
	static int	ascii = 0;
	static char	*str;

	if (!str)
	{
		str = malloc(sizeof(char) * 1);
		str[0] = 0;
	}
	if (sig == SIGUSR1)
		ascii += ft_recursive_power(2, i);
	i++;
	if (i == 8)
	{
		if (ascii == 0)
		{
			ft_printf("%s", str);
			free(str);
			str = NULL;
		}
		else
			str = ft_str_char_join(str, ascii);
		i = 0;
		ascii = 0;
	}
}

int	main(void)
{
	struct sigaction	signal;

	signal = (struct sigaction){0};
	signal.sa_handler = &man_signal;
	ft_printf("This is the PID : %d\n", getpid());
	if (sigaction(SIGUSR1, &signal, NULL) != 0)
		printf("Error SIGUSR1\n");
	if (sigaction(SIGUSR2, &signal, NULL) != 0)
		ft_printf("Error SIGUSR2\n");
	while (1)
		pause();
	return (0);
}
