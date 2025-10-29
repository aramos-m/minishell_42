/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   executor.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramos-m <aramos-m@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 13:12:03 by aramos-m          #+#    #+#             */
/*   Updated: 2025/10/29 13:15:23 by aramos-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

int main(void)
{
    char    *input;
    int     pid;
    char    **args;

    while (1)
    {
        input = readline("minishell> ");

        if (!input)
        {
            printf("exit\n");
            break;
        }

        if (input[0] != '\0')
        {
            add_history(input);
            args = ft_split(input, ' ');

            if(strncmp(args[0], "echo", 5) == 0) // Para que busque también el final de la string
                echo(args);
            if(access(args[0], X_OK) == 0)
            {
                pid = fork();
                if (pid == 0)
                    execve(args[0], args, NULL); // args: const char *path, char *const _Nullable argv[], char *const _Nullable envp[]
                else
                    wait(); // Espera al hijo
            }
        }
        free(input);
    }
    return (0);
}
