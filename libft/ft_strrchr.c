/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarcia3 <sgarcia3@student.42madrid.com>    +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 10:29:57 by sgarcia3           #+#    #+#            */
/*   Updated: 2023/10/15 20:46:40 by sgarcia3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

/**
 * @file ft_strrchr.c
 * @brief: returns a pointer to the last occurrence of the character 'c' 
 * in the string 's'.
 *
 * @param s: string in which the character will be searched
 * @param c: character to be found
 *
 * @return: a pointer to the last occurrence of the character 'c' in the 
 * string 's'. If 'c' is not found, it returns NULL.
 *
 * @author: sgarcia3
 * @date: 19/09/2023
 */

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*tmp;

	i = (int)ft_strlen(s);
	tmp = (char *)s;
	while (i >= 0)
	{
		if (*(tmp + i) == (char)c)
			return (tmp + i);
		i--;
	}
	if ((char)c == '\0')
		return (tmp + i);
	return (0);
}

/*int main(void)
{
    char *str = "Hola Sara, ¿qué tal?";
    printf("ft_strchr: %s\n", ft_strrchr(str, 'x'));
    printf("strchr: %s\n", strrchr(str, 'x'));
}*/
