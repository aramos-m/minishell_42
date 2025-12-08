/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarcia3 <sgarcia3@student.42madrid.com>    +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 15:52:02 by sgarcia3           #+#    #+#            */
/*   Updated: 2023/09/22 22:38:52 by sgarcia3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

/**
* @file ft_memchr.c
* @brief locates the first occurrence of c (converted to an unsigned char) 
* in string s
* Iterates n times until finds c in s (tmp) or not. If it happens, returns
* a pointe to the position, if not, return NULL.
* 
* @param s: string to search
* @param c: character to search
* @param n: number of bytes to search
*
* @author sgarcia3
* @date 22/09/2023
*/

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*tmp;

	i = 0;
	tmp = (unsigned char *)s;
	if (n == 0)
		return (NULL);
	while (i < n)
	{
		if (*tmp == (unsigned char)c)
			return (tmp);
		tmp++;
		i++;
	}
	return (NULL);
}

/*int main(void)
{
    char *src1 = "";
    char *src2 = "";
    char c = 'o';
    size_t n = 5;
    char *p = ft_memchr(src1, c, n);
    char *q = memchr(src2, c, n);
    printf("%s\n", p);
    printf("%s\n", q);
    if (ft_memchr(src1, c, n) == memchr(src2, c, n))
        printf("Iguales\n");
    else
        printf("Diferentes\n");
    return (0);
}*/
