/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarcia3 <sgarcia3@student.42madrid.com>    +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 02:52:34 by sgarcia3           #+#    #+#            */
/*   Updated: 2023/10/24 17:56:03 by sgarcia3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

/**
 *
 * @file ft_strlcat.c
 * @brief: concatenates the string 'src' to the end of the string 'dst', 
 * not exceeding the size 'size'.
 *
 * @param dst: string to which 'src' will be appended
 * @param src: string to be appended to 'dst'
 * @param size: maximum number of characters to be stored in 'dst' 
 * (including the null character)
 *
 * @return: the total length of the strings 'dst' and 'src' concatenated. If 
 * the length of 'dst' and 'src' concatenated is greater than or equal to 
 * 'size', the string 'dst' is truncated and null-terminated.
 *
 * @author: sgarcia3
 * @date: 18/09/2023
 *
 */

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len;
	size_t	i;
	size_t	j;

	len = ft_strlen(src);
	if (size == 0)
		return (len);
	j = ft_strlen(dst);
	if (size < j)
		len += size;
	else
		len += j;
	i = 0;
	while (*src && (j + i) < size - 1)
		*(dst + j + i++) = *src++;
	*(dst + j + i) = '\0';
	return (len);
}

/*int main(void)
{
    const char *src = "";
    char dst[30] = "qué tal!";
    size_t size = 10;
    printf("%lu\n", ft_strlcat(dst, src, size));
	printf("%lu\n", strlcat(dst, src, size));
    printf("%lu\n", ft_strlen(src));
    return (0);
}*/
