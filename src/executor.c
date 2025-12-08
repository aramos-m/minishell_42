/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   executor.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramos-m <aramos-m@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 13:12:03 by aramos-m          #+#    #+#             */
/*   Updated: 2025/12/08 21:25:53 by aramos-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"
#include "signals.h"

char	*get_cmd_path(char *cmd, char **envp)
{
	int	i;
	char	**paths;
	char	*part_path;

	if (access(cmd, X_OK) == 0)
		return (ft_strdup(cmd));
	i = 0;
	while (envp[i] && ft_strncmp(envp[i], "PATH=", 5) != 0)
		i++;
	if (!envp[i])
		return (NULL);
	paths = ft_split(envp[i] + 5, ':');
	i = 0;
	while (paths[i])
	{
		//Mejorar construccion de la ruta con ft_strjoin (ver pipex)
		part_path = malloc(strlen(paths[i]) + strlen(cmd) + 2);
		ft_strlcpy(part_path, paths[i], ft_strlen(paths[i]) + i);
		ft_strlcat(part_path, "/", ft_strlen(paths[i]) + 2);
		ft_strlcat(part_path, cmd, ft_strlen(paths[i]) + ft_strlen(cmd) + 2);
		if (access(part_path, X_OK) == 0)
		{
			free_matrix(paths);
			return (part_path);
		}
		free(part_path);
		i++;
	}
	free_matrix(paths);
	return (NULL);
}

int	exec_builtins(char **args, char **envp)
{
	(void)envp;
	
	if (ft_strncmp(args[0], "echo", 5) == 0)
		echo(args);
	else if (ft_strncmp(args[0], "cd", 3) == 0)
		printf("Incluir la funcion para cd\n");
	else if (ft_strncmp(args[0], "pwd", 4) == 0)
		printf("Incluir la funcion para pwd\n");
	else if (ft_strncmp(args[0], "export", 7) == 0)
		printf("Incluir la función para export\n");
	else if (ft_strncmp(args[0], "unset", 6) == 0)
		printf("Introducir la función para unset\n");
	else if (ft_strncmp(args[0], "env", 4) == 0)
		printf("Introducir la función para env\n");
	else if (ft_strncmp(args[0], "exit", 5) == 0)
		exit (0);
	else
		return (0);
	return (1);
}

void	exec_input(char *input, char **envp)
{
	char	**args;
	int		pid;
	char	*cmd_path;

	args = ft_split(input, ' ');
	if (!args[0] || !args[0])
	{
		free_matrix(args);
		return ;
	}
	if (exec_builtins(args, envp))
	{
		free_matrix(args);
		return ;
	}
	cmd_path = get_cmd_path(args[0], envp);
	if (cmd_path != NULL)
	{
		pid = fork();
		if (pid == 0)
		{
			setup_child_signals();
			execve(cmd_path, args, envp);
			perror("execve");
			exit(1);
		}
		else
			wait(NULL);
		free(cmd_path);
	  }
	else
		printf("minishell: %s: command not found\n", args[0]);
	free_matrix(args);
}
