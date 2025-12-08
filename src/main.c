/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramos-m <aramos-m@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 16:53:51 by sgarcia3          #+#    #+#             */
/*   Updated: 2025/12/08 21:42:22 by aramos-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"
#include "signals.h"

int	main(int argc, char **argv, char **envp)
{
	char	*input;
	char	**my_env;
	
	(void)argc;
	(void)argv;

	setup_signals();

	// Duplicamos el entorno
	my_env = dup_env(envp);
	if(!my_env)
		return (1);
	
	while (1)
	{
		input = readline("minishell> ");
		if (!input)
		{
			printf("exit\n"); // Ctrl+D
			break;
		}
		if (input[0] != '\0')
		{
			add_history(input);
			exec_input(input, my_env);
		}
		free(input);
	}
	free_matrix(my_env);
	return (0);
}
