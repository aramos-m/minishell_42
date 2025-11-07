/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   signals.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarcia3 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 20:49:31 by sgarcia3          #+#    #+#             */
/*   Updated: 2025/10/31 21:26:00 by sgarcia3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SIGNALS_H
# define SIGNALS_H


# include <signal.h>
# include <unistd.h>
# include <readline/readline.h>

void	handle_sigint(int sig);
void	setup_signals(void);
void	setup_child_signals(void);

#endif
