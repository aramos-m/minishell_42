/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarcia3 <sgarcia3@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 18:38:47 by sgarcia3          #+#    #+#             */
/*   Updated: 2023/10/25 16:43:49 by sgarcia3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * @file ft_memcpy.c
 * @brief Copies n bytes from the memory area src to the memory area dst. If 
 * dst and src overlap, the behavior is unpredictable. (Use memmove to avoid 
 *this behavior).
 *
 * If dst and src are NULL the function returns NULL. Despite being of type
 * void, as it is declared with a *, this can return a pointer.
 * We copy src into dst n bytes and return a pointer to dst.
 *
 * @param dst: destination
 * @param src: source
 * @param n: number of bytes to copy
 * @return tmp: pointer to the original value of dst
 *
 * @author: sgarcia3
 * @date: 12/09/2023
 */

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	void	*tmp;

	if (dst == NULL && src == NULL)
		return (NULL);
	i = 0;
	tmp = dst;
	while (i < n)
	{
		*((unsigned char *)dst++) = *((unsigned char *)src++);
		i++;
	}
	return ((unsigned char *)tmp);
}

/*int	main(void)
{
	char	dst[0];
	char	*src = "";
	ft_memcpy(dst, src, 22);
	printf("%s\n", dst);
	printf("%lu\n", sizeof(dst));
	return (0);
}*/
