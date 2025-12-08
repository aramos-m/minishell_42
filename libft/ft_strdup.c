/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarcia3<sgarcia3@student.42madrid.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 01:17:00 by sgarcia3          #+#    #+#             */
/*   Updated: 2023/09/22 23:13:21 by sgarcia3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

/**
 * @file ft_strdup.c
 * @brief: returns a pointer to a new string which is a duplicate of the 
 * string 's'.
 *
 * @param s: string to be duplicated
 *
 * @return: a pointer to the newly created duplicate string. If memory 
 * allocation fails, it returns NULL.
 *
 * @author: sgarcia3
 * @date: 22/09/2023
 */

char	*ft_strdup(const char *s)
{
	char	*cpy;
	size_t	n;

	n = ft_strlen(s);
	cpy = malloc(n + 1);
	if (cpy == NULL)
		return (NULL);
	n = 0;
	while (*s)
	{
		*(cpy + n) = *s++;
		n++;
	}
	*(cpy + n) = '\0';
	return (cpy);
}

/*int main(void)
{
    char *s = "hello";
    printf("%s\n", ft_strdup(s));
    printf("%s\n", strdup(s));
    return (0);
}*/
