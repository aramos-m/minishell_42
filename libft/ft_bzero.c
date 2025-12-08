/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarcia3 <sgarcia3@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 16:51:53 by sgarcia3          #+#    #+#             */
/*   Updated: 2023/09/22 22:21:43 by sgarcia3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

/**
* @file ft_bzero.c
* @brief: sobreescribe con ceros n bytes del string. Si n = 0, la función 
* no hace nada.
*
* @param s: puntero al string a sobreescribir
* @param n: número de bytes que serán borrados
*
* @author: sgarcia3
* @date: 22/09/2023
*/

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		*((unsigned char *)s + i) = 0;
		i++;
	}
}

/*int	main(void)
{
	char s[] = "Hola Sara!";
	size_t n = 2;
	ft_bzero(s + 2, n);
	char t[] = "Hola Sara!";
	printf("ft_bzero: %s\n", s);
	bzero(t + 2, n);
	printf("bzero: %s\n", t);
	return (0);
}*/
