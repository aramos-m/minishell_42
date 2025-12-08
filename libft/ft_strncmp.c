/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarcia3 <sgarcia3@student.42madrid.com>    +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 14:43:46 by sgarcia3          #+#    #+#             */
/*   Updated: 2023/10/15 20:50:26 by sgarcia3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

/**
 * @file ft_strncmp.c
 * @brief: compares at most the first 'n' characters of 's1' and 's2'.
 *
 * @param s1: first string to be compared
 * @param s2: second string to be compared
 * @param n: maximum number of characters to be compared
 *
 * @return: an integer less than, equal to, or greater than zero if 's1' is 
 * found, respectively, to be less than, to match, or be greater than 's2'.
 *
 * @author: sgarcia3
 * @date: 19/09/2023
 */

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (*s1 && *s2 && (*s1 == *s2) && i < n - 1)
	{
		s1++;
		s2++;
		i++;
	}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}

/*int main(void)
{
    char *str = "";
    char *dst = "";
    size_t n = 0;
    printf("%d\n", ft_strncmp("1234", "1235", 4));
    printf("%d\n", strncmp("1234", "1235", 4));
    return (0);
}*/
