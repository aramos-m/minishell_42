/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarcia <sgarcia3@student.42madrid.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 01:13:02 by sgarcia           #+#    #+#             */
/*   Updated: 2023/10/15 20:48:08 by sgarcia3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

/**
 *
 * @file ft_strnstr.c
 * @brief: returns a pointer to the first occurrence of the string 'little' 
 * in the string 'big', where not more than 'len' characters are searched.
 *
 * @param big: string in which the substring will be searched
 * @param little: substring to be found
 * @param len: maximum number of characters to be searched
 *
 * @return: a pointer to the first occurrence of the string 'little' in the 
 * string 'big'. If 'little' is not found, it returns NULL.
 *
 * @author: sgarcia3
 * @date: 20/09/2023
 *
 */

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	char	*tmpb;
	char	*tmpl;

	i = 0;
	tmpb = (char *)big;
	tmpl = (char *)little;
	if (*tmpl == '\0')
		return (tmpb);
	if (len == 0)
		return (NULL);
	while (*(tmpb + i) && i < len)
	{
		j = 0;
		while (*(tmpl + j) && (*(tmpb + i + j) == *(tmpl + j)) && i + j < len)
		{
			if (*(tmpl + j + 1) == '\0' || (i + j) == len)
				return (tmpb + i);
			j++;
		}
		i++;
	}
	return (NULL);
}

/*int main(void)
{
    char *big = "Hola Sara, ¿cómo estás?";
    char *little = "";
    size_t len = 6;
    printf("ft_strnstr: %s\n", ft_strnstr(big, little, len));
    printf("strnstr: %s\n", strnstr(big, little, len));
    return (0);
}*/
