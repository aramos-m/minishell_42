/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarcia3 <sgarcia3@student.42madrid.com>    +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 20:09:54 by sgarcia3          #+#    #+#             */
/*   Updated: 2023/11/04 18:56:07 by sgarcia3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * @file ft_calloc.c
 * @brief asigna memoria mediante los bytes requeridos (tipo de dato, x. ej.)
 * y el tamaño establecido por size. Dicha memoria se inicializa a cero. 
 * La función está protegida contra desbordamientos
 *
 * @param nmemb: bytes 
 * @param size: tamaño
 *
 * @author sgarcia3
 * @date 20/09/2023
 */

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*p;

	if (nmemb * size > SIZE_MAX)
		return (NULL);
	p = malloc(sizeof(char) * nmemb * size);
	if (p == NULL)
		return (NULL);
	ft_bzero(p, nmemb * size);
	return (p);
}

/*int main(void)
{
    void *p1 = ft_calloc(5, 2);
	void *p2 = ft_calloc(0, 0);
	void *p3 = ft_calloc(SIZE_MAX, 2);
	printf("p1: \n");
    if (p1 == NULL)
        printf("NULL\n");
    else
        printf("No NULL\n");
	free(p1);
	printf("\np2: \n");
    if (p2 == NULL)
        printf("NULL\n");
    else
        printf("No NULL\n");
	free(p2);
	printf("\np3: \n");
    if (p3 == NULL)
        printf("desbordamiento --> NULL\n");
    else
        printf("no desbordamiento???\n");
	free(p3);
    return (0);
}*/
