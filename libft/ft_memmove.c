/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarcia3 <sgarcia3@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 20:57:13 by sgarcia3          #+#    #+#             */
/*   Updated: 2023/09/22 22:04:37 by sgarcia3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

/**
* @file ft_memmove.c
* @brief The memmove() function copies len bytes from string src to string 
* dst. The two strings may overlap; the copy is always done in a 
* non-destructive manner.
*
* @param dst: destination string
* @param src: source string
* @param len: number of bytes to copie
*
* @author sgarcia3
* @date 22/09/2023
*/

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*tmp;

	tmp = dst;
	if (!dst && !src)
		return (dst);
	if (dst == src)
		return (dst);
	if (src < dst)
		while (len--)
			*((char *)dst + len) = *((char *)src + len);
	else
		while (len--)
			*(char *)dst++ = *(char *)src++;
	return (tmp);
}

/*int	main(void)
{
	char *src1 = "Hola Sara, qué tal!";
	char dst1[20];
	char *src2 = "Hola Sara, qué tal!";
	char dst2[20];
	size_t len = 3;
	ft_memmove(dst1, src1+10, len);
	memmove(dst2, src2+10, len);
	printf("ft_memmove: %s\n", dst1);
	printf("memmove: %s\n", dst2);
	return (0);
}*/
