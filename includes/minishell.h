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

# include <stdio.h>					// printf
# include <stdlib.h>				// free
# include <unistd.h>				// execve, fork
# include <string.h>				// strncmp
# include <limits.h>
# include <fcntl.h>					// fork, execve, pipe, dup2, access, read, write, close
# include <sys/wait.h>				// wait
# include <sys/types.h>
# include <errno.h>
# include <readline/readline.h>		// readline
# include <readline/history.h>		// add_history

// colors for the prompt (it's optional, but it's cool)
# define RED	"\033[1;31m"
# define GREEN	"\033[1;32m"
# define YELLOW	"\033[1;33m"
# define BLUE	"\033[1;34m"
# define PURPLE	"\033[1;35m"
# define CYAN	"\033[1;36m"
# define RESET	"\033[0m"

typedef struct	s_token
{
	char	*content;
	char	type;
	struct s_token *next;
	struct s_token *prev;
}	t_token;

typedef struct	s_minishell
{
	char	**env;			// enviroment variables (we need a copy because we will modify them for 'export' and 'uset')
	char	*input;			// readed line for 'readline' (to save which readline returns and to free it later)
	t_token	*tokens;		// tokens linked list
	int		exit_code;		// exit code of the last command (to echo $?)
	int		stdin_backup;	// backup of stdin (>, <, >>, <<. to restart stdin)
	int		stdout_backup;	// backup of stdout (same for stdout)
	pid_t	last_pid;		// PID of the last process executed (it's necessary for waitpid)
}	t_minishell;

// Utils
char	**ft_split(char const *s, char c);
void	execute_input(char *input, char **envp);
void	echo(char **args);
void	free_matrix(char **matrix);

// Builtins
void	echo(char **args);

#endif
