/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarcia3 <sgarcia3@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 02:43:47 by sgarcia3          #+#    #+#             */
/*   Updated: 2023/10/15 20:57:28 by sgarcia3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

/**
 * @file ft_strjoin.c
 * @brief: returns a new string which is the result of concatenating the 
 *strings 's1' and 's2'.
 *
 * @param s1: first string to be concatenated
 * @param s2: second string to be concatenated
 *
 * @return: a new string which is the result of concatenating the strings 
 * 's1' and 's2'. If memory allocation fails, it returns NULL.
 *
 * @author: sgarcia3
 * @date: 23/09/2023
 *
 */

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len;
	char	*ptr;
	char	*tmp;

	len = ft_strlen(s1) + ft_strlen(s2);
	ptr = malloc(len + 1);
	tmp = ptr;
	if (ptr == NULL)
		return (NULL);
	while (*s1)
		*ptr++ = *s1++;
	while (*s2)
		*ptr++ = *s2++;
	*ptr = '\0';
	return (tmp);
}

/*int main(void)
{
    char *s1 = "Hola ";
    char *s2 = "Sara.";
    printf("%s\n", ft_strjoin(s1, s2));
    return (0);
}*/
