/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   signals_handle.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berard <berard@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 08:58:40 by tastybao          #+#    #+#             */
/*   Updated: 2023/05/05 10:45:26 by berard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minishell.h"

/**
 * This function handles the SIGINT and SIGQUIT signals by performing
 * certain actions and setting the g_exit_code global variable to
 * indicate that the program was terminated by a signal.
*/
void	signals_handle_input(int sig)
{
	if (sig == SIGINT)
	{
		ft_putstr_fd("\n", STDOUT_FILENO);
		rl_replace_line("", 0);
		rl_on_new_line();
		rl_redisplay();
		g_exit_code = 1;
	}
	if (sig == SIGQUIT)
	{
		rl_on_new_line();
		rl_redisplay();
	}
}

/**
 * Function used to handle signals as part of a blocking function
 * (e.g. cat without argument).
*/
void	signals_handle_execution(int sig)
{
	if (sig == SIGINT)
	{
		ft_putstr_fd("^C\n", STDOUT_FILENO);
		g_exit_code = 128 + SIGINT;
	}
	if (sig == SIGQUIT)
	{
		ft_putstr_fd("^\\Quit: ", STDOUT_FILENO);
		ft_putnbr_fd(SIGQUIT, STDOUT_FILENO);
		ft_putstr_fd("\n", STDOUT_FILENO);
		g_exit_code = 128 + SIGQUIT;
	}
}
