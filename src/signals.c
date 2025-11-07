/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   signals.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarcia3 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 21:01:45 by sgarcia3          #+#    #+#             */
/*   Updated: 2025/10/31 21:37:21 by sgarcia3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "signals.h"

void	handle_sigint(int sig)
{
	(void)sig;

	rl_replace_line("", 0); //delete line
	write(STDOUT_FILENO, "\n", 1); //STDOUT_FILENO: integer fd 1 (it has a buffer). Write break line
	rl_on_new_line(); //new line
	rl_display(); //write prompt again
}

/** Restaura el comportamiento por defecto de las señales SIGINT y SIGQUIT
 * SIGINT: señal que se produce cuando el usurio pulsa Ctrl-C
 * SIGQUIT: señal que se produce cuando el usuario pulsa Ctrl-\ */
void	setup_signals(void)
{
	signal(SIGINT, handle_sigint); //llama a handle_sigint para limpiar la línea y redibujar el prompt
	signal(SIGQUIT, SIG_IGN); //evita que el shell se cierre o haga core dump(volcado de memoria)
}

/** Función para los procesos hijos, se utilizará con  ls, cat, sleep, etc */
void	setup_child_signals(void)
{
	signal(SIGINT, SIG_DFL); //SIG_DFL: "Default Signal Handler". El proceso termina cuando recibe SIGINT (Ctrl-C)
	signal(SIGQUIT, SIG_DFL); //Termina el proceso y genera un coredump
}
