/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarcia3 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 16:53:51 by sgarcia3          #+#    #+#             */
/*   Updated: 2025/12/08 16:59:24 by sgarcia3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"
#include "signals.h"

int	main(int argc, char **argv, char **envp)
{
	char	*input;
	(void)argc;
	(void)argv;

	setup_signals();
	while (1)
	{
		input = readline("minishell> ");
		if (!input)
		{
			printf("exit\n");
			break;
		}
		if (input[0] != '`0')
		{
			add_history(input);
			execute_input(input, envp);
		}
		free(input);
	}
	return (0);
}
