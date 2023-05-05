/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   signals_init.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berard <berard@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 08:49:23 by tastybao          #+#    #+#             */
/*   Updated: 2023/04/27 11:58:04 by berard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minishell.h"

/**
 * This function sets up a signal handler for the SIGINT and SIGQUIT signals,
 * which will call the signals_handle function when those signals are received.
*/
void	signals_init(void (*signals_handle)(int))
{
	struct sigaction	sig;

	sig = (struct sigaction){0};
	sigemptyset(&sig.sa_mask);
	sigaddset(&sig.sa_mask, SIGINT);
	sigaddset(&sig.sa_mask, SIGQUIT);
	sig.sa_handler = signals_handle;
	if (sigaction(SIGINT, &sig, NULL) != 0)
		perror("Error with SIGINT");
	if (sigaction(SIGQUIT, &sig, NULL) != 0)
		perror("Error with SIGQUIT");
}
