/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berard <berard@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 11:14:28 by berard            #+#    #+#             */
/*   Updated: 2022/12/23 15:10:15 by berard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk_bonus.h"

int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (1);
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
	static t_data	data = {0, 0, NULL, 0};

	if (!data.str)
	{
		data.str = malloc(sizeof(char) * 1);
		data.str[0] = 0;
	}
	if (sig == SIGUSR1)
		data.ascii += ft_recursive_power(2, data.i);
	if (++data.i == 8)
	{
		if (data.ascii == 0)
		{
			if (++data.back % 2 != 0)
				ft_printf("%s\n", data.str);
			else
				kill(ft_atoi(data.str), SIGUSR1);
			free(data.str);
			data.str = NULL;
		}
		else
			data.str = ft_str_char_join(data.str, data.ascii);
		data.i = 0;
		data.ascii = 0;
	}
}

int	main(void)
{
	struct sigaction	signal;

	signal = (struct sigaction){0};
	sigemptyset(&signal.sa_mask);
	sigaddset(&signal.sa_mask, SIGUSR1);
	sigaddset(&signal.sa_mask, SIGUSR2);
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
