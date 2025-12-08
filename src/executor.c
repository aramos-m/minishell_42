/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   executor.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramos-m <aramos-m@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 13:12:03 by aramos-m          #+#    #+#             */
/*   Updated: 2025/10/29 18:47:02 by aramos-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"
#include "signals.h"

void	executor_input(char *input, char **envp)
{
	char	**args;
	int		pid;

	args = ft_split(input, ' ');
	if (!args[0])
		return ;
	if (strncmp(args[0], "echo", 5) == 0)
		echo(args);
	else if (access (args[0], X_OK) == 0)
	{
		pid = fork();
		if (pid == 0)
			execve(args[0], args, envp);
		else
			wait(NULL);
	}
	else
		printf("minishell: %s: command not found\n", args[0]);
}
