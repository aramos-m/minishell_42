/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarcia3 <sgarcia3@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 17:50:26 by sgarcia3          #+#    #+#             */
/*   Updated: 2023/10/24 17:26:49 by sgarcia3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

/**
 *
 * @file ft_strlcpy.c
 * @brief: Copies the string 'src' to 'dst', up to 'size' characters. 
 *Always null-terminates (unless 'size' == 0).
 *
 * @param dst: Destination string where 'src' will be copied.
 * @param src: Source string to be copied to 'dst'.
 * @param size: Maximum number of characters to be stored in 'dst' 
 * (including the null character).
 *
 * @return: The total length of the string 'src'. If the length of 'src' is 
 * greater than or equal to 'size', the string 'dst' is truncated and 
 * null-terminated.
 *
 * @author: sgarcia3
 * @date: 16/09/2023
 *
 */

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (i < size - 1 && *(src + i))
	{
		*(dst + i) = *((char *)src + i);
		i++;
	}
	*(dst + i) = '\0';
	return (ft_strlen(src));
}

/*int main(void)
{
    const char *src = "Hola Sara, ";
    char dst[30] = "cómo estás?";
    size_t size = 5;
    printf("%lu\n", ft_strlcpy(dst, src, size));
    return (0);
}*/
