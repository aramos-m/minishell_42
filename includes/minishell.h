/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramos-m <aramos-m@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 13:06:31 by aramos-m          #+#    #+#             */
/*   Updated: 2025/10/29 13:06:31 by aramos-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINISHELL_H
# define MINISHELL_H

# include <stdio.h> // printf
# include <stdlib.h> // free
# include <unistd.h> // execve, fork
# include <string.h> // strncmp
# include <readline/readline.h> // readline
# include <readline/history.h> // add_history
# include <sys/wait.h> // wait

// Utils
char	**ft_split(char const *s, char c);

// Builtins
void	echo(char **args);

#endif
