/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   echo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramos-m <aramos-m@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 13:09:43 by aramos-m          #+#    #+#             */
/*   Updated: 2025/10/29 13:09:43 by aramos-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

// Built in: echo -n
void    echo(char **args)
{
	int	arg_n;
	int	i;

	arg_n = 0;
	i = 1;
	if (args[1] && args[1][0] == '-' && args[1][1] == 'n' && args[1][2] == '\0')
	{
		arg_n = 1;
		i++;
	}
	while (args[i])
	{
		printf("%s", args[i]);
		i++;
		if (args[i])
			printf(" ");
	}
	if (!arg_n)
		printf("\n");
}
