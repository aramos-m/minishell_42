/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarcia3 <sgarcia3@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 19:52:55 by sgarcia3          #+#    #+#             */
/*   Updated: 2023/10/17 15:28:39 by sgarcia3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

/**
 * @file ft_strtrim.c
 * @brief: returns a new string which is a copy of the string 's1' with all 
 * characters in 'set' removed from the beginning and the end.
 *
 * @param s1: string from which characters will be removed
 * @param set: characters to be removed
 *
 * @return: a new string with all characters in 'set' removed from the 
 * beginning and the end. If either 's1' or 'set' is NULL, it returns NULL.
 *
 * @author: sgarcia3
 * @date: 28/09/2023
 */

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;

	if (!s1 || !set)
		return (NULL);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	len = ft_strlen(s1);
	while (len && ft_strchr(set, *(s1 + len)))
		len--;
	return (ft_substr(s1, 0, len + 1));
}

/*int main(void)
{
	char *src = "Hola Sara, Hola";
	char *set = "Hola";
	printf("%s\n", ft_strtrim(src, set));
	return (0);
}*/
