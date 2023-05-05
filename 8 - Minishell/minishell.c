/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berard <berard@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 16:22:41 by berard            #+#    #+#             */
/*   Updated: 2023/05/05 10:42:20 by berard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

int	g_exit_code = 0;

int	main(int ac, char **av, char **env)
{
	t_env			*envi;
	char			*input;

	(void)ac;
	(void)av;
	envi = malloc(sizeof(t_env));
	ft_memset(envi, 0, sizeof(t_env));
	init_termios();
	input = "start";
	init_env(&envi, env);
	while (input != NULL)
	{
		signals_init(signals_handle_input);
		input = readline("\e[1;36mMinishell > \e[0m");
		signals_init(signals_handle_execution);
		if (((input && input[0] == '\0') || input == NULL) || space(input) == 0)
			continue ;
		parser(input, envi);
		add_history(input);
		free(input);
	}
	ft_putstr_fd("exit\n", STDOUT_FILENO);
	free(input);
	free_env(&envi);
	return (g_exit_code);
}
