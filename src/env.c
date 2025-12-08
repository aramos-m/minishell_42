/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   env.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramos-m <aramos-m@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 16:41:52 by aramos-m          #+#    #+#             */
/*   Updated: 2025/12/08 21:31:23 by aramos-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

// Cuenta cuántas filas tiene el entorno original
int env_len(char **envp)
{
    int i = 0;
    while (envp && envp[i])
        i++;
    return (i);
}

// Crea una copia profunda del entorno
char **dup_env(char **envp)
{
    char    **my_env;
    int     count;
    int     i;

    // Contar cuántas variables hay
    count = env_len(envp);

    // Reservar memoria para la lista de punteros
    my_env = malloc(sizeof(char *) * (count + 1));
    if (!my_env)
        return (NULL);

    // Copiar string por string
    i = 0;
    while (envp[i])
    {
        my_env[i] = ft_strdup(envp[i]); // Duplicamos el texto
        if (!my_env[i])
        {
            // PDTE: Si falla un malloc a mitad, hay que liberar lo anterior free_matrix(my_env)
            return (NULL);
        }
        i++;
    }
    my_env[i] = NULL;
    return (my_env);
}
