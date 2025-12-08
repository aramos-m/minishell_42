/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarcia3 <sgarcia3@student.42madrid.com>    +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 13:58:36 by sgarcia3           #+#    #+#            */
/*   Updated: 2023/11/04 18:56:33 by sgarcia3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

/**
*
* @file ft_atoi.c
* @brief: convierte la porción inicial apuntada por nptr a int
* 
* Siempre que al principio de la función nos encontremos isspace(3) se 
* se saltará a la posicón siguiente hasta encontrar un signo o un 
* carácter numérico. Se selecciona el primer signo. El paso de char a
* a int se realiza restandole 48 al valor y sumándolo a lo ya obtenido 
* multiplicado por 10
* 
* @param nptr: string con los carácteres numéricos 
* @return: el string pasado a int
* 
* @author sgarcia3
* @date 22/09/2023
*/

int	ft_atoi(const char *nptr)
{
	int	sign;
	int	num;

	sign = 1;
	num = 0;
	while ((*nptr >= 9 && *nptr <= 13) || *nptr == 32)
		nptr++;
	if (*nptr == '-')
	{
		sign = -sign;
		nptr++;
	}
	else if (*nptr == '+')
		nptr++;
	while (*nptr >= '0' && *nptr <= '9')
	{
		num = num * 10 + *nptr - '0';
		nptr++;
	}
	return (sign * num);
}

/*int main(void)
{
    char *nptr = "a";
    printf("%d\n", ft_atoi(nptr));
    printf("%d\n", atoi(nptr));
    return (0);
}*/
