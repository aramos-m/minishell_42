/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarcia3 <sgarcia3@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 00:16:51 by sgarcia3          #+#    #+#             */
/*   Updated: 2023/11/04 18:32:34 by sgarcia3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include <string.h>

/**
 * @file ft_memset.c
 * @brief: fills the memory zone established by len with the constant c.
 * c must be unsigned char and b will be transformed to string
 *
 * @param b: pointer in which characters will be replaced
 * @param c: constant to replace
 * @param len: number of bytes that will be replaced.
 * @return: address of the first element of the string (pointer)
 *
 * @author: sgarcia3
 * @date: 22/09/2023
 */

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*tmp;

	i = 0;
	tmp = (unsigned char *)b;
	while (i < len)
	{
		*(tmp + i) = (unsigned char)c;
		i++;
	}
	return (b);
}

/*int	main(void)
{
	char str[20] = "";
	char other[20] = "";
	ft_memset(str + 2, '.', 4);
	memset(other + 2, '.', 4);
	printf("%s\n", str);
	printf("%s\n", other);
	return (0);
}*/
