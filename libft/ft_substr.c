/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarcia3 <sgarcia3@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 23:54:33 by sgarcia3          #+#    #+#             */
/*   Updated: 2023/10/24 20:43:58 by sgarcia3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *
 * @file ft_substr.c
 * @brief: returns a substring starting from the 'start' index and of length 
 *'len' from the string 's'.
 *
 * @param s: string from which the substring will be created
 * @param start: index in the string 's' where the substring will start
 * @param len: length of the substring to be created
 *
 * @return: a pointer to the newly created substring. If 'start' is greater 
 * than the length of 's', a string of length 1 containing only the null 
 * character is returned.
 *
 * @author: sgarcia3
 * @date: 22/09/2023
 *
 */

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dst;

	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
	{
		dst = ft_calloc(sizeof(char), 1);
		if (!dst)
			return (NULL);
	}
	else
	{
		if (ft_strlen(s + start) < len)
			len = ft_strlen(s + start);
		dst = ft_calloc(sizeof(char), len + 1);
		if (!dst)
			return (NULL);
		ft_memmove(dst, s + start, len);
	}
	return (dst);
}

/*int main(void)
{
    char *s = "Hola Sara";
    unsigned int start = 11;
    size_t len = 3;
    printf("%s\n", ft_substr(s, start, len));
    return (0);
}*/
