/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarcia3 <sgarcia3@student.42madrid.com>    +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 21:56:51 by sgarcia3          #+#    #+#             */
/*   Updated: 2023/09/25 22:48:37 by sgarcia3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

/**
* @file ft_memcmp.c
* @brief Function compares byte string s1 against byte string s2.  Both 
* strings are assumed to be n bytes long.
* 
* @param s1: First string to compare
* @param s2: Second string to compare
* @param n: number of bytes in which to compare
* @return: zero if two string are identical, a negative number is second
* is biger then first and a positive number is first is biger then 
* second.
*
* @author sgarcia3
* @date 25/09/20023
*/

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*tmp1;
	unsigned char	*tmp2;

	i = 0;
	tmp1 = (unsigned char *)s1;
	tmp2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while (i < n)
	{
		if (*tmp1 != *tmp2)
			return (*tmp1 - *tmp2);
		tmp1++;
		tmp2++;
		i++;
	}
	return (0);
}

/*int main(void)
{
    char *str1 = "ola";
    char *str2 = "ola";
    size_t n = 0;
    printf("%d\n", ft_memcmp(str1, str2, n));
    printf("%d\n", memcmp(str1, str2, n));
    return (0);
}*/
