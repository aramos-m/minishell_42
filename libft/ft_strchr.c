/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarcia3 <sgarcia3@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 01:26:54 by sgarcia3           #+#    #+#            */
/*   Updated: 2023/10/15 20:58:04 by sgarcia3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

/**
 *
 * @file ft_strchr.c
 * @brief: returns a pointer to the first occurrence of the character 'c' in 
 * the string 's'.
 *
 * @param s: string in which the character will be searched
 * @param c: character to be found
 *
 * @return: a pointer to the first occurrence of the character 'c' in the 
 * string 's'. If 'c' is not found, it returns NULL.
 *
 * @author: sgarcia3
 * @date: 19/09/2023
 *
 */

char	*ft_strchr(const char *s, int c)
{
	char	*tmp;

	tmp = (char *)s;
	while (*tmp)
	{
		if (*tmp == (char)c)
			return (tmp);
		tmp++;
	}
	if ((char)c == '\0')
		return (tmp);
	return (NULL);
}

/*int main(void)
{
    char *str = "Hola Sara, ¿qué tal?";
    printf("ft_strchr: %s\n", ft_strchr(str, '\0'));
    printf("strchr: %s\n", strchr(str, '\0'));
}*/
